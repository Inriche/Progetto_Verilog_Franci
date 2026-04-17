module tbmuxreg();


	parameter p = 3;
	
	reg [p-1:0] ing3, ing2, ing1;
	reg [1:0] ctrl;
	reg C;
	wire [p-1:0] O;
	
	
	mux_reg #(p) dut(
		.a3(ing3),
		.a2(ing2),
		.a1(ing1),
		.control(ctrl),
		.Clock(C),
		.out(O)
	);
	

	initial begin
		
		$dumpfile("sim_muxreg.vcd");
		$dumpvars(0, tbmuxreg);
		
		ing3 = 3'b001;
		ing2 = 3'b011;
		ing1 = 3'b111;
		
		
		ctrl = 2'b01;
		C = 1'b0;
		
		#5
		
		
		ctrl = 2'b01;
		C = 1'b1;
		
		#5	
		
		
		ctrl = 2'b10;
		C = 1'b0;
		
		#5
		
		
		ctrl = 2'b10;
		C = 1'b1;
		
		#5	
		
		
		ctrl = 2'b11;
		C = 1'b0;
		
		#5
		
		
		ctrl = 2'b11;
		C = 1'b1;
		
		#5		
		
		
		$finish;
		
	end		

endmodule
