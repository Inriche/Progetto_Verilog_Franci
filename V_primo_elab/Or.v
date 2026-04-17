module Or(
	input A, B,
	output reg O
);

	always @(A, B) begin
		O = A | B;
	end
	
endmodule
