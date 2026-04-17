`timescale 1ns/1ps
`include "structural/coin_decoder.v"
`include "structural/change_maker.v"
`include "structural/vending_controller.v"
`include "structural/vending_datapath.v"

module vending_structural(
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

wire coin_valid;
wire [5:0] coin_value;
wire [5:0] inc_01;
wire [5:0] inc_02;
wire [5:0] inc_05;
wire [5:0] inc_10;

wire cfg_load;
wire [3:0] cfg_index;
wire apply_coin;
wire apply_confirm;
wire apply_cancel;

vending_coin_decoder coin_decoder(
    .coin(coin),
    .valid(coin_valid),
    .value(coin_value),
    .inc_01(inc_01),
    .inc_02(inc_02),
    .inc_05(inc_05),
    .inc_10(inc_10)
);

vending_controller controller(
    .clk(clk),
    .rst(rst),
    .coin_valid(coin_valid),
    .conferma(conferma),
    .annulla(annulla),
    .cfg_load(cfg_load),
    .cfg_index(cfg_index),
    .apply_coin(apply_coin),
    .apply_confirm(apply_confirm),
    .apply_cancel(apply_cancel)
);

vending_datapath datapath(
    .clk(clk),
    .rst(rst),
    .coin(coin),
    .selezione(selezione),
    .cfg_load(cfg_load),
    .cfg_index(cfg_index),
    .apply_coin(apply_coin),
    .apply_confirm(apply_confirm),
    .apply_cancel(apply_cancel),
    .coin_valid(coin_valid),
    .coin_value(coin_value),
    .inc_01(inc_01),
    .inc_02(inc_02),
    .inc_05(inc_05),
    .inc_10(inc_10),
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

endmodule
