module contatore_tb();


	reg Clock;
	wire [3:0] out;
	
	
	contatore count (
		.CLK(Clock),
		.O(out)
	);
	
	
	always #5 Clock = ~Clock;
	
	
	initial begin
		
		$dumpfile("contatore.vcd");
		$dumpvars(0, contatore_tb);
		$monitor("time=%0t  CLK=%b  O=%b", $time, Clock, out);
	
		Clock = 1'b0;
		#150	
		
		$finish;
	end
	

endmodule	
