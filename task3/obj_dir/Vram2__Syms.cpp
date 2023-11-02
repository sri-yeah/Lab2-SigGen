// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vram2__Syms.h"
#include "Vram2.h"
#include "Vram2___024root.h"

// FUNCTIONS
Vram2__Syms::~Vram2__Syms()
{
}

Vram2__Syms::Vram2__Syms(VerilatedContext* contextp, const char* namep, Vram2* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
