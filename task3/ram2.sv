module ram2 #(
    parameter   ADDRESS_WIDTH = 8,
                DATA_WIDTH = 8
)(
    input logic clk,
    input logic w_en,
    input logic r_en,
    input logic [ADDRESS_WIDTH-1:0] w_addr,
    input logic [ADDRESS_WIDTH-1:0] r_addr,
    input logic [DATA_WIDTH-1:0] din,
    output logic [DATA_WIDTH-1:0] dout
);

logic [DATA_WIDTH-1:0] ram_array [2**ADDRESS_WIDTH-1:0];

initial begin
    $display("Loading ram.");
    $readmemh("sineram.mem", ram_array);
end;

always_ff @(posedge clk) begin
    if (w_en == 1'b1) ram_array[w_addr] <= din;
    if (r_en == 1'b1) dout <= ram_array[r_addr];
    //output is synchronous 
end
endmodule
