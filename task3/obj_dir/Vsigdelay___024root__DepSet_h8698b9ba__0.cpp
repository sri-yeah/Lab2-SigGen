// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsigdelay.h for the primary calling header

#include "verilated.h"

#include "Vsigdelay__Syms.h"
#include "Vsigdelay___024root.h"

void Vsigdelay___024root___eval_act(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vsigdelay___024root___nba_sequent__TOP__0(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__sinegen__DOT__address1;
    __Vdly__sinegen__DOT__address1 = 0;
    CData/*7:0*/ __Vdlyvdim0__sinegen__DOT__sineRam2__DOT__ram_array__v0;
    __Vdlyvdim0__sinegen__DOT__sineRam2__DOT__ram_array__v0 = 0;
    CData/*7:0*/ __Vdlyvval__sinegen__DOT__sineRam2__DOT__ram_array__v0;
    __Vdlyvval__sinegen__DOT__sineRam2__DOT__ram_array__v0 = 0;
    CData/*0:0*/ __Vdlyvset__sinegen__DOT__sineRam2__DOT__ram_array__v0;
    __Vdlyvset__sinegen__DOT__sineRam2__DOT__ram_array__v0 = 0;
    // Body
    __Vdly__sinegen__DOT__address1 = vlSelf->sinegen__DOT__address1;
    __Vdlyvset__sinegen__DOT__sineRam2__DOT__ram_array__v0 = 0U;
    if (vlSelf->wr) {
        __Vdlyvval__sinegen__DOT__sineRam2__DOT__ram_array__v0 
            = vlSelf->mic_signal;
        __Vdlyvset__sinegen__DOT__sineRam2__DOT__ram_array__v0 = 1U;
        __Vdlyvdim0__sinegen__DOT__sineRam2__DOT__ram_array__v0 
            = vlSelf->sinegen__DOT__address1;
    }
    if (vlSelf->rd) {
        vlSelf->delayed_signal = vlSelf->sinegen__DOT__sineRam2__DOT__ram_array
            [vlSelf->sinegen__DOT__address2];
    }
    if (__Vdlyvset__sinegen__DOT__sineRam2__DOT__ram_array__v0) {
        vlSelf->sinegen__DOT__sineRam2__DOT__ram_array[__Vdlyvdim0__sinegen__DOT__sineRam2__DOT__ram_array__v0] 
            = __Vdlyvval__sinegen__DOT__sineRam2__DOT__ram_array__v0;
    }
    if (vlSelf->rst) {
        __Vdly__sinegen__DOT__address1 = 0U;
        vlSelf->sinegen__DOT__address2 = 0U;
    } else if (vlSelf->c_en) {
        __Vdly__sinegen__DOT__address1 = (0xffU & ((IData)(1U) 
                                                   + (IData)(vlSelf->sinegen__DOT__address1)));
        vlSelf->sinegen__DOT__address2 = (0xffU & ((IData)(vlSelf->sinegen__DOT__address1) 
                                                   + (IData)(vlSelf->offset)));
    }
    vlSelf->sinegen__DOT__address1 = __Vdly__sinegen__DOT__address1;
}

void Vsigdelay___024root___eval_nba(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsigdelay___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vsigdelay___024root___eval_triggers__act(Vsigdelay___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsigdelay___024root___dump_triggers__act(Vsigdelay___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsigdelay___024root___dump_triggers__nba(Vsigdelay___024root* vlSelf);
#endif  // VL_DEBUG

void Vsigdelay___024root___eval(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vsigdelay___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vsigdelay___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("sigdelay.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vsigdelay___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vsigdelay___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("sigdelay.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vsigdelay___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vsigdelay___024root___eval_debug_assertions(Vsigdelay___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsigdelay__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsigdelay___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->c_en & 0xfeU))) {
        Verilated::overWidthError("c_en");}
    if (VL_UNLIKELY((vlSelf->offset & 0xfeU))) {
        Verilated::overWidthError("offset");}
    if (VL_UNLIKELY((vlSelf->wr & 0xfeU))) {
        Verilated::overWidthError("wr");}
    if (VL_UNLIKELY((vlSelf->rd & 0xfeU))) {
        Verilated::overWidthError("rd");}
}
#endif  // VL_DEBUG
