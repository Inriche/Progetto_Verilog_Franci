module tb_regfeen();

	parameter p = 4;

	reg [p-1:0] G;
	reg clk, en;
	wire [p-1:0] O;
	
	
	registrofe_en #(p) dut(
		.D(G), 
		.clock(clk),
		.enable(en),
		.Q(O)
	);
	
	
	initial begin
		clk = 0;
	end
	
	
	always #5 clk = ~clk;
	
	
	initial begin
	
		$dumpfile("regfe.vcd");
		$dumpvars(0, tb_regfeen);
	
		G = 4'b1010;
		en = 1'b0;
		
		#10
		
		G = 4'b1010;
		en = 1'b1;
		
		#10	
		
		G = 4'b1111;
		en = 1'b0;
		
		#10
		
		G = 4'b1111;
		en = 1'b1;
		
		#10
		
		$finish;	
	
	end
	
endmodule
