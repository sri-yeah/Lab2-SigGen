#include "verilated.h"
#include "verilated_vcd_c.h"

#include "Vsinegen.h"
#include "Vcounter.h"
#include "Vrom.h"

#include "vbuddy.cpp"

#define MAX_SIM_CYC 1000000
#define ADDRESS_WIDTH 8
#define ROM_SZ 256

int main(int argc, char **argv, char **env){
    int i;
    int tick;

    Verilated::commandArgs(argc, argv);
    Vsinegen* top = new Vsinegen;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp-> open ("sinegen.vcd");


    if(vbdOpen()!=1) return(-1);
    vbdHeader("Lab 2: SigGen");

    top->clk = 1;
    top->rst = 0;
    top->en = 1;
    top->incr = 1;

    for(i = 0; i < MAX_SIM_CYC; i++){
        
        //dump into VCD, toggle clock
        for(tick=0; tick<2; tick++){
            tfp->dump (2*i+tick);
            top->clk = !top->clk;
            top->eval ();
        }

        top->incr = vbdValue();

        vbdPlot(int(top->dout), 0, 255);
        vbdCycle(i);

        if( Verilated::gotFinish() || (vbdGetkey() == 'q')) 
            exit(0);
    }
    vbdClose();
    tfp->close();
    exit(0);
}
