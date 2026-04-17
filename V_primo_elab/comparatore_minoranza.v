module comp_min(
	input [2:0] str1, str2,
	output O
);

	wire nn1, xx1, aa1, nn2, xx2, aa2, nn3, aa3, aa4, aa5, oo1, aa6;
	
	Not #(1) N1(
		.A(str1[2]),
		.O(nn1)	
	);
	
	Xnor X1(
		.A(str1[2]),
		.B(str2[2]),
		.O(xx1)
	);
	
	
	And #(1) A1(
		.A(nn1),
		.B(str2[2]),
		.O(aa1)
	);
	
	
	
	
	Not #(1) N2(
		.A(str1[1]),
		.O(nn2)	
	);
	
	Xnor X2(
		.A(str1[1]),
		.B(str2[1]),
		.O(xx2)
	);
	
	
	And #(1) A2(
		.A(nn2),
		.B(str2[1]),
		.O(aa2)
	);
	
	
	
	
	Not #(1) N3(
		.A(str1[0]),
		.O(nn3)	
	);
	
	
	And #(1) A3(
		.A(nn3),
		.B(str2[0]),
		.O(aa3)
	);
	
	
	
	
	And #(1) A4(
		.A(xx1),
		.B(aa2),
		.O(aa4)
	);
	
	
	And #(1) A5(
		.A(xx1),
		.B(xx2),
		.O(aa5)
	);
	
	
	
	
	Or O1(
		.A(aa1),
		.B(aa4),
		.O(oo1)
	);
	
	
	And #(1) A6(
		.A(aa5),
		.B(aa3),
		.O(aa6)
	);
	
	
	
	
	Or O2(
		.A(oo1),
		.B(aa6),
		.O(O)
	);
	
endmodule
		
