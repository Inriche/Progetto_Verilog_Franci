// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbdecremento.h for the primary calling header

#include "Vtbdecremento__pch.h"
#include "Vtbdecremento___024root.h"

VlCoroutine Vtbdecremento___024root___eval_initial__TOP__Vtiming__0(Vtbdecremento___024root* vlSelf);

void Vtbdecremento___024root___eval_initial(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtbdecremento___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tbdecremento__DOT__S__0 
        = vlSelf->tbdecremento__DOT__S;
    vlSelf->__Vtrigprevexpr___TOP__tbdecremento__DOT__q2__0 
        = vlSelf->tbdecremento__DOT__q2;
    vlSelf->__Vtrigprevexpr___TOP__tbdecremento__DOT__q3__0 
        = vlSelf->tbdecremento__DOT__q3;
    vlSelf->__Vtrigprevexpr___TOP__tbdecremento__DOT__q4__0 
        = vlSelf->tbdecremento__DOT__q4;
}

void Vtbdecremento___024root___act_sequent__TOP__0(Vtbdecremento___024root* vlSelf);

void Vtbdecremento___024root___eval_act(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtbdecremento___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtbdecremento___024root___act_sequent__TOP__0(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___act_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tbdecremento__DOT__s_int) {
        if (vlSelf->tbdecremento__DOT__s_int) {
            vlSelf->tbdecremento__DOT__o = (7U & ((IData)(1U) 
                                                  + 
                                                  (~ 
                                                   ((IData)(2U) 
                                                    + 
                                                    (~ (IData)(vlSelf->tbdecremento__DOT__dec__DOT__mm1))))));
        }
    } else {
        vlSelf->tbdecremento__DOT__o = 0U;
    }
}

void Vtbdecremento___024root___nba_sequent__TOP__0(Vtbdecremento___024root* vlSelf);

void Vtbdecremento___024root___eval_nba(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtbdecremento___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtbdecremento___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtbdecremento___024root___nba_sequent__TOP__0(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->tbdecremento__DOT__dec__DOT__mm1 = ((2U 
                                                 & (IData)(vlSelf->tbdecremento__DOT__S))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->tbdecremento__DOT__S))
                                                  ? (IData)(vlSelf->tbdecremento__DOT__q4)
                                                  : (IData)(vlSelf->tbdecremento__DOT__q3))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->tbdecremento__DOT__S))
                                                  ? (IData)(vlSelf->tbdecremento__DOT__q2)
                                                  : (IData)(vlSelf->tbdecremento__DOT__q1)));
}

void Vtbdecremento___024root___timing_resume(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtbdecremento___024root___eval_triggers__act(Vtbdecremento___024root* vlSelf);

bool Vtbdecremento___024root___eval_phase__act(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtbdecremento___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtbdecremento___024root___timing_resume(vlSelf);
        Vtbdecremento___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtbdecremento___024root___eval_phase__nba(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtbdecremento___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbdecremento___024root___dump_triggers__nba(Vtbdecremento___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbdecremento___024root___dump_triggers__act(Vtbdecremento___024root* vlSelf);
#endif  // VL_DEBUG

void Vtbdecremento___024root___eval(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtbdecremento___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("decremento_prod_scelto_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtbdecremento___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("decremento_prod_scelto_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtbdecremento___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtbdecremento___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtbdecremento___024root___eval_debug_assertions(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
