module vending_coin_decoder(
    input [2:0] coin,
    output reg valid,
    output reg [5:0] value,
    output reg [5:0] inc_01,
    output reg [5:0] inc_02,
    output reg [5:0] inc_05,
    output reg [5:0] inc_10
);

always @(*) begin
    valid = 1'b0;
    value = 6'd0;
    inc_01 = 6'd0;
    inc_02 = 6'd0;
    inc_05 = 6'd0;
    inc_10 = 6'd0;

    case (coin)
        3'b001: begin
            valid = 1'b1;
            value = 6'd1;
            inc_01 = 6'd1;
        end
        3'b010: begin
            valid = 1'b1;
            value = 6'd2;
            inc_02 = 6'd1;
        end
        3'b011: begin
            valid = 1'b1;
            value = 6'd5;
            inc_05 = 6'd1;
        end
        3'b100: begin
            valid = 1'b1;
            value = 6'd10;
            inc_10 = 6'd1;
        end
        default: begin
        end
    endcase
end

endmodule
