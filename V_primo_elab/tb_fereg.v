module tb_regfe();

	parameter p = 4;
	integer i;

	reg [p-1:0] A;
	reg C;
	wire [p-1:0] out;
	
	
	
	registroparallelofe #(p) dut(
		.D(A),
		.clock(C),
		.Q(out)	
	);
	
	
	
	initial begin
	
		$dumpfile("Simregfe.vcd");
		$dumpvars(0, tb_regfe);
	
		A = 4'b1010;
	
      		for (i = 0; i < 10; i = i + 1) begin
        		#5 C = ~C;  // fronte di salita
        		#5 C = ~C;  // fronte di discesa
        	end
        	
        	
        	$finish;
        	
        end
        
        
        
endmodule		
