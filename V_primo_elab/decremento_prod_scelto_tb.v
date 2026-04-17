module tbdecremento();

	reg [2:0] q1, q2, q3, q4;
	reg [1:0] S;
	reg s_int;
	wire [2:0] o;
	
	
	decremento dec(
		.QTY_P1(q1),
		.QTY_P2(q2),
		.QTY_P3(q3), 
		.QTY_P4(q4),
		.Sel(S),
		.Segnale_interno(s_int),
		.out(o)	
	);
	
	
	
	initial begin
		$dumpfile("dec.vcd");
		$dumpvars(0, tbdecremento);

		q1 = 3'b100;
		q2 = 3'b110;
		q3 = 3'b101;
		q4 = 3'b010;
		S = 2'b10;
		s_int = 1'b0;
		
		#5
		
		S = 2'b10;
		s_int = 1'b1;
		
		#5
		
		S = 2'b01;
		s_int = 1'b0;		
		
		#5
		
		S = 2'b01;
		s_int = 1'b1;
		
		#5
		
		$finish;
		
	end
		
		
endmodule
