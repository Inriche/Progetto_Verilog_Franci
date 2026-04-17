module And #(parameter N = 8)(
	input [N-1:0] A, input [N-1:0] B,
	output reg [N-1:0] O
	);
	integer i;
	always @(A, B) begin
		for(i = 0; i < N; i = i + 1) begin
			O[i] = A[i] & B[i];
		end
	end
endmodule
