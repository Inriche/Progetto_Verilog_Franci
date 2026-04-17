module mux2 #(parameter N = 4)(
	input [N-1:0] A, B,
	input seg_ctrl,
	output reg [N-1:0] O
);

	always @(A, B, seg_ctrl) begin
		case(seg_ctrl)
		1'b0: O = A;
		1'b1: O = B;
		endcase
	end
	
endmodule
	
