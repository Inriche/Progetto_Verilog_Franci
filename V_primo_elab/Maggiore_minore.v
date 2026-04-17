module magg_min(
	input [2:0] A, B,
	output [2:0] Magg, Minn
);

	wire cc1, cc2, cc3;

	comp_min Comp1(
		.str1(A),
		.str2(B),
		.O(cc1)	
	);


	
	Not #(1) Comp5(
		.A(cc1),
		.O(cc2)
	);
		
	
	
	mux2 #(3) Comp2(
		.A(B),
		.B(A),
		.seg_ctrl(cc2),
		.O(Magg)
	);
	
	
	
	Not #(1) Comp3(
		.A(cc2),
		.O(cc3)
	);
	
	
	
	mux2 #(3) Comp4(
		.A(B),
		.B(A),
		.seg_ctrl(cc3),
		.O(Minn)
	);	
	
endmodule
