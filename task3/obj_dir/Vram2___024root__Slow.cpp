// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vram2.h for the primary calling header

#include "verilated.h"

#include "Vram2__Syms.h"
#include "Vram2__Syms.h"
#include "Vram2___024root.h"

void Vram2___024root___ctor_var_reset(Vram2___024root* vlSelf);

Vram2___024root::Vram2___024root(Vram2__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vram2___024root___ctor_var_reset(this);
}

void Vram2___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vram2___024root::~Vram2___024root() {
}
