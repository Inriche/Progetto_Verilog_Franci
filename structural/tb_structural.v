`timescale 1ns/1ps
`include "structural/vending_structural.v"

module tb_structural;

reg clk;
reg rst;
reg [2:0] coin;
reg [2:0] selezione;
reg conferma;
reg annulla;

wire [5:0] credito;
wire prodotto1;
wire prodotto2;
wire prodotto3;
wire prodotto4;
wire [1:0] errore;
wire [5:0] resto;
wire [9:0] disponibile;
wire [5:0] coin_01;
wire [5:0] coin_02;
wire [5:0] coin_05;
wire [5:0] coin_10;

vending_structural dut(
    .clk(clk),
    .rst(rst),
    .coin(coin),
    .selezione(selezione),
    .conferma(conferma),
    .annulla(annulla),
    .credito(credito),
    .prodotto1(prodotto1),
    .prodotto2(prodotto2),
    .prodotto3(prodotto3),
    .prodotto4(prodotto4),
    .errore(errore),
    .resto(resto),
    .disponibile(disponibile),
    .coin_01(coin_01),
    .coin_02(coin_02),
    .coin_05(coin_05),
    .coin_10(coin_10)
);

always #5 clk = ~clk;

task tick;
    begin
        @(posedge clk);
        #1;
    end
endtask

task load_config_word;
    input [5:0] value;
    begin
        coin = value[5:3];
        selezione = value[2:0];
        tick;
    end
endtask

task require;
    input condition;
    input [255:0] message;
    begin
        if (!condition) begin
            $display("tb_structural failure: %0s", message);
            $fatal(1);
        end
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
    tick;
    rst = 1'b1;

    load_config_word(6'd2);
    load_config_word(6'd3);
    load_config_word(6'd0);
    load_config_word(6'd7);
    load_config_word(6'd1);
    load_config_word(6'd5);
    load_config_word(6'd0);
    load_config_word(6'd9);
    load_config_word(6'd5);
    load_config_word(6'd5);
    load_config_word(6'd3);
    load_config_word(6'd1);

    coin = 3'b000;
    selezione = 3'b000;
    tick;

    require(credito == 6'd0, "credit should start at zero after configuration");
    require(disponibile == 10'd40, "initial available amount should be 40");
    require(errore == 2'b00, "error should be clear after configuration");

    coin = 3'b010;
    tick;
    require(credito == 6'd2, "0.2 coin should add two tenths");
    require(disponibile == 10'd42, "available amount should increase after coin insertion");
    coin = 3'b000;
    tick;

    coin = 3'b011;
    tick;
    require(credito == 6'd7, "0.5 coin should accumulate credit");
    coin = 3'b000;
    tick;

    coin = 3'b100;
    tick;
    require(credito == 6'd17, "1.0 coin should accumulate credit");
    coin = 3'b000;
    tick;

    selezione = 3'b001;
    conferma = 1'b1;
    tick;
    require(prodotto1 == 1'b1, "product 1 should be dispensed");
    require(resto == 6'd14, "change should equal credit minus price");
    require(coin_10 == 6'd1 && coin_02 == 6'd2 && coin_05 == 6'd0 && coin_01 == 6'd0, "change breakdown should be exact");
    require(credito == 6'd0, "credit should reset after successful purchase");
    require(disponibile == 10'd43, "available amount should retain only the product price");
    conferma = 1'b0;
    selezione = 3'b000;
    tick;
    require(prodotto1 == 1'b0, "product pulse should clear after one cycle");

    coin = 3'b010;
    tick;
    coin = 3'b000;
    tick;
    selezione = 3'b011;
    conferma = 1'b1;
    tick;
    require(errore == 2'b01, "insufficient credit must set error 01");
    require(credito == 6'd5, "insufficient credit must expose the selected product price");
    require(resto == 6'd0, "no change should be emitted on failed purchase");
    conferma = 1'b0;
    tick;

    coin = 3'b011;
    tick;
    require(credito == 6'd7, "new coin should clear price display and restore internal credit display");
    require(errore == 2'b00, "new coin should clear previous error");
    coin = 3'b000;
    tick;

    selezione = 3'b011;
    conferma = 1'b1;
    tick;
    require(prodotto3 == 1'b1, "product 3 should be dispensed after enough credit");
    require(resto == 6'd2, "purchase of product 3 should return two tenths");
    require(coin_02 == 6'd1, "returned change for product 3 should use one 0.2 coin");
    conferma = 1'b0;
    selezione = 3'b000;
    tick;

    coin = 3'b100;
    tick;
    coin = 3'b000;
    tick;
    selezione = 3'b010;
    conferma = 1'b1;
    tick;
    require(errore == 2'b10, "unavailable product must set error 10");
    require(credito == 6'd10, "credit display should stay on current credit when only unavailable");
    conferma = 1'b0;
    tick;

    annulla = 1'b1;
    tick;
    require(resto == 6'd10, "cancel must return full credit");
    require(coin_10 == 6'd1, "cancel of one euro should return one 1.0 coin");
    require(credito == 6'd0, "cancel must clear credit");
    annulla = 1'b0;
    tick;

    coin = 3'b010;
    tick;
    coin = 3'b000;
    tick;
    selezione = 3'b100;
    conferma = 1'b1;
    tick;
    require(errore == 2'b11, "combined unavailable and insufficient must set error 11");
    require(credito == 6'd9, "combined error should still expose selected product price");
    conferma = 1'b0;
    tick;

    annulla = 1'b1;
    tick;
    require(resto == 6'd2, "cancel should return the remaining two tenths");
    require(coin_02 == 6'd1, "cancel of two tenths should return one 0.2 coin");
    annulla = 1'b0;
    tick;

    coin = 3'b011;
    tick;
    coin = 3'b000;
    tick;
    coin = 3'b010;
    tick;
    coin = 3'b000;
    tick;
    require(credito == 6'd7, "credit should be seven tenths before cancel");

    annulla = 1'b1;
    tick;
    require(resto == 6'd7, "cancel should return seven tenths");
    require(coin_05 == 6'd1 && coin_02 == 6'd1, "cancel should emit exact 0.5 + 0.2 change");
    require(coin_10 == 6'd0 && coin_01 == 6'd0, "cancel should not emit extra coins");
    annulla = 1'b0;
    tick;

    require(disponibile == 10'd48, "available amount should return to the expected post-tests value");

    $display("tb_structural passed");
    $finish;
end

endmodule
