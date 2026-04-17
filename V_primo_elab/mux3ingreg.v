module mux_reg #(parameter N = 3)(
	input [N-1:0] a3,
	input [N-1:0] a2,
	input [N-1:0] a1,
	input [1:0] control,
	input Clock,
	output [N-1:0] out
	);

	wire [N-1:0] muxreg;

	multiplexer #(N) m1(
		.S(control),
		.A3(a3),
		.A2(a2),
		.A1(a1),
		.O(muxreg)
	);



	registroparallelo #(N) regpar(
		.D(muxreg),
		.clock(Clock),
		.Q(out)
	);
	
	
endmodule
