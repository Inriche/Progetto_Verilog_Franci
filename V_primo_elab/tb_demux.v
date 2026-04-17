module demux_tb();


	reg [2:0] inp;
	reg [3:0] control;
	wire [2:0] O0, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11;
	
	
	demux dut(
		.in(inp),
		.ctrl(control),
		.out0(O0),
		.out1(O1),
		.out2(O2),
		.out3(O3),
		.out4(O4),
		.out5(O5),
		.out6(O6),
		.out7(O7),		
		.out8(O8),
		.out9(O9),
		.out10(O10),
		.out11(O11)	
	);	
	
	
	initial begin
		
		$dumpfile("sim_demux.vcd");
		$dumpvars(0, demux_tb);
		
		$monitor("time = %0t, control= %b, O0 = %b, O1 = %b, O2 = %b, O3 = %b, O4 = %b, O5 = %b, O6 = %b, O7 = %b, O8 = %b, O9 = %b, O10 = %b, O11 = %b", $time, control, O0, O1, O2, O3, O4, O5, O6, O7, O8, O9, O10, O11);
		
		inp = 3'b111;
		control = 4'b0000;
		#5
		
		
		control = 4'b0001;
		#5
		
		
		control = 4'b0100;
		#5		
		
		
		control = 4'b1000;
		#5		
		
		$finish;
	end
	
endmodule	
