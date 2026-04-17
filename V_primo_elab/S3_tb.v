module stato3tb();

	reg [2:0] PRICE_P1, PRICE_P2, PRICE_P3, PRICE_P4, CREDITO;
	reg [1:0] Sel;
	reg INTERNO;
	wire [2:0] Resto;


	stato3 dut(
		.Price_p1(PRICE_P1),
		.Price_p2(PRICE_P2),
		.Price_p3(PRICE_P3),
		.Price_p4(PRICE_P4),
		.Credito(CREDITO),
		.Selezione(Sel),
		.Interno(INTERNO),
		.RESTO(Resto)	
	);
	
	
	
	initial begin
		
		$dumpfile("S3.vcd");
		$dumpvars(0, stato3tb);
	
		PRICE_P1 = 3'b001;
		PRICE_P2 = 3'b011;
		PRICE_P3 = 3'b100;
		PRICE_P4 = 3'b101;
		CREDITO = 3'b011;
		
		Sel = 2'b01;
		INTERNO = 1'b0;
		
		#10
		
		Sel = 2'b01;
		INTERNO = 1'b1;		
	
		#10
		
		Sel = 2'b11;
		INTERNO = 1'b0;
		
		#10
		
		Sel = 2'b11;
		INTERNO = 1'b1;		
	
		#10		
		
		$finish;
		
	end
	
	
	
endmodule
		
