module tb_gen_int;

    // ingressi
    reg [1:0] Sel;
    reg [2:0] QTY_P1, QTY_P2, QTY_P3, QTY_P4;
    reg [2:0] PRICE_P1, PRICE_P2, PRICE_P3, PRICE_P4;
    reg [2:0] CREDITO;

    // uscita
    wire i;

    // variabili di ciclo
    integer s;
    integer c;

    // istanza DUT
    gen_int uut (
        .Sel(Sel),
        .QTY_P1(QTY_P1), .QTY_P2(QTY_P2),
        .QTY_P3(QTY_P3), .QTY_P4(QTY_P4),
        .PRICE_P1(PRICE_P1), .PRICE_P2(PRICE_P2),
        .PRICE_P3(PRICE_P3), .PRICE_P4(PRICE_P4),
        .CREDITO(CREDITO),
        .i(i)
    );

    initial begin
        // inizializzazione
        QTY_P1 = 3'd1; QTY_P2 = 3'd2; QTY_P3 = 3'd3; QTY_P4 = 3'd4;
        PRICE_P1 = 3'd1; PRICE_P2 = 3'd2; PRICE_P3 = 3'd3; PRICE_P4 = 3'd5;

        Sel = 2'b00;
        CREDITO = 3'b000;

       $dumpfile("Gen_int.vcd");
       $dumpvars(0, tb_gen_int);

        // test completo
        for (s = 0; s < 4; s = s + 1) begin
            Sel = s[1:0];

            for (c = 0; c < 8; c = c + 1) begin
                CREDITO = c[2:0];
                #10;
            end
        end

        $finish;
    end

endmodule
