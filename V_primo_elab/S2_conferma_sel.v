module conf_sel(
	input [2:0] selezione,
	input conferma,
	output reg [1:0] sel_reg,
	output error
	);

	wire aa0;

	And #(1) a1(
		.A(selezione[2]),
		.B(conferma),
		.O(aa0)
	);

	wire [2:0] dd0, dd1;

	Demux2 #(3) d1(
		.S(aa0),
		.A(selezione),
		.o0(dd0),
		.o1(dd1) //PRIMO OUTPUT
	);
	
	wire uu0;
		
	uguaglianza u1(
		.A(dd0[2]),
		.B(dd0[1]),
		.C(dd0[0]),
		.O(uu0)	
	);
	
	wire nn0;
	
	Not #(1) n1(
		.A(uu0),
		.O(nn0)
	);
	
	
	
	And #(1) a2(
		.A(nn0),
		.B(conferma),
		.O(error)
	);



	always @(*) begin
		sel_reg = dd1[1:0];
	end

endmodule


