module vending_datapath(
    input clk,
    input rst,
    input [2:0] coin,
    input [2:0] selezione,
    input cfg_load,
    input [3:0] cfg_index,
    input apply_coin,
    input apply_confirm,
    input apply_cancel,
    input coin_valid,
    input [5:0] coin_value,
    input [5:0] inc_01,
    input [5:0] inc_02,
    input [5:0] inc_05,
    input [5:0] inc_10,
    output [5:0] credito,
    output prodotto1,
    output prodotto2,
    output prodotto3,
    output prodotto4,
    output [1:0] errore,
    output [5:0] resto,
    output [9:0] disponibile,
    output [5:0] coin_01,
    output [5:0] coin_02,
    output [5:0] coin_05,
    output [5:0] coin_10
);

reg [5:0] qty_p1_reg;
reg [5:0] qty_p2_reg;
reg [5:0] qty_p3_reg;
reg [5:0] qty_p4_reg;
reg [5:0] price_p1_reg;
reg [5:0] price_p2_reg;
reg [5:0] price_p3_reg;
reg [5:0] price_p4_reg;
reg [5:0] credit_reg;
reg [5:0] avail_01_reg;
reg [5:0] avail_02_reg;
reg [5:0] avail_05_reg;
reg [5:0] avail_10_reg;
reg [2:0] selected_reg;
reg [5:0] price_display_reg;
reg show_price_reg;

reg prodotto1_reg;
reg prodotto2_reg;
reg prodotto3_reg;
reg prodotto4_reg;
reg [1:0] errore_reg;
reg [5:0] resto_reg;
reg [5:0] coin_01_reg;
reg [5:0] coin_02_reg;
reg [5:0] coin_05_reg;
reg [5:0] coin_10_reg;

reg [5:0] selected_price_reg;
reg [5:0] selected_qty_reg;
reg selection_valid_reg;

wire [5:0] config_word;
wire [10:0] disponibile_full;

wire cancel_change_valid;
wire [5:0] cancel_use_01;
wire [5:0] cancel_use_02;
wire [5:0] cancel_use_05;
wire [5:0] cancel_use_10;

wire [5:0] purchase_change_amount;
wire purchase_change_valid;
wire [5:0] purchase_use_01;
wire [5:0] purchase_use_02;
wire [5:0] purchase_use_05;
wire [5:0] purchase_use_10;

assign config_word = {coin, selezione};
assign credito = show_price_reg ? price_display_reg : credit_reg;
assign prodotto1 = prodotto1_reg;
assign prodotto2 = prodotto2_reg;
assign prodotto3 = prodotto3_reg;
assign prodotto4 = prodotto4_reg;
assign errore = errore_reg;
assign resto = resto_reg;
assign coin_01 = coin_01_reg;
assign coin_02 = coin_02_reg;
assign coin_05 = coin_05_reg;
assign coin_10 = coin_10_reg;
assign disponibile_full = avail_01_reg + (avail_02_reg << 1) + (avail_05_reg * 6'd5) + (avail_10_reg * 6'd10);
assign disponibile = (disponibile_full > 11'd1023) ? 10'h3ff : disponibile_full[9:0];
assign purchase_change_amount = credit_reg - selected_price_reg;

vending_change_maker cancel_change(
    .amount(credit_reg),
    .available_01(avail_01_reg),
    .available_02(avail_02_reg),
    .available_05(avail_05_reg),
    .available_10(avail_10_reg),
    .valid(cancel_change_valid),
    .use_01(cancel_use_01),
    .use_02(cancel_use_02),
    .use_05(cancel_use_05),
    .use_10(cancel_use_10)
);

vending_change_maker purchase_change(
    .amount(purchase_change_amount),
    .available_01(avail_01_reg),
    .available_02(avail_02_reg),
    .available_05(avail_05_reg),
    .available_10(avail_10_reg),
    .valid(purchase_change_valid),
    .use_01(purchase_use_01),
    .use_02(purchase_use_02),
    .use_05(purchase_use_05),
    .use_10(purchase_use_10)
);

always @(*) begin
    selection_valid_reg = 1'b0;
    selected_price_reg = 6'd0;
    selected_qty_reg = 6'd0;

    case (selezione)
        3'b001: begin
            selection_valid_reg = 1'b1;
            selected_price_reg = price_p1_reg;
            selected_qty_reg = qty_p1_reg;
        end
        3'b010: begin
            selection_valid_reg = 1'b1;
            selected_price_reg = price_p2_reg;
            selected_qty_reg = qty_p2_reg;
        end
        3'b011: begin
            selection_valid_reg = 1'b1;
            selected_price_reg = price_p3_reg;
            selected_qty_reg = qty_p3_reg;
        end
        3'b100: begin
            selection_valid_reg = 1'b1;
            selected_price_reg = price_p4_reg;
            selected_qty_reg = qty_p4_reg;
        end
        default: begin
        end
    endcase
end

always @(posedge clk or negedge rst) begin
    if (!rst) begin
        qty_p1_reg <= 6'd0;
        qty_p2_reg <= 6'd0;
        qty_p3_reg <= 6'd0;
        qty_p4_reg <= 6'd0;
        price_p1_reg <= 6'd0;
        price_p2_reg <= 6'd0;
        price_p3_reg <= 6'd0;
        price_p4_reg <= 6'd0;
        credit_reg <= 6'd0;
        avail_01_reg <= 6'd0;
        avail_02_reg <= 6'd0;
        avail_05_reg <= 6'd0;
        avail_10_reg <= 6'd0;
        selected_reg <= 3'd0;
        price_display_reg <= 6'd0;
        show_price_reg <= 1'b0;
        prodotto1_reg <= 1'b0;
        prodotto2_reg <= 1'b0;
        prodotto3_reg <= 1'b0;
        prodotto4_reg <= 1'b0;
        errore_reg <= 2'b00;
        resto_reg <= 6'd0;
        coin_01_reg <= 6'd0;
        coin_02_reg <= 6'd0;
        coin_05_reg <= 6'd0;
        coin_10_reg <= 6'd0;
    end else begin
        prodotto1_reg <= 1'b0;
        prodotto2_reg <= 1'b0;
        prodotto3_reg <= 1'b0;
        prodotto4_reg <= 1'b0;

        if (cfg_load) begin
            credit_reg <= 6'd0;
            selected_reg <= 3'd0;
            show_price_reg <= 1'b0;
            price_display_reg <= 6'd0;
            errore_reg <= 2'b00;
            resto_reg <= 6'd0;
            coin_01_reg <= 6'd0;
            coin_02_reg <= 6'd0;
            coin_05_reg <= 6'd0;
            coin_10_reg <= 6'd0;

            case (cfg_index)
                4'd0:  qty_p1_reg <= config_word;
                4'd1:  price_p1_reg <= config_word;
                4'd2:  qty_p2_reg <= config_word;
                4'd3:  price_p2_reg <= config_word;
                4'd4:  qty_p3_reg <= config_word;
                4'd5:  price_p3_reg <= config_word;
                4'd6:  qty_p4_reg <= config_word;
                4'd7:  price_p4_reg <= config_word;
                4'd8:  avail_01_reg <= config_word;
                4'd9:  avail_02_reg <= config_word;
                4'd10: avail_05_reg <= config_word;
                4'd11: avail_10_reg <= config_word;
                default: begin
                end
            endcase
        end else if (apply_cancel) begin
            errore_reg <= 2'b00;
            show_price_reg <= 1'b0;
            price_display_reg <= 6'd0;

            if (credit_reg != 6'd0 && cancel_change_valid) begin
                avail_01_reg <= avail_01_reg - cancel_use_01;
                avail_02_reg <= avail_02_reg - cancel_use_02;
                avail_05_reg <= avail_05_reg - cancel_use_05;
                avail_10_reg <= avail_10_reg - cancel_use_10;
                resto_reg <= credit_reg;
                coin_01_reg <= cancel_use_01;
                coin_02_reg <= cancel_use_02;
                coin_05_reg <= cancel_use_05;
                coin_10_reg <= cancel_use_10;
                credit_reg <= 6'd0;
                selected_reg <= 3'd0;
            end else begin
                resto_reg <= 6'd0;
                coin_01_reg <= 6'd0;
                coin_02_reg <= 6'd0;
                coin_05_reg <= 6'd0;
                coin_10_reg <= 6'd0;
                if (credit_reg == 6'd0) begin
                    selected_reg <= 3'd0;
                end
            end
        end else if (apply_confirm && selection_valid_reg) begin
            selected_reg <= selezione;
            resto_reg <= 6'd0;
            coin_01_reg <= 6'd0;
            coin_02_reg <= 6'd0;
            coin_05_reg <= 6'd0;
            coin_10_reg <= 6'd0;

            if ((selected_qty_reg == 6'd0) || (credit_reg < selected_price_reg)) begin
                errore_reg <= {selected_qty_reg == 6'd0, credit_reg < selected_price_reg};
                if (credit_reg < selected_price_reg) begin
                    show_price_reg <= 1'b1;
                    price_display_reg <= selected_price_reg;
                end else begin
                    show_price_reg <= 1'b0;
                    price_display_reg <= 6'd0;
                end
            end else if (purchase_change_valid) begin
                errore_reg <= 2'b00;
                show_price_reg <= 1'b0;
                price_display_reg <= 6'd0;
                resto_reg <= purchase_change_amount;
                coin_01_reg <= purchase_use_01;
                coin_02_reg <= purchase_use_02;
                coin_05_reg <= purchase_use_05;
                coin_10_reg <= purchase_use_10;
                credit_reg <= 6'd0;
                selected_reg <= 3'd0;
                avail_01_reg <= avail_01_reg - purchase_use_01;
                avail_02_reg <= avail_02_reg - purchase_use_02;
                avail_05_reg <= avail_05_reg - purchase_use_05;
                avail_10_reg <= avail_10_reg - purchase_use_10;

                case (selezione)
                    3'b001: begin
                        qty_p1_reg <= qty_p1_reg - 6'd1;
                        prodotto1_reg <= 1'b1;
                    end
                    3'b010: begin
                        qty_p2_reg <= qty_p2_reg - 6'd1;
                        prodotto2_reg <= 1'b1;
                    end
                    3'b011: begin
                        qty_p3_reg <= qty_p3_reg - 6'd1;
                        prodotto3_reg <= 1'b1;
                    end
                    3'b100: begin
                        qty_p4_reg <= qty_p4_reg - 6'd1;
                        prodotto4_reg <= 1'b1;
                    end
                    default: begin
                    end
                endcase
            end else begin
                errore_reg <= 2'b00;
                show_price_reg <= 1'b0;
                price_display_reg <= 6'd0;
            end
        end else if (apply_coin && coin_valid) begin
            credit_reg <= credit_reg + coin_value;
            avail_01_reg <= avail_01_reg + inc_01;
            avail_02_reg <= avail_02_reg + inc_02;
            avail_05_reg <= avail_05_reg + inc_05;
            avail_10_reg <= avail_10_reg + inc_10;
            errore_reg <= 2'b00;
            show_price_reg <= 1'b0;
            price_display_reg <= 6'd0;
            resto_reg <= 6'd0;
            coin_01_reg <= 6'd0;
            coin_02_reg <= 6'd0;
            coin_05_reg <= 6'd0;
            coin_10_reg <= 6'd0;
        end
    end
end

endmodule
