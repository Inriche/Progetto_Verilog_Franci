module contatore(
	input CLK,
	output reg [3:0] O = 4'd0
	);
	
	parameter N = 4;
	
	reg [3:0] costante = 4'd1;
	wire [3:0] w, w2;
	
	
	registroparallelo #(N) parall(
		.D(w),
		.clock(CLK),
		.Q(w2)
	);
	
	Sommatore #(N) Sum (
		.A(costante),
		.B(w2),
		.O(w)
	);
	
	always @(posedge CLK) begin
		if(w2 < 4'd12) begin
			O <= w2;
		end else begin
			O <= 4'd0;
		end
	end
	
	
	
endmodule
