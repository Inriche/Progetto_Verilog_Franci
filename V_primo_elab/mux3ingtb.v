module mux3tb();

	parameter p = 3;
	
	reg [p-1:0] ing3, ing2, ing1;
	reg [1:0] ctrl;
	wire [p-1:0] out;
	
	
	Multiplexer #(p) dut(
		.S(ctrl),
		.A3(ing3),
		.A2(ing2),
		.A1(ing1),
		.O(out)
	);
	

	initial begin
	
		$dumpfile("sim_mux.vcd");
		$dumpvars(0, mux3tb);
		
		ing3 = 3'b001;
		ing2 = 3'b011;
		ing1 = 3'b111;
		ctrl = 2'b10;
	

		#5
		
		
		ctrl = 2'b11;
		
		
		#5
		
		
		ctrl = 2'b01;
		
		
		#5
		
		
		$finish;
		
	end


endmodule
