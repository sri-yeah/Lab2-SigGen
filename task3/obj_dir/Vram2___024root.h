// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vram2.h for the primary calling header

#ifndef VERILATED_VRAM2___024ROOT_H_
#define VERILATED_VRAM2___024ROOT_H_  // guard

#include "verilated.h"


class Vram2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vram2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(w_en,0,0);
    VL_IN8(r_en,0,0);
    VL_IN8(w_addr,7,0);
    VL_IN8(r_addr,7,0);
    VL_IN8(din,7,0);
    VL_OUT8(dout,7,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 256> ram2__DOT__ram_array;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vram2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vram2___024root(Vram2__Syms* symsp, const char* v__name);
    ~Vram2___024root();
    VL_UNCOPYABLE(Vram2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
