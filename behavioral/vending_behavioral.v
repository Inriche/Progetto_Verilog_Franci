`timescale 1ns/1ps

module vending_behavioral(
    input clk,
    input rst,
    input [2:0] coin,
    input [2:0] selezione,
    input conferma,
    input annulla,
    output [5:0] credito,
    output prodotto1,
    output prodotto2,
    output prodotto3,
    output prodotto4,
    output [1:0] errore,
    output [5:0] resto,
    output [9:0] disponibile,
    output [5:0] coin_01,
    output [5:0] coin_02,
    output [5:0] coin_05,
    output [5:0] coin_10
);

localparam PHASE_CONFIG = 1'b0;
localparam PHASE_READY  = 1'b1;

reg phase_reg;
reg [3:0] config_index_reg;

reg [5:0] qty_p1_reg;
reg [5:0] qty_p2_reg;
reg [5:0] qty_p3_reg;
reg [5:0] qty_p4_reg;
reg [5:0] price_p1_reg;
reg [5:0] price_p2_reg;
reg [5:0] price_p3_reg;
reg [5:0] price_p4_reg;
reg [5:0] credit_reg;
reg [5:0] avail_01_reg;
reg [5:0] avail_02_reg;
reg [5:0] avail_05_reg;
reg [5:0] avail_10_reg;
reg [2:0] selected_reg;
reg [5:0] price_display_reg;
reg show_price_reg;

reg prodotto1_reg;
reg prodotto2_reg;
reg prodotto3_reg;
reg prodotto4_reg;
reg [1:0] errore_reg;
reg [5:0] resto_reg;
reg [5:0] coin_01_reg;
reg [5:0] coin_02_reg;
reg [5:0] coin_05_reg;
reg [5:0] coin_10_reg;

reg change_valid_reg;
reg [5:0] change_01_reg;
reg [5:0] change_02_reg;
reg [5:0] change_05_reg;
reg [5:0] change_10_reg;

integer n10;
integer n05;
integer n02;
integer rem;

wire [5:0] config_word;
wire [10:0] disponibile_full;
wire [5:0] selected_price_wire;
wire [5:0] selected_qty_wire;
wire selection_valid_wire;

assign config_word = {coin, selezione};
assign credito = show_price_reg ? price_display_reg : credit_reg;
assign prodotto1 = prodotto1_reg;
assign prodotto2 = prodotto2_reg;
assign prodotto3 = prodotto3_reg;
assign prodotto4 = prodotto4_reg;
assign errore = errore_reg;
assign resto = resto_reg;
assign coin_01 = coin_01_reg;
assign coin_02 = coin_02_reg;
assign coin_05 = coin_05_reg;
assign coin_10 = coin_10_reg;
assign disponibile_full = avail_01_reg + (avail_02_reg << 1) + (avail_05_reg * 6'd5) + (avail_10_reg * 6'd10);
assign disponibile = (disponibile_full > 11'd1023) ? 10'h3ff : disponibile_full[9:0];
assign selection_valid_wire = is_valid_selection(selezione);
assign selected_price_wire = price_for_selection(
    selezione,
    price_p1_reg,
    price_p2_reg,
    price_p3_reg,
    price_p4_reg
);
assign selected_qty_wire = qty_for_selection(
    selezione,
    qty_p1_reg,
    qty_p2_reg,
    qty_p3_reg,
    qty_p4_reg
);

function [5:0] decode_coin_value;
    input [2:0] coin_code;
    begin
        case (coin_code)
            3'b001: decode_coin_value = 6'd1;
            3'b010: decode_coin_value = 6'd2;
            3'b011: decode_coin_value = 6'd5;
            3'b100: decode_coin_value = 6'd10;
            default: decode_coin_value = 6'd0;
        endcase
    end
endfunction

function is_valid_selection;
    input [2:0] sel;
    begin
        case (sel)
            3'b001,
            3'b010,
            3'b011,
            3'b100: is_valid_selection = 1'b1;
            default: is_valid_selection = 1'b0;
        endcase
    end
endfunction

function [5:0] price_for_selection;
    input [2:0] sel;
    input [5:0] p1;
    input [5:0] p2;
    input [5:0] p3;
    input [5:0] p4;
    begin
        case (sel)
            3'b001: price_for_selection = p1;
            3'b010: price_for_selection = p2;
            3'b011: price_for_selection = p3;
            3'b100: price_for_selection = p4;
            default: price_for_selection = 6'd0;
        endcase
    end
endfunction

function [5:0] qty_for_selection;
    input [2:0] sel;
    input [5:0] q1;
    input [5:0] q2;
    input [5:0] q3;
    input [5:0] q4;
    begin
        case (sel)
            3'b001: qty_for_selection = q1;
            3'b010: qty_for_selection = q2;
            3'b011: qty_for_selection = q3;
            3'b100: qty_for_selection = q4;
            default: qty_for_selection = 6'd0;
        endcase
    end
endfunction

task compute_change;
    input [5:0] amount;
    input [5:0] available_01;
    input [5:0] available_02;
    input [5:0] available_05;
    input [5:0] available_10;
    begin
        change_valid_reg = 1'b0;
        change_01_reg = 6'd0;
        change_02_reg = 6'd0;
        change_05_reg = 6'd0;
        change_10_reg = 6'd0;

        for (n10 = 63; n10 >= 0; n10 = n10 - 1) begin
            if (!change_valid_reg && n10 <= available_10 && (n10 * 10) <= amount) begin
                for (n05 = 63; n05 >= 0; n05 = n05 - 1) begin
                    if (!change_valid_reg && n05 <= available_05 && ((n10 * 10) + (n05 * 5)) <= amount) begin
                        for (n02 = 63; n02 >= 0; n02 = n02 - 1) begin
                            rem = amount - (n10 * 10) - (n05 * 5) - (n02 * 2);
                            if (
                                !change_valid_reg &&
                                n02 <= available_02 &&
                                rem >= 0 &&
                                rem <= available_01
                            ) begin
                                change_valid_reg = 1'b1;
                                change_10_reg = n10[5:0];
                                change_05_reg = n05[5:0];
                                change_02_reg = n02[5:0];
                                change_01_reg = rem[5:0];
                            end
                        end
                    end
                end
            end
        end
    end
endtask

always @(posedge clk or negedge rst) begin
    if (!rst) begin
        phase_reg <= PHASE_CONFIG;
        config_index_reg <= 4'd0;
        qty_p1_reg <= 6'd0;
        qty_p2_reg <= 6'd0;
        qty_p3_reg <= 6'd0;
        qty_p4_reg <= 6'd0;
        price_p1_reg <= 6'd0;
        price_p2_reg <= 6'd0;
        price_p3_reg <= 6'd0;
        price_p4_reg <= 6'd0;
        credit_reg <= 6'd0;
        avail_01_reg <= 6'd0;
        avail_02_reg <= 6'd0;
        avail_05_reg <= 6'd0;
        avail_10_reg <= 6'd0;
        selected_reg <= 3'd0;
        price_display_reg <= 6'd0;
        show_price_reg <= 1'b0;
        prodotto1_reg <= 1'b0;
        prodotto2_reg <= 1'b0;
        prodotto3_reg <= 1'b0;
        prodotto4_reg <= 1'b0;
        errore_reg <= 2'b00;
        resto_reg <= 6'd0;
        coin_01_reg <= 6'd0;
        coin_02_reg <= 6'd0;
        coin_05_reg <= 6'd0;
        coin_10_reg <= 6'd0;
    end else begin
        prodotto1_reg <= 1'b0;
        prodotto2_reg <= 1'b0;
        prodotto3_reg <= 1'b0;
        prodotto4_reg <= 1'b0;

        if (phase_reg == PHASE_CONFIG) begin
            credit_reg <= 6'd0;
            selected_reg <= 3'd0;
            show_price_reg <= 1'b0;
            price_display_reg <= 6'd0;
            errore_reg <= 2'b00;
            resto_reg <= 6'd0;
            coin_01_reg <= 6'd0;
            coin_02_reg <= 6'd0;
            coin_05_reg <= 6'd0;
            coin_10_reg <= 6'd0;

            case (config_index_reg)
                4'd0:  qty_p1_reg <= config_word;
                4'd1:  price_p1_reg <= config_word;
                4'd2:  qty_p2_reg <= config_word;
                4'd3:  price_p2_reg <= config_word;
                4'd4:  qty_p3_reg <= config_word;
                4'd5:  price_p3_reg <= config_word;
                4'd6:  qty_p4_reg <= config_word;
                4'd7:  price_p4_reg <= config_word;
                4'd8:  avail_01_reg <= config_word;
                4'd9:  avail_02_reg <= config_word;
                4'd10: avail_05_reg <= config_word;
                4'd11: avail_10_reg <= config_word;
                default: begin
                end
            endcase

            if (config_index_reg == 4'd11) begin
                phase_reg <= PHASE_READY;
                config_index_reg <= 4'd0;
            end else begin
                config_index_reg <= config_index_reg + 4'd1;
            end
        end else if (annulla) begin
            compute_change(
                credit_reg,
                avail_01_reg,
                avail_02_reg,
                avail_05_reg,
                avail_10_reg
            );

            errore_reg <= 2'b00;
            show_price_reg <= 1'b0;
            price_display_reg <= 6'd0;

            if (credit_reg != 6'd0 && change_valid_reg) begin
                avail_01_reg <= avail_01_reg - change_01_reg;
                avail_02_reg <= avail_02_reg - change_02_reg;
                avail_05_reg <= avail_05_reg - change_05_reg;
                avail_10_reg <= avail_10_reg - change_10_reg;
                resto_reg <= credit_reg;
                coin_01_reg <= change_01_reg;
                coin_02_reg <= change_02_reg;
                coin_05_reg <= change_05_reg;
                coin_10_reg <= change_10_reg;
                credit_reg <= 6'd0;
                selected_reg <= 3'd0;
            end else begin
                resto_reg <= 6'd0;
                coin_01_reg <= 6'd0;
                coin_02_reg <= 6'd0;
                coin_05_reg <= 6'd0;
                coin_10_reg <= 6'd0;
                if (credit_reg == 6'd0) begin
                    selected_reg <= 3'd0;
                end
            end
        end else if (conferma && selection_valid_wire) begin
            compute_change(
                credit_reg - selected_price_wire,
                avail_01_reg,
                avail_02_reg,
                avail_05_reg,
                avail_10_reg
            );

            selected_reg <= selezione;
            resto_reg <= 6'd0;
            coin_01_reg <= 6'd0;
            coin_02_reg <= 6'd0;
            coin_05_reg <= 6'd0;
            coin_10_reg <= 6'd0;

            if ((selected_qty_wire == 6'd0) || (credit_reg < selected_price_wire)) begin
                errore_reg <= {selected_qty_wire == 6'd0, credit_reg < selected_price_wire};
                if (credit_reg < selected_price_wire) begin
                    show_price_reg <= 1'b1;
                    price_display_reg <= selected_price_wire;
                end else begin
                    show_price_reg <= 1'b0;
                    price_display_reg <= 6'd0;
                end
            end else if (change_valid_reg) begin
                errore_reg <= 2'b00;
                show_price_reg <= 1'b0;
                price_display_reg <= 6'd0;
                resto_reg <= credit_reg - selected_price_wire;
                coin_01_reg <= change_01_reg;
                coin_02_reg <= change_02_reg;
                coin_05_reg <= change_05_reg;
                coin_10_reg <= change_10_reg;
                credit_reg <= 6'd0;
                selected_reg <= 3'd0;
                avail_01_reg <= avail_01_reg - change_01_reg;
                avail_02_reg <= avail_02_reg - change_02_reg;
                avail_05_reg <= avail_05_reg - change_05_reg;
                avail_10_reg <= avail_10_reg - change_10_reg;

                case (selezione)
                    3'b001: begin
                        qty_p1_reg <= qty_p1_reg - 6'd1;
                        prodotto1_reg <= 1'b1;
                    end
                    3'b010: begin
                        qty_p2_reg <= qty_p2_reg - 6'd1;
                        prodotto2_reg <= 1'b1;
                    end
                    3'b011: begin
                        qty_p3_reg <= qty_p3_reg - 6'd1;
                        prodotto3_reg <= 1'b1;
                    end
                    3'b100: begin
                        qty_p4_reg <= qty_p4_reg - 6'd1;
                        prodotto4_reg <= 1'b1;
                    end
                    default: begin
                    end
                endcase
            end else begin
                errore_reg <= 2'b00;
                show_price_reg <= 1'b0;
                price_display_reg <= 6'd0;
            end
        end else if (decode_coin_value(coin) != 6'd0) begin
            credit_reg <= credit_reg + decode_coin_value(coin);
            errore_reg <= 2'b00;
            show_price_reg <= 1'b0;
            price_display_reg <= 6'd0;
            resto_reg <= 6'd0;
            coin_01_reg <= 6'd0;
            coin_02_reg <= 6'd0;
            coin_05_reg <= 6'd0;
            coin_10_reg <= 6'd0;

            case (coin)
                3'b001: avail_01_reg <= avail_01_reg + 6'd1;
                3'b010: avail_02_reg <= avail_02_reg + 6'd1;
                3'b011: avail_05_reg <= avail_05_reg + 6'd1;
                3'b100: avail_10_reg <= avail_10_reg + 6'd1;
                default: begin
                end
            endcase
        end
    end
end

endmodule
