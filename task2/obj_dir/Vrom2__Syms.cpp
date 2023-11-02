// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vrom2__Syms.h"
#include "Vrom2.h"
#include "Vrom2___024root.h"

// FUNCTIONS
Vrom2__Syms::~Vrom2__Syms()
{
}

Vrom2__Syms::Vrom2__Syms(VerilatedContext* contextp, const char* namep, Vrom2* modelp)
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
