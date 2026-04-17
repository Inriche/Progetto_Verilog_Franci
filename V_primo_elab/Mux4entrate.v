module Multiplexer #(parameter N = 8) (
	input [1:0] S, input [N-1:0] A3, input [N-1:0] A2,
	input [N-1:0] A1, input [N-1:0] A0,
	output reg [N-1:0] O);
	always @(A3, A2, A1, S) begin
		case(S)
		2'b00: O = A0;
		2'b01: O = A1;
		2'b10: O = A2;
		2'b11: O = A3;
		endcase
	end
endmodule
