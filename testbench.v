`timescale 1ns/1ps
`include "behavioral/vending_behavioral.v"
`include "structural/vending_structural.v"

module testbench;

reg clk;
reg rst;
reg [2:0] coin;
reg [2:0] selezione;
reg conferma;
reg annulla;

wire [5:0] credito_beh;
wire prodotto1_beh;
wire prodotto2_beh;
wire prodotto3_beh;
wire prodotto4_beh;
wire [1:0] errore_beh;
wire [5:0] resto_beh;
wire [9:0] disponibile_beh;
wire [5:0] coin_01_beh;
wire [5:0] coin_02_beh;
wire [5:0] coin_05_beh;
wire [5:0] coin_10_beh;

wire [5:0] credito_str;
wire prodotto1_str;
wire prodotto2_str;
wire prodotto3_str;
wire prodotto4_str;
wire [1:0] errore_str;
wire [5:0] resto_str;
wire [9:0] disponibile_str;
wire [5:0] coin_01_str;
wire [5:0] coin_02_str;
wire [5:0] coin_05_str;
wire [5:0] coin_10_str;

vending_behavioral dut_behavioral(
    .clk(clk),
    .rst(rst),
    .coin(coin),
    .selezione(selezione),
    .conferma(conferma),
    .annulla(annulla),
    .credito(credito_beh),
    .prodotto1(prodotto1_beh),
    .prodotto2(prodotto2_beh),
    .prodotto3(prodotto3_beh),
    .prodotto4(prodotto4_beh),
    .errore(errore_beh),
    .resto(resto_beh),
    .disponibile(disponibile_beh),
    .coin_01(coin_01_beh),
    .coin_02(coin_02_beh),
    .coin_05(coin_05_beh),
    .coin_10(coin_10_beh)
);

vending_structural dut_structural(
    .clk(clk),
    .rst(rst),
    .coin(coin),
    .selezione(selezione),
    .conferma(conferma),
    .annulla(annulla),
    .credito(credito_str),
    .prodotto1(prodotto1_str),
    .prodotto2(prodotto2_str),
    .prodotto3(prodotto3_str),
    .prodotto4(prodotto4_str),
    .errore(errore_str),
    .resto(resto_str),
    .disponibile(disponibile_str),
    .coin_01(coin_01_str),
    .coin_02(coin_02_str),
    .coin_05(coin_05_str),
    .coin_10(coin_10_str)
);

always #5 clk = ~clk;

task compare_outputs;
    input [255:0] context;
    begin
        if (
            credito_beh !== credito_str ||
            prodotto1_beh !== prodotto1_str ||
            prodotto2_beh !== prodotto2_str ||
            prodotto3_beh !== prodotto3_str ||
            prodotto4_beh !== prodotto4_str ||
            errore_beh !== errore_str ||
            resto_beh !== resto_str ||
            disponibile_beh !== disponibile_str ||
            coin_01_beh !== coin_01_str ||
            coin_02_beh !== coin_02_str ||
            coin_05_beh !== coin_05_str ||
            coin_10_beh !== coin_10_str
        ) begin
            $display("Comparison failure during %0s", context);
            $display("behavioral credito=%0d prodotti=%b%b%b%b errore=%b resto=%0d disponibile=%0d coins=%0d,%0d,%0d,%0d",
                credito_beh,
                prodotto1_beh,
                prodotto2_beh,
                prodotto3_beh,
                prodotto4_beh,
                errore_beh,
                resto_beh,
                disponibile_beh,
                coin_01_beh,
                coin_02_beh,
                coin_05_beh,
                coin_10_beh
            );
            $display("structural credito=%0d prodotti=%b%b%b%b errore=%b resto=%0d disponibile=%0d coins=%0d,%0d,%0d,%0d",
                credito_str,
                prodotto1_str,
                prodotto2_str,
                prodotto3_str,
                prodotto4_str,
                errore_str,
                resto_str,
                disponibile_str,
                coin_01_str,
                coin_02_str,
                coin_05_str,
                coin_10_str
            );
            $fatal(1);
        end
    end
endtask

task require;
    input condition;
    input [255:0] message;
    begin
        if (!condition) begin
            $display("comparison testbench failure: %0s", message);
            $fatal(1);
        end
    end
endtask

task tick_and_compare;
    input [255:0] context;
    begin
        @(posedge clk);
        #1;
        compare_outputs(context);
    end
endtask

task load_config_word;
    input [5:0] value;
    input [255:0] context;
    begin
        coin = value[5:3];
        selezione = value[2:0];
        tick_and_compare(context);
    end
endtask

initial begin
    clk = 1'b0;
    rst = 1'b1;
    coin = 3'b000;
    selezione = 3'b000;
    conferma = 1'b0;
    annulla = 1'b0;

    rst = 1'b0;
    tick_and_compare("reset");
    rst = 1'b1;

    load_config_word(6'd2, "cfg qty1");
    load_config_word(6'd3, "cfg price1");
    load_config_word(6'd0, "cfg qty2");
    load_config_word(6'd7, "cfg price2");
    load_config_word(6'd1, "cfg qty3");
    load_config_word(6'd5, "cfg price3");
    load_config_word(6'd0, "cfg qty4");
    load_config_word(6'd9, "cfg price4");
    load_config_word(6'd5, "cfg coin01");
    load_config_word(6'd5, "cfg coin02");
    load_config_word(6'd3, "cfg coin05");
    load_config_word(6'd1, "cfg coin10");

    coin = 3'b000;
    selezione = 3'b000;
    tick_and_compare("post config");
    require(credito_beh == 6'd0, "credit should start at zero after configuration");
    require(disponibile_beh == 10'd40, "initial available amount should be 40");
    require(errore_beh == 2'b00, "error should be clear after configuration");

    coin = 3'b010;
    tick_and_compare("insert 0.2");
    require(credito_beh == 6'd2, "0.2 coin should add two tenths");
    require(disponibile_beh == 10'd42, "available amount should increase after 0.2 insertion");
    coin = 3'b000;
    tick_and_compare("release 0.2");

    coin = 3'b011;
    tick_and_compare("insert 0.5");
    require(credito_beh == 6'd7, "0.5 coin should accumulate credit");
    coin = 3'b000;
    tick_and_compare("release 0.5");

    coin = 3'b100;
    tick_and_compare("insert 1.0");
    require(credito_beh == 6'd17, "1.0 coin should accumulate credit");
    coin = 3'b000;
    tick_and_compare("release 1.0");

    selezione = 3'b001;
    conferma = 1'b1;
    tick_and_compare("buy product1");
    require(prodotto1_beh == 1'b1, "product 1 should be dispensed");
    require(resto_beh == 6'd14, "change should equal credit minus price");
    require(coin_10_beh == 6'd1 && coin_02_beh == 6'd2 && coin_05_beh == 6'd0 && coin_01_beh == 6'd0, "purchase change breakdown should be exact");
    require(credito_beh == 6'd0, "credit should reset after successful purchase");
    require(disponibile_beh == 10'd43, "available amount should retain only the product price");
    conferma = 1'b0;
    selezione = 3'b000;
    tick_and_compare("release confirm product1");
    require(prodotto1_beh == 1'b0, "product pulse should clear after one cycle");

    coin = 3'b010;
    tick_and_compare("insert 0.2 for insufficient test");
    coin = 3'b000;
    tick_and_compare("release 0.2 for insufficient test");
    selezione = 3'b011;
    conferma = 1'b1;
    tick_and_compare("insufficient product3");
    require(errore_beh == 2'b01, "insufficient credit must set error 01");
    require(credito_beh == 6'd5, "insufficient credit must expose the selected price");
    require(resto_beh == 6'd0, "failed purchase should not emit change");
    conferma = 1'b0;
    tick_and_compare("release insufficient confirm");

    coin = 3'b011;
    tick_and_compare("insert 0.5 after insufficient");
    require(credito_beh == 6'd7, "new coin should clear price display and restore credit display");
    require(errore_beh == 2'b00, "new coin should clear previous error");
    coin = 3'b000;
    tick_and_compare("release 0.5 after insufficient");

    selezione = 3'b011;
    conferma = 1'b1;
    tick_and_compare("buy product3");
    require(prodotto3_beh == 1'b1, "product 3 should be dispensed after enough credit");
    require(resto_beh == 6'd2, "product 3 should return two tenths");
    require(coin_02_beh == 6'd1, "product 3 change should emit one 0.2 coin");
    conferma = 1'b0;
    selezione = 3'b000;
    tick_and_compare("release confirm product3");

    coin = 3'b100;
    tick_and_compare("insert 1.0 for unavailable");
    coin = 3'b000;
    tick_and_compare("release 1.0 for unavailable");
    selezione = 3'b010;
    conferma = 1'b1;
    tick_and_compare("unavailable product2");
    require(errore_beh == 2'b10, "unavailable product must set error 10");
    require(credito_beh == 6'd10, "credit display should stay on credit when only unavailable");
    conferma = 1'b0;
    tick_and_compare("release unavailable confirm");

    annulla = 1'b1;
    tick_and_compare("cancel 1.0");
    require(resto_beh == 6'd10, "cancel must return full credit");
    require(coin_10_beh == 6'd1, "cancel of one euro should return one 1.0 coin");
    require(credito_beh == 6'd0, "cancel must clear credit");
    annulla = 1'b0;
    tick_and_compare("release cancel 1.0");

    coin = 3'b010;
    tick_and_compare("insert 0.2 for combined error");
    coin = 3'b000;
    tick_and_compare("release 0.2 for combined error");
    selezione = 3'b100;
    conferma = 1'b1;
    tick_and_compare("combined error product4");
    require(errore_beh == 2'b11, "combined unavailable and insufficient must set error 11");
    require(credito_beh == 6'd9, "combined error should expose the selected product price");
    conferma = 1'b0;
    tick_and_compare("release combined confirm");

    annulla = 1'b1;
    tick_and_compare("cancel 0.2");
    require(resto_beh == 6'd2, "cancel should return two tenths");
    require(coin_02_beh == 6'd1, "cancel of two tenths should emit one 0.2 coin");
    annulla = 1'b0;
    tick_and_compare("release cancel 0.2");

    coin = 3'b011;
    tick_and_compare("insert 0.5 for final cancel");
    coin = 3'b000;
    tick_and_compare("release 0.5 for final cancel");
    coin = 3'b010;
    tick_and_compare("insert 0.2 for final cancel");
    coin = 3'b000;
    tick_and_compare("release 0.2 for final cancel");
    require(credito_beh == 6'd7, "credit should be seven tenths before final cancel");

    annulla = 1'b1;
    tick_and_compare("cancel 0.7");
    require(resto_beh == 6'd7, "cancel should return seven tenths");
    require(coin_05_beh == 6'd1 && coin_02_beh == 6'd1, "cancel should emit exact 0.5 + 0.2 change");
    require(coin_10_beh == 6'd0 && coin_01_beh == 6'd0, "cancel should not emit extra coins");
    annulla = 1'b0;
    tick_and_compare("release cancel 0.7");

    require(disponibile_beh == 10'd48, "available amount should return to the expected post-tests value");

    $display("comparison testbench passed");
    $finish;
end

endmodule
