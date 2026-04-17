module Decoder #(parameter N = 8)(
	input [N-1:0] A, output reg [(2**N)-1:0] O
	);
	integer i;
	always @(A) begin
		for(i = 0; i < (2**N); i = i + 1) begin
			if(i[N-1:0] == A) O[i] = 1'b1;
			else O[i] = 1'b0;
		end
	end
endmodule
