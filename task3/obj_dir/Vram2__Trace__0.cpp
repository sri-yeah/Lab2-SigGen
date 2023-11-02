// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vram2__Syms.h"


void Vram2___024root__trace_chg_sub_0(Vram2___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vram2___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2___024root__trace_chg_top_0\n"); );
    // Init
    Vram2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vram2___024root*>(voidSelf);
    Vram2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vram2___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vram2___024root__trace_chg_sub_0(Vram2___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->w_en));
    bufp->chgBit(oldp+2,(vlSelf->r_en));
    bufp->chgCData(oldp+3,(vlSelf->w_addr),8);
    bufp->chgCData(oldp+4,(vlSelf->r_addr),8);
    bufp->chgCData(oldp+5,(vlSelf->din),8);
    bufp->chgCData(oldp+6,(vlSelf->dout),8);
}

void Vram2___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2___024root__trace_cleanup\n"); );
    // Init
    Vram2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vram2___024root*>(voidSelf);
    Vram2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
