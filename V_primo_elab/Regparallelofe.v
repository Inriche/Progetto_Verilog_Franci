module registroparallelofe #( parameter N = 8)(
	input [N-1:0] D,
	input clock,
	output [N-1:0] Q
	);
	reg [N-1:0] dato = {N{1'b0}};
	assign Q = dato;
	always @(negedge clock) begin
		dato = D;
	end
endmodule
