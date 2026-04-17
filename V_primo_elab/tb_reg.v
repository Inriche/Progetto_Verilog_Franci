module registro();

	parameter N = 4;
	
	
	reg [N-1:0] A;
	reg C;
	wire [N-1:0] O;
	
	
	RegistroSeriale #(N) dut (
		.I0(A),
		.clock(C),
		.O(O)
	);
	
	initial begin
	
		$monitor("time=%0t  A=%b  C=%b  O=%b", $time, A, C, O);
      		C = 0;
        	A = 0;

        	// stimoli
        	#10 A = 4'b0001;
        	#10 C = 1;
        	#10 C = 0;

        	#10 A = 4'b1010;
        	#10 C = 1;
        	#10 C = 0;

        	#10 A = 4'b1111;
        	#10 C = 1;
        	#10 C = 0;

        	#20 
        	$finish;
        	
        end	
        
endmodule
