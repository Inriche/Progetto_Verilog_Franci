module S3_confermatb();

	reg [2:0] selez;
	reg conf;
	wire [1:0] sel_out;
	wire errore;

	
	conf_sel dut(
		.selezione(selez),
		.conferma(conf),
		.sel_reg(sel_out),
		.error(errore)
	);


	initial begin
	
		$dumpfile("sim_S3conferma.vcd");
		$dumpvars(0, S3_confermatb);
	
		selez = 3'b001;
		conf = 1'b0;
		
		#10
		
		conf = 1'b1;
		
		#10
		
		
		selez = 3'b111;
		conf = 1'b0;
		
		#10
		
		conf = 1'b1;
		
		#10
		
		$finish;
		
	end

endmodule
