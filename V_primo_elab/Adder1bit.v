module Sommatore #(parameter N = 8)(
	input [N-1:0] A, input [N-1:0] B,
	output [N-1:0] O);
	
	assign O = A + B;
	
endmodule
