module stato2tb();


	reg [2:0] qty_p1, qty_p2, qty_p3, qty_p4, credito, price_p1, price_p2, price_p3, price_p4, selezione;
	reg conferma;
	wire [2:0] nuovo_qtyp1, nuovo_qtyp2, nuovo_qtyp3, nuovo_qtyp4;
	wire pnonvalid;
	
	
	stato2 dut(
		.QTY_P1(qty_p1),
		.QTY_P2(qty_p2),
		.QTY_P3(qty_p3),
		.QTY_P4(qty_p4),
		.CREDITO(credito),
		.PRICE_P1(price_p1),
		.PRICE_P2(price_p2),
		.PRICE_P3(price_p3),
		.PRICE_P4(price_p4),
		.SELEZIONE(selezione),
		.CONFERMA(conferma),
		.NUOVO_QTYP1(nuovo_qtyp1),
		.NUOVO_QTYP2(nuovo_qtyp2),
		.NUOVO_QTYP3(nuovo_qtyp3),
		.NUOVO_QTYP4(nuovo_qtyp4),
		.PNONVALID(pnonvalid)	
	);
	
	
	initial begin
	
		$dumpfile("Stato2.vcd");
		$dumpvars(0, stato2tb);
	
	
		qty_p1 = 3'b010;
		qty_p2 = 3'b011;
		qty_p3 = 3'b100;
		qty_p4 = 3'b110;
		credito = 3'b111;
		price_p1 = 3'b100;
		price_p2 = 3'b101;
		price_p3 = 3'b110;
		price_p4 = 3'b111;
		
		selezione = 3'b100;
		conferma = 1'b0;
		
		#10
		
		selezione = 3'b100;
		conferma = 1'b1;
		
		#10
		
		selezione = 3'b110;
		conferma = 1'b0;
		
		#10
		
		selezione = 3'b110;
		conferma = 1'b1;
		
		#10
		
				
		$finish;
	
	end
	
endmodule



//verilator --trace --binary S2_tb.v S2.v Decremento_prod_Scelto.v Generatore_interni.v S2_conferma_sel.v And.v demux4out.v comparatore_uguaglianza.v Not.v Mux4entrate.v comparatore_minoranza.v complementoa2.v Adder1bit.v Mux2entrate.v demux2ctrl.v --top-module stato3tb -o provaS3

