module sinegen #(
    parameter A_WIDTH = 8,
    parameter D_WIDTH = 8
)(
    //interface signals
    input logic clk,                    //clock
    input logic rst,                    //rest
    input logic en,                     //enable
    input logic [D_WIDTH-1:0] incr,     //increment for addr counter
    input logic [D_WIDTH-1:0] offset,   //offset for second addr
    output logic [D_WIDTH-1:0] dout1,    //output data1
    output logic [D_WIDTH-1:0] dout2     //output data2
);

    logic [A_WIDTH-1:0] address1;        //interconnect wire1
    logic [A_WIDTH-1:0] address2;        //interconnect wire2

counter addrCounter (
    .clk (clk),
    .rst (rst),
    .en (en),
    .incr (incr),
    .offset (offset),
    .count1 (address1),
    .count2 (address2)
);

rom2 sineRom2 (
    .clk (clk),
    .addr1 (address1),
    .addr2 (address2),
    .dout1 (dout1),
    .dout2 (dout2)
);

endmodule
