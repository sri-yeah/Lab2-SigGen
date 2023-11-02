// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vram2__Syms.h"


VL_ATTR_COLD void Vram2___024root__trace_init_sub__TOP__0(Vram2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"w_en", false,-1);
    tracep->declBit(c+3,"r_en", false,-1);
    tracep->declBus(c+4,"w_addr", false,-1, 7,0);
    tracep->declBus(c+5,"r_addr", false,-1, 7,0);
    tracep->declBus(c+6,"din", false,-1, 7,0);
    tracep->declBus(c+7,"dout", false,-1, 7,0);
    tracep->pushNamePrefix("ram2 ");
    tracep->declBus(c+8,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+8,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"w_en", false,-1);
    tracep->declBit(c+3,"r_en", false,-1);
    tracep->declBus(c+4,"w_addr", false,-1, 7,0);
    tracep->declBus(c+5,"r_addr", false,-1, 7,0);
    tracep->declBus(c+6,"din", false,-1, 7,0);
    tracep->declBus(c+7,"dout", false,-1, 7,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vram2___024root__trace_init_top(Vram2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2___024root__trace_init_top\n"); );
    // Body
    Vram2___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vram2___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vram2___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vram2___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vram2___024root__trace_register(Vram2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vram2___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vram2___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vram2___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vram2___024root__trace_full_sub_0(Vram2___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vram2___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2___024root__trace_full_top_0\n"); );
    // Init
    Vram2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vram2___024root*>(voidSelf);
    Vram2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vram2___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vram2___024root__trace_full_sub_0(Vram2___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vram2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vram2___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->w_en));
    bufp->fullBit(oldp+3,(vlSelf->r_en));
    bufp->fullCData(oldp+4,(vlSelf->w_addr),8);
    bufp->fullCData(oldp+5,(vlSelf->r_addr),8);
    bufp->fullCData(oldp+6,(vlSelf->din),8);
    bufp->fullCData(oldp+7,(vlSelf->dout),8);
    bufp->fullIData(oldp+8,(8U),32);
}
