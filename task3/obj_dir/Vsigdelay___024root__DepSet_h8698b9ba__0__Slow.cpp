// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsigdelay.h for the primary calling header

#include "verilated.h"

#include "Vsigdelay__Syms.h"
#include "Vsigdelay___024root.h"

VL_ATTR_COLD void Vsigdelay___024root___eval_static(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vsigdelay___024root___eval_initial__TOP(Vsigdelay___024root* vlSelf);

VL_ATTR_COLD void Vsigdelay___024root___eval_initial(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___eval_initial\n"); );
    // Body
    Vsigdelay___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vsigdelay___024root___eval_initial__TOP(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VL_WRITEF("Loading ram.\n");
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x6572616dU;
    __Vtemp_1[2U] = 0x73696eU;
    VL_READMEM_N(true, 8, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelf->sinegen__DOT__sineRam2__DOT__ram_array)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vsigdelay___024root___eval_final(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vsigdelay___024root___eval_settle(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsigdelay___024root___dump_triggers__act(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsigdelay___024root___dump_triggers__nba(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsigdelay___024root___ctor_var_reset(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->c_en = VL_RAND_RESET_I(1);
    vlSelf->offset = VL_RAND_RESET_I(1);
    vlSelf->wr = VL_RAND_RESET_I(1);
    vlSelf->rd = VL_RAND_RESET_I(1);
    vlSelf->mic_signal = VL_RAND_RESET_I(8);
    vlSelf->delayed_signal = VL_RAND_RESET_I(8);
    vlSelf->sinegen__DOT__address1 = VL_RAND_RESET_I(8);
    vlSelf->sinegen__DOT__address2 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->sinegen__DOT__sineRam2__DOT__ram_array[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
