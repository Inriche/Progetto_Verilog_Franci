module uguaglianza(
	input A, B, C,
	output O
	);

	wire o2, o1, o0, aa1;
	wire ug = 1'b0;

	Xnor x2(
		.A(A),
		.B(ug),
		.O(o2)
	);


	Xnor x1(
		.A(B),
		.B(ug),
		.O(o1)
	);	
	
	
	Xnor x0(
		.A(C),
		.B(ug),
		.O(o0)
	);	
	
	
	And #(1) a1(
		.A(o2),
		.B(o1),
		.O(aa1)
	);
	
	
	And #(1) a0(
		.A(aa1),
		.B(o0),
		.O(O)
	);
	
	
endmodule
	
	
