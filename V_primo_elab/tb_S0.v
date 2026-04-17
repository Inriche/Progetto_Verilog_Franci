module stato0_tb();

    reg [2:0] stringa;
    reg C;
    wire [2:0] out0, out1, out2, out3, out4, out5, out6, out7, out8, out9, out10, out11;
    
    Stato0 state(
        .i1(stringa),
        .clk(C),
        .O0(out0),
        .O1(out1),
        .O2(out2),
        .O3(out3),
        .O4(out4),
        .O5(out5),
        .O6(out6),
        .O7(out7),
        .O8(out8),
        .O9(out9),
        .O10(out10),
        .O11(out11)
    );  
    
    integer i;

    initial begin
        // I REGISTRI DEVONO AGGIORNARSI SUL FALLING EDGE (QUANDO C = 0)
        $dumpfile("stato0_sim.vcd");
        $dumpvars(0, stato0_tb);
        
        stringa = 3'b111;
        C = 0;

        // 20 cicli di clock
        for (i = 0; i < 12; i = i + 1) begin
            #5 C = ~C;  // fronte di salita
            #5 C = ~C;  // fronte di discesa
        end
        
        $finish;
    end
    
endmodule
