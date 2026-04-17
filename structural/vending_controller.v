module vending_controller(
    input clk,
    input rst,
    input coin_valid,
    input conferma,
    input annulla,
    output reg cfg_load,
    output reg [3:0] cfg_index,
    output reg apply_coin,
    output reg apply_confirm,
    output reg apply_cancel
);

localparam ST_CFG_0  = 4'd0;
localparam ST_CFG_1  = 4'd1;
localparam ST_CFG_2  = 4'd2;
localparam ST_CFG_3  = 4'd3;
localparam ST_CFG_4  = 4'd4;
localparam ST_CFG_5  = 4'd5;
localparam ST_CFG_6  = 4'd6;
localparam ST_CFG_7  = 4'd7;
localparam ST_CFG_8  = 4'd8;
localparam ST_CFG_9  = 4'd9;
localparam ST_CFG_10 = 4'd10;
localparam ST_CFG_11 = 4'd11;
localparam ST_READY  = 4'd12;

reg [3:0] state_reg;
reg [3:0] state_next;

always @(posedge clk or negedge rst) begin
    if (!rst) begin
        state_reg <= ST_CFG_0;
    end else begin
        state_reg <= state_next;
    end
end

always @(*) begin
    cfg_load = 1'b0;
    cfg_index = 4'd0;
    apply_coin = 1'b0;
    apply_confirm = 1'b0;
    apply_cancel = 1'b0;
    state_next = state_reg;

    case (state_reg)
        ST_CFG_0,
        ST_CFG_1,
        ST_CFG_2,
        ST_CFG_3,
        ST_CFG_4,
        ST_CFG_5,
        ST_CFG_6,
        ST_CFG_7,
        ST_CFG_8,
        ST_CFG_9,
        ST_CFG_10,
        ST_CFG_11: begin
            cfg_load = 1'b1;
            cfg_index = state_reg;
            if (state_reg == ST_CFG_11) begin
                state_next = ST_READY;
            end else begin
                state_next = state_reg + 4'd1;
            end
        end
        ST_READY: begin
            if (annulla) begin
                apply_cancel = 1'b1;
            end else if (conferma) begin
                apply_confirm = 1'b1;
            end else if (coin_valid) begin
                apply_coin = 1'b1;
            end
        end
        default: begin
            state_next = ST_CFG_0;
        end
    endcase
end

endmodule
