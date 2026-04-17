module a2 #(parameter N = 8)(
	input [N-1:0] A,
	output [N-1:0] O
);

	assign O = ~A + 1;

endmodule
