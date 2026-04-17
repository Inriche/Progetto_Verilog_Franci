module vending_change_maker(
    input [5:0] amount,
    input [5:0] available_01,
    input [5:0] available_02,
    input [5:0] available_05,
    input [5:0] available_10,
    output reg valid,
    output reg [5:0] use_01,
    output reg [5:0] use_02,
    output reg [5:0] use_05,
    output reg [5:0] use_10
);

integer n10;
integer n05;
integer n02;
integer rem;

always @(*) begin
    valid = 1'b0;
    use_01 = 6'd0;
    use_02 = 6'd0;
    use_05 = 6'd0;
    use_10 = 6'd0;

    for (n10 = 63; n10 >= 0; n10 = n10 - 1) begin
        if (!valid && n10 <= available_10 && (n10 * 10) <= amount) begin
            for (n05 = 63; n05 >= 0; n05 = n05 - 1) begin
                if (!valid && n05 <= available_05 && ((n10 * 10) + (n05 * 5)) <= amount) begin
                    for (n02 = 63; n02 >= 0; n02 = n02 - 1) begin
                        rem = amount - (n10 * 10) - (n05 * 5) - (n02 * 2);
                        if (
                            !valid &&
                            n02 <= available_02 &&
                            rem >= 0 &&
                            rem <= available_01
                        ) begin
                            valid = 1'b1;
                            use_10 = n10[5:0];
                            use_05 = n05[5:0];
                            use_02 = n02[5:0];
                            use_01 = rem[5:0];
                        end
                    end
                end
            end
        end
    end
end

endmodule
