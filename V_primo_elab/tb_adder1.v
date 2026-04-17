`timescale 1ns/1ps

module Sommatore_tb();

	parameter N = 8;

	reg  [N-1:0] A;
	reg  [N-1:0] B;
	wire [N-1:0] O;

	// Istanza del modulo
	Sommatore #(N) dut (
	    .A(A),
	    .B(B),
	    .O(O)
	);

	initial begin
		$display("Time\tA\tB\tO");

	    	A = 0;   B = 0;
	    	#10
	    	$display("%0t\t%d\t%d\t%d", $time, A, B, O);

	   	 A = 5;   B = 3;
	   	 #10
	   	 $display("%0t\t%d\t%d\t%d", $time, A, B, O);

	   	 A = 10;  B = 20;
	   	 #10
	   	 $display("%0t\t%d\t%d\t%d", $time, A, B, O);

	  	  A = 100; B = 50;
	    	#10
	    	$display("%0t\t%d\t%d\t%d", $time, A, B, O);

	   	 A = 255; B = 1;
	   	 #10
	   	 $display("%0t\t%d\t%d\t%d", $time, A, B, O);

	   	 $finish;
	end

endmodule
