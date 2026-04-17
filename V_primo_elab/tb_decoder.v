module decoder_tb();

	parameter p = 3;
	
	reg [p-1:0] ing;
	wire [(2**p)-1:0] out;
	
	
	Decoder #(p) utc(
		.A(ing),
		.O(out)
	);
	
	
	
	initial begin
	
		$dumpfile("decodersim.vcd");
		$dumpvars(0, decoder_tb);
	
	
		ing = 3'b011;
		#5
		
		
		ing = 3'b111;
		#5
		
		
		$finish;
	end
	
endmodule
