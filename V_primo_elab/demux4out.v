module demux4(
	input [2:0] A,
	input [1:0] S,
	output reg [2:0] O3, O2, O1, O0
);


	always @(A, S) begin
		case(S)
			2'b00: begin
				O3 = 0;
				O2 = 0;
				O1 = 0;
				O0 = A;
			end
			2'b01: begin
				O3 = 0;
				O2 = 0;
				O1 = A;
				O0 = 0;
			end			
			2'b10: begin
				O3 = 0;
				O2 = A;
				O1 = 0;
				O0 = 0;
			end
			2'b11: begin
				O3 = A;
				O2 = 0;
				O1 = 0;
				O0 = 0;
			end
		endcase
	end
	
endmodule				
