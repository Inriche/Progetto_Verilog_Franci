module Stato1(

	input [5:0] A1, A2, A3,
	input [1:0] Ctrl,
	input [9:0] B1, B2, B3,
	input [5:0] C1, C2, C3,
	
	input Ctrl_mux9, Ctrl_mux5,
	
	input [5:0] D0, D1, E0, E1, F0, F1, G0, G1, H0, H1, I0, I1, J0, J1, K0, K1,
	
	input clock,

	output [5:0] OA, OC, OD, OE, OF, OG, OH, OI, OJ, OK,
	output [9:0] OB

);



	mux_reg #(6) m1(
		.a1(A1),
		.a2(A2),
		.a3(A3),
		.control(Ctrl),
		.Clock(clock),
		.out(OA)
	);
	
	
	mux_reg #(10) m2(
		.a1(B1),
		.a2(B2),
		.a3(B3),
		.control(Ctrl),
		.Clock(clock),
		.out(OB)
	);	
	
	
	mux_reg #(6) m3(
		.a1(C1),
		.a2(C2),
		.a3(C3),
		.control(Ctrl),
		.Clock(clock),
		.out(OC)
	);
	
	
	
	
	
	mux_reg_2ing #(6) m5(
		.a1(H0),
		.a0(H1),
		.cntrl(Ctrl_mux5),
		.Clock(clock),
		.out(OH)
	);
	
	
	mux_reg_2ing #(6) m6(
		.a1(I0),
		.a0(I1),
		.cntrl(Ctrl_mux5),
		.Clock(clock),
		.out(OI)
	);
	

	mux_reg_2ing #(6) m7(
		.a1(J0),
		.a0(J1),
		.cntrl(Ctrl_mux5),
		.Clock(clock),
		.out(OJ)
	);
	
	
	mux_reg_2ing #(6) m8(
		.a1(K0),
		.a0(K1),
		.cntrl(Ctrl_mux5),
		.Clock(clock),
		.out(OK)
	);
		
	
	
	
	
	mux_reg_2ing #(6) m9(
		.a1(D0),
		.a0(D1),
		.cntrl(Ctrl_mux9),
		.Clock(clock),
		.out(OD)
	);
	
	
	mux_reg_2ing #(6) m10(
		.a1(E0),
		.a0(E1),
		.cntrl(Ctrl_mux9),
		.Clock(clock),
		.out(OE)
	);
	

	mux_reg_2ing #(6) m11(
		.a1(F0),
		.a0(F1),
		.cntrl(Ctrl_mux9),
		.Clock(clock),
		.out(OF)
	);
	
	
	mux_reg_2ing #(6) m12(
		.a1(G0),
		.a0(G1),
		.cntrl(Ctrl_mux9),
		.Clock(clock),
		.out(OG)
	);
	
	
endmodule

//verilator --trace --binary tb_S1.v S1.v Mux2ingreg.v mux3ingreg.v reg_parallelo.v Mux2entrate.v mux3entrate.v --top-module tb_Stato1 -o provaS1
