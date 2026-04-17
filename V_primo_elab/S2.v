module stato2(
	input [2:0] QTY_P1, QTY_P2, QTY_P3, QTY_P4, CREDITO, PRICE_P1, PRICE_P2, PRICE_P3, PRICE_P4, SELEZIONE,
	input CONFERMA,
	output [2:0] NUOVO_QTYP1, NUOVO_QTYP2, NUOVO_QTYP3, NUOVO_QTYP4,
	output PNONVALID
);

	wire [1:0] new_sel;

	conf_sel Comp1(
		.selezione(SELEZIONE),
		.conferma(CONFERMA),
		.sel_reg(new_sel),
		.error(PNONVALID)	
	);

	wire interno, aa1;

	gen_int Comp2(
		.Sel(new_sel),
		.QTY_P1(QTY_P1),
		.QTY_P2(QTY_P2),
		.QTY_P3(QTY_P3),
		.QTY_P4(QTY_P4),
		.PRICE_P1(PRICE_P1),
		.PRICE_P2(PRICE_P2),
		.PRICE_P3(PRICE_P3),
		.PRICE_P4(PRICE_P4),
		.CREDITO(CREDITO),
		.i(interno)	
	);
	
	
	And #(1) Comp3(
		.A(interno),
		.B(CONFERMA),
		.O(aa1)
	);

	wire [2:0] c41;

	decremento Comp4(
		.QTY_P1(QTY_P1),
		.QTY_P2(QTY_P2),
		.QTY_P3(QTY_P3),
		.QTY_P4(QTY_P4),
		.Sel(new_sel),
		.Segnale_interno(aa1),
		.out(c41)	
	);


	demux4 Comp5(
		.A(c41),
		.S(new_sel),
		.O3(NUOVO_QTYP4),
		.O2(NUOVO_QTYP3),
		.O1(NUOVO_QTYP2),
		.O0(NUOVO_QTYP1)
	); 


endmodule
