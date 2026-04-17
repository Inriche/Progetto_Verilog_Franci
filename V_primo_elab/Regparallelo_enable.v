module registroparallel #( parameter N = 8)(
    input [N-1:0] D,
    input clock,
    input enable,
    output [N-1:0] Q
);

	reg [N-1:0] dato = {N{1'b0}};
	assign Q = dato;

	always @(posedge clock)
	begin
 		if(enable)
        	dato <= D;
	end

endmodule
