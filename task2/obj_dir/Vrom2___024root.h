// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrom2.h for the primary calling header

#ifndef VERILATED_VROM2___024ROOT_H_
#define VERILATED_VROM2___024ROOT_H_  // guard

#include "verilated.h"


class Vrom2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrom2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(addr1,7,0);
    VL_IN8(addr2,7,0);
    VL_OUT8(dout1,7,0);
    VL_OUT8(dout2,7,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 256> rom2__DOT__rom_array;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrom2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrom2___024root(Vrom2__Syms* symsp, const char* v__name);
    ~Vrom2___024root();
    VL_UNCOPYABLE(Vrom2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
