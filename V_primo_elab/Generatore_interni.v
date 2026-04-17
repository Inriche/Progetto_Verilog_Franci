module gen_int(
	input [1:0] Sel,
	input [2:0] QTY_P1, QTY_P2, QTY_P3, QTY_P4, PRICE_P1, PRICE_P2, PRICE_P3, PRICE_P4, CREDITO,
	output i
);

	wire [2:0] mm1, mm2;

	Multiplexer #(3) M1(
		.S(Sel),
		.A3(PRICE_P4),
		.A2(PRICE_P3),
		.A1(PRICE_P2),
		.A0(PRICE_P1),	
		.O(mm1)
	);
	
	
	Multiplexer #(3) M2(
		.S(Sel),
		.A3(QTY_P4),
		.A2(QTY_P3),
		.A1(QTY_P2),
		.A0(QTY_P1),	
		.O(mm2)
	);
	
	
	wire uu1, nn1;
	
	uguaglianza U1(
		.A(mm2[2]),
		.B(mm2[1]),
		.C(mm2[0]),
		.O(uu1)	
	);
	
	
	Not #(1) N1(
		.A(uu1),
		.O(nn1)
	);
	
	
	wire nn2, cp1;	
	
	comp_min minoranza(
		.str1(CREDITO),
		.str2(mm1),
		.O(cp1)
	);
	
	
	Not #(1) N2(
		.A(cp1),
		.O(nn2)
	);
	
	
	
	
	wire aa1;
	
	And #(1) A1(
		.A(nn1),
		.B(nn2),
		.O(i)
	);
	
	
endmodule	
