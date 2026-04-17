// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbmuxreg.h for the primary calling header

#include "Vtbmuxreg__pch.h"
#include "Vtbmuxreg___024root.h"

VlCoroutine Vtbmuxreg___024root___eval_initial__TOP__Vtiming__0(Vtbmuxreg___024root* vlSelf);

void Vtbmuxreg___024root___eval_initial(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtbmuxreg___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tbmuxreg__DOT__C__0 
        = vlSelf->tbmuxreg__DOT__C;
}

void Vtbmuxreg___024root___act_sequent__TOP__0(Vtbmuxreg___024root* vlSelf);

void Vtbmuxreg___024root___eval_act(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtbmuxreg___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtbmuxreg___024root___act_sequent__TOP__0(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->tbmuxreg__DOT__dut__DOT__muxreg = ((1U 
                                                == (IData)(vlSelf->tbmuxreg__DOT__ctrl))
                                                ? (IData)(vlSelf->tbmuxreg__DOT__ing1)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->tbmuxreg__DOT__ctrl))
                                                    ? (IData)(vlSelf->tbmuxreg__DOT__ing2)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->tbmuxreg__DOT__ctrl))
                                                     ? (IData)(vlSelf->tbmuxreg__DOT__ing3)
                                                     : 0U)));
}

void Vtbmuxreg___024root___nba_sequent__TOP__0(Vtbmuxreg___024root* vlSelf);

void Vtbmuxreg___024root___eval_nba(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtbmuxreg___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtbmuxreg___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtbmuxreg___024root___nba_sequent__TOP__0(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->tbmuxreg__DOT__dut__DOT__regpar__DOT__dato 
        = vlSelf->tbmuxreg__DOT__dut__DOT__muxreg;
}

void Vtbmuxreg___024root___timing_resume(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtbmuxreg___024root___eval_triggers__act(Vtbmuxreg___024root* vlSelf);

bool Vtbmuxreg___024root___eval_phase__act(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtbmuxreg___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtbmuxreg___024root___timing_resume(vlSelf);
        Vtbmuxreg___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtbmuxreg___024root___eval_phase__nba(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtbmuxreg___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbmuxreg___024root___dump_triggers__nba(Vtbmuxreg___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbmuxreg___024root___dump_triggers__act(Vtbmuxreg___024root* vlSelf);
#endif  // VL_DEBUG

void Vtbmuxreg___024root___eval(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtbmuxreg___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("mux3ingregtb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtbmuxreg___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("mux3ingregtb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtbmuxreg___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtbmuxreg___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtbmuxreg___024root___eval_debug_assertions(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
