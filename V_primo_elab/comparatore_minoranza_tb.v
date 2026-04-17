module tb_comp_min;

    reg [2:0] str1;
    reg [2:0] str2;
    wire O;

    integer i, j;

    comp_min uut (
        .str1(str1),
        .str2(str2),
        .O(O)
    );

    initial begin
        str1 = 3'b000;
        str2 = 3'b000;

	$dumpfile("comp_min.vcd");
	$dumpvars(0, tb_comp_min);

        for (i = 0; i < 8; i = i + 1) begin
            for (j = 0; j < 8; j = j + 1) begin
                str1 = i[2:0];   // FIX
                str2 = j[2:0];   // FIX
                #10;
            end
        end

        $finish;
    end

endmodule
