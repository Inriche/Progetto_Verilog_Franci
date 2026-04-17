module decremento(
	input [2:0] QTY_P1, QTY_P2, QTY_P3, QTY_P4,
	input [1:0] Sel,
	input Segnale_interno,
	output reg [2:0] out
);

	wire [2:0] mm1, ad1, ss1, ss2;
	wire [2:0] w = 3'b000;

	Multiplexer #(3) M1(
		.S(Sel),
		.A3(QTY_P4),
		.A2(QTY_P3),
		.A1(QTY_P2),
		.A0(QTY_P1),
		.O(mm1)
	);
	
	
	a2 #(3) ADUE1(
		.A(mm1),
		.O(ad1)
	);
	
	
	Sommatore #(3) S1(
		.A(ad1),
		.B(3'b001),
		.O(ss1)
	);
	
	
	a2 #(3) ADUE2(
		.A(ss1),
		.O(ss2)
	);	

	
	mux2 #(3) M2(
		.A(w),
		.B(ss2),
		.seg_ctrl(Segnale_interno),
		.O(out)
	);

endmodule
