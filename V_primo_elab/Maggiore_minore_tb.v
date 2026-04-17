module magg_min_tb();


	reg [2:0] AA, BB;
	wire [2:0] Mag, Min;
	
	
	
	magg_min dut(
		.A(AA),
		.B(BB),
		.Magg(Mag),
		.Minn(Min)
	);



	initial begin
			
		$dumpfile("M_m.vcd");
		$dumpvars(0, magg_min_tb);
	
		AA = 3'b110;
		BB = 3'b101;
	
		#5
		
		AA = 3'b000;
		BB = 3'b101;	
	
		#5
		
		AA = 3'b111;
		BB = 3'b111;
		
		#5
		
		AA = 3'b011;
		BB = 3'b100;
		
		#5
		
		$finish;
		
	end
	
endmodule
