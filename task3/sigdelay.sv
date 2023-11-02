module sinegen #(
    parameter A_WIDTH = 8,
    parameter D_WIDTH = 8
)(
    //interface signals
    input logic clk,                    //clock
    input logic rst,                    //rest
    input logic c_en,                   //counter enable
    input logic offset,
    input logic wr,
    input logic rd,
    input logic [D_WIDTH-1:0] mic_signal,      //input data
    output logic [D_WIDTH-1:0] delayed_signal     //output data
);

    logic [A_WIDTH-1:0] address1;        //interconnect wire1
    logic [A_WIDTH-1:0] address2;        //interconnect wire2

counter addrCounter (
    .clk (clk),
    .rst (rst),
    .en (c_en),
    .offset (offset),
    .count1 (address1),
    .count2 (address2)
);

ram2 sineRam2 (
    .clk (clk),
    .w_en (wr),
    .r_en (rd),
    .w_addr (address1),
    .r_addr (address2),
    .din (mic_signal),
    .dout (delayed_signal)
);

endmodule
