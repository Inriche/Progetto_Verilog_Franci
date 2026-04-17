module Not #(parameter N = 8)(
	input [N-1:0] A,
	output reg [N-1:0] O
	);
	integer i;
	always @(A) begin
		for(i = 0; i < N; i = i + 1) begin
			O[i] = ~A[i];
		end
	end
endmodule
