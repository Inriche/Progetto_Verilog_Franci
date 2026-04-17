module demux(
	input [3:0] ctrl,
	input [2:0] in,
	output reg [2:0] out0,
	output reg [2:0] out1,
	output reg [2:0] out2,
	output reg [2:0] out3,
	output reg [2:0] out4,
	output reg [2:0] out5,
	output reg [2:0] out6,
	output reg [2:0] out7,
	output reg [2:0] out8,
	output reg [2:0] out9,
	output reg [2:0] out10,
	output reg [2:0] out11
	);
	
	
	
	
	
	always @(ctrl, in) begin
	
		case(ctrl)
			4'b0000: begin
				out0 = in;
				out1 = 3'b000;
				out2 = 3'b000;
				out3 = 3'b000;
				out4 = 3'b000;
				out5 = 3'b000;
				out6 = 3'b000;
				out7 = 3'b000;
				out8 = 3'b000;	
				out9 = 3'b000;
				out10 = 3'b000;
				out11 = 3'b000;
			end
			4'b0001: begin
				out0 = 3'b000;
				out1 = in;
				out2 = 3'b000;
				out3 = 3'b000;
				out4 = 3'b000;
				out5 = 3'b000;
				out6 = 3'b000;
				out7 = 3'b000;
				out8 = 3'b000;	
				out9 = 3'b000;
				out10 = 3'b000;
				out11 = 3'b000;
			end			
			4'b0010: begin
				out0 = 3'b000;
				out1 = 3'b000;
				out2 = in;
				out3 = 3'b000;
				out4 = 3'b000;
				out5 = 3'b000;
				out6 = 3'b000;
				out7 = 3'b000;
				out8 = 3'b000;	
				out9 = 3'b000;
				out10 = 3'b000;
				out11 = 3'b000;
			end
			4'b0011: begin
				out0 = 3'b000;
				out1 = 3'b000;
				out2 = 3'b000;
				out3 = in;
				out4 = 3'b000;
				out5 = 3'b000;
				out6 = 3'b000;
				out7 = 3'b000;
				out8 = 3'b000;	
				out9 = 3'b000;
				out10 = 3'b000;
				out11 = 3'b000;
			end					
			4'b0100: begin
				out0 = 3'b000;
				out1 = 3'b000;
				out2 = 3'b000;
				out3 = 3'b000;
				out4 = in;
				out5 = 3'b000;
				out6 = 3'b000;
				out7 = 3'b000;
				out8 = 3'b000;	
				out9 = 3'b000;
				out10 = 3'b000;
				out11 = 3'b000;
			end
			4'b0101: begin
				out0 = 3'b000;
				out1 = 3'b000;
				out2 = 3'b000;
				out3 = 3'b000;
				out4 = 3'b000;
				out5 = in;
				out6 = 3'b000;
				out7 = 3'b000;
				out8 = 3'b000;	
				out9 = 3'b000;
				out10 = 3'b000;
				out11 = 3'b000;
			end			
			4'b0110: begin
				out0 = 3'b000;
				out1 = 3'b000;
				out2 = 3'b000;
				out3 = 3'b000;
				out4 = 3'b000;
				out5 = 3'b000;
				out6 = in;
				out7 = 3'b000;
				out8 = 3'b000;	
				out9 = 3'b000;
				out10 = 3'b000;
				out11 = 3'b000;
			end
			4'b0111: begin
				out0 = 3'b000;
				out1 = 3'b000;
				out2 = 3'b000;
				out3 = 3'b000;
				out4 = 3'b000;
				out5 = 3'b000;
				out6 = 3'b000;
				out7 = in;
				out8 = 3'b000;	
				out9 = 3'b000;
				out10 = 3'b000;
				out11 = 3'b000;
			end		
			4'b1000: begin
				out0 = 3'b000;
				out1 = 3'b000;
				out2 = 3'b000;
				out3 = 3'b000;
				out4 = 3'b000;
				out5 = 3'b000;
				out6 = 3'b000;
				out7 = 3'b000;
				out8 = in;	
				out9 = 3'b000;
				out10 = 3'b000;
				out11 = 3'b000;
			end
			4'b1001: begin
				out0 = 3'b000;
				out1 = 3'b000;
				out2 = 3'b000;
				out3 = 3'b000;
				out4 = 3'b000;
				out5 = 3'b000;
				out6 = 3'b000;
				out7 = 3'b000;
				out8 = 3'b000;	
				out9 = in;
				out10 = 3'b000;
				out11 = 3'b000;
			end			
			4'b1010: begin
				out0 = 3'b000;
				out1 = 3'b000;
				out2 = 3'b000;
				out3 = 3'b000;
				out4 = 3'b000;
				out5 = 3'b000;
				out6 = 3'b000;
				out7 = 3'b000;
				out8 = 3'b000;	
				out9 = 3'b000;
				out10 = in;
				out11 = 3'b000;
			end
			4'b1011: begin
				out0 = 3'b000;
				out1 = 3'b000;
				out2 = 3'b000;
				out3 = 3'b000;
				out4 = 3'b000;
				out5 = 3'b000;
				out6 = 3'b000;
				out7 = 3'b000;
				out8 = 3'b000;	
				out9 = 3'b000;
				out10 = 3'b000;
				out11 = in;
			end	
			default: begin
				out0 = 3'b000;
				out1 = 3'b000;
				out2 = 3'b000;
				out3 = 3'b000;
				out4 = 3'b000;
				out5 = 3'b000;
				out6 = 3'b000;
				out7 = 3'b000;
				out8 = 3'b000;	
				out9 = 3'b000;
				out10 = 3'b000;
				out11 = 3'b000;								
			end
		endcase
		
	end
				
endmodule			
