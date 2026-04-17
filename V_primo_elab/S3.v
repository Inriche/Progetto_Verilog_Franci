module stato3(
	input [2:0] Price_p1, Price_p2, Price_p3, Price_p4, Credito,
	input [1:0] Selezione,
	input Interno,
	output [2:0] RESTO
);

	wire [2:0] mm1, dd1, dd2, ad1, ss1, ad2, Maggiore, Minore;

	Multiplexer #(3) M1(
		.S(Selezione),
		.A3(Price_p4),
		.A2(Price_p3),
		.A1(Price_p2),
		.A0(Price_p1),
		.O(mm1)
	);


	Demux2 #(3) D1(
		.S(Interno),
		.A(Credito),
		.o0(dd1),
		.o1(dd2)
	);
	
	
	
	magg_min Mm1(
		.A(dd2),
		.B(mm1),
		.Magg(Maggiore),
		.Minn(Minore)
	);
	
	
	
	a2 #(3) ADUE1(
		.A(Maggiore),
		.O(ad1)	
	);


	Sommatore #(3) Sum1(
		.A(ad1),
		.B(Minore),
		.O(ss1)
	);
	
/*	
	a2 #(3) ADUE2(
		.A(ss1),
		.O(ad2)	
	);
*/
	
	mux2 #(3) M2(
		.A(dd1),
		.B(ss1), //ad2
		.seg_ctrl(Interno),
		.O(RESTO)
	);
	
	
endmodule


//verilator --trace --binary S3_tb.v S3.v Mux4entrate.v demux2ctrl.v Maggiore_minore.v complementoa2.v Adder1bit.v Mux2entrate.v comparatore_minoranza.v --top-module stato3tb -o provaS3
