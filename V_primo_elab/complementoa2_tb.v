module testcomplemento();


	parameter p = 4;
	reg [p-1:0] Y;
	wire [p-1:0] U;
	
	
	a2 #(p) comp(
		.A(Y),
		.O(U)
	);
	
	
	
	initial begin
		
		$dumpfile("a2.vcd");
		$dumpvars(0, testcomplemento);
		
		Y = 4'b0001;
		
		#5
		
		Y= 4'b0101;
		
		#5
		
		Y = 4'b1111;
		
		#5
		
		$finish;
	end
	
	
endmodule
