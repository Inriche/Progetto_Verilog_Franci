`timescale 1ns/1ps

module tb_Stato1;

	integer i;

    // ingressi
    reg [5:0] A1, A2, A3;
    reg [9:0] B1, B2, B3;
    reg [5:0] C1, C2, C3;

    reg [5:0] D0, D1, E0, E1, F0, F1, G0, G1, H0, H1, I0, I1, J0, J1, K0, K1;

    reg [1:0] Ctrl;
    reg Ctrl_mux9, Ctrl_mux5;
    reg clock;

    // uscite
    wire [5:0] OA, OC, OD, OE, OF, OG, OH, OI, OJ, OK;
    wire [9:0] OB;

    // istanza del DUT (Device Under Test)
    Stato1 dut (

        .A1(A1), .A2(A2), .A3(A3),
        .B1(B1), .B2(B2), .B3(B3),
        .C1(C1), .C2(C2), .C3(C3),

        .Ctrl(Ctrl),
        .Ctrl_mux9(Ctrl_mux9),
        .Ctrl_mux5(Ctrl_mux5),

        .D0(D0), .D1(D1),
        .E0(E0), .E1(E1),
        .F0(F0), .F1(F1),
        .G0(G0), .G1(G1),
        .H0(H0), .H1(H1),
        .I0(I0), .I1(I1),
        .J0(J0), .J1(J1),
        .K0(K0), .K1(K1),

        .clock(clock),

        .OA(OA),
        .OB(OB),
        .OC(OC),
        .OD(OD),
        .OE(OE),
        .OF(OF),
        .OG(OG),
        .OH(OH),
        .OI(OI),
        .OJ(OJ),
        .OK(OK)
    );


	initial begin
		clock = 0;
	end


	always #5 clock = ~clock;


	initial begin

		$dumpfile("SimS1.vcd");
		$dumpvars(0, tb_Stato1);
       	

        	// inizializzazione ingressi
       		A1 = 6'd1;  A2 = 6'd2;  A3 = 6'd3;
        	B1 = 10'd10; B2 = 10'd20; B3 = 10'd30;
        	C1 = 6'd4;  C2 = 6'd5;  C3 = 6'd6;

        	D0 = 6'd7;  D1 = 6'd8;
        	E0 = 6'd9;  E1 = 6'd10;
        	F0 = 6'd11; F1 = 6'd12;
        	G0 = 6'd13; G1 = 6'd14;
        	H0 = 6'd10; H1 = 6'd7;
        	I0 = 6'd7; I1 = 6'd13;
        	J0 = 6'd17; J1 = 6'd20;
        	K0 = 6'd30; K1 = 6'd35;

        	Ctrl = 2'b00;
        	Ctrl_mux9 = 0;
		Ctrl_mux5 = 0;

        	#20;

       		// test selezioni mux a 3 ingressi
        	Ctrl = 2'b01;
        	#20;

        	Ctrl = 2'b10;
        	#20;

        	// test mux a 2 ingressi
        	Ctrl_mux9 = 1;
        	#20;

        	Ctrl_mux9 = 0;
        	#20;

        	// cambio valori per nuovo test
        	A1 = 6'd15; A2 = 6'd16; A3 = 6'd17;
        	B1 = 10'd100; B2 = 10'd200; B3 = 10'd300;
        	C1 = 6'd18; C2 = 6'd19; C3 = 6'd20;

        	Ctrl = 2'b00;
        	Ctrl_mux9 = 1;

        	#40;

        	$finish;

    	end
    	
    	
    	

endmodule
