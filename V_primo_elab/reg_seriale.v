module RegistroSeriale #( parameter N = 8)(
	input I0, 
	input clock,
	output O
	);
	reg [N-1:0] dato = {N{1'b0}};
	assign O = dato[0];
	always @(posedge clock) begin
		dato = {I0, dato[N-1:1]};
 	end
endmodule
