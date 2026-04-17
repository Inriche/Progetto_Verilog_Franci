module mux_reg_2ing #(parameter N = 3)(
	input [N-1:0] a1,
	input [N-1:0] a0,
	input cntrl,
	input Clock,
	output [N-1:0] out
	);

	wire [N-1:0] muxreg;

	mux2 #(N) m1(
		.seg_ctrl(cntrl),
		.A(a1),
		.B(a0),
		.O(muxreg)
	);



	registroparallelo #(N) regpar(
		.D(muxreg),
		.clock(Clock),
		.Q(out)
	);
	
	
endmodule
