module Demux2 #(parameter N = 8)(
	input S, input [N-1:0] A,
	output reg [N-1:0] o0, o1
	);	
	
	always @(S, A) begin
	
		case(S)
			1'b0: begin
				o0 = A;
				o1 = 0;
			end
			1'b1: begin
				o0 = 0;
				o1 = A;
			end
		endcase
		
	end
	
endmodule	
