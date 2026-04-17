module Stato0(

	input [2:0] i1,
	input clk,
	output [2:0] O0, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11
	
	);
	
	wire [3:0] outcont;
	
	contatore comp1(
	
		.CLK(clk),
		.O(outcont)
	
	);
	
	wire [2:0] o0, o1, o2, o3, o4, o5, o6, o7, o8, o9, o10, o11;
	wire [15:0] outdec;
	
	demux comp2(
	
		.ctrl(outcont),
		.in(i1),
		.out0(o0),
		.out1(o1),
		.out2(o2),
		.out3(o3),
		.out4(o4),
		.out5(o5),
		.out6(o6),
		.out7(o7),
		.out8(o8),
		.out9(o9),
		.out10(o10),
		.out11(o11)
	
	);
	
	
	Decoder #(4) dec(
		.A(outcont),
		.O(outdec)	
	);
	
	
	registrope_en #(3) reg0(.D(o0), .clock(clk), .enable(outdec[0]), .Q(O0));
	registrope_en #(3) reg1(.D(o1), .clock(clk), .enable(outdec[1]), .Q(O1));
	registrope_en #(3) reg2(.D(o2), .clock(clk), .enable(outdec[2]), .Q(O2));
	registrope_en #(3) reg3(.D(o3), .clock(clk), .enable(outdec[3]), .Q(O3));
	registrope_en #(3) reg4(.D(o4), .clock(clk), .enable(outdec[4]), .Q(O4));
	registrope_en #(3) reg5(.D(o5), .clock(clk), .enable(outdec[5]), .Q(O5));
	registrope_en #(3) reg6(.D(o6), .clock(clk), .enable(outdec[6]), .Q(O6));
	registrope_en #(3) reg7(.D(o7), .clock(clk), .enable(outdec[7]), .Q(O7));	
	registrope_en #(3) reg8(.D(o8), .clock(clk), .enable(outdec[8]), .Q(O8));
	registrope_en #(3) reg9(.D(o9), .clock(clk), .enable(outdec[9]), .Q(O9));
	registrope_en #(3) reg10(.D(o10), .clock(clk), .enable(outdec[10]), .Q(O10));
	registrope_en #(3) reg11(.D(o11), .clock(clk), .enable(outdec[11]), .Q(O11));	
	
endmodule

//verilator --trace --binary tb_S0.v S0.v counter_12.v Regparallenable.v Demux_ctrl4.v reg_parallelo.v Adder1bit.v Decoder.v --top-module stato0_tb -o provaS0
