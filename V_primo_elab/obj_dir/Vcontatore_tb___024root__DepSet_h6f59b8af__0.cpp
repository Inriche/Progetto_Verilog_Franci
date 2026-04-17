// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontatore_tb.h for the primary calling header

#include "Vcontatore_tb__pch.h"
#include "Vcontatore_tb___024root.h"

VlCoroutine Vcontatore_tb___024root___eval_initial__TOP__Vtiming__0(Vcontatore_tb___024root* vlSelf);
VlCoroutine Vcontatore_tb___024root___eval_initial__TOP__Vtiming__1(Vcontatore_tb___024root* vlSelf);

void Vcontatore_tb___024root___eval_initial(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___eval_initial\n"); );
    // Body
    Vcontatore_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcontatore_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__contatore_tb__DOT__Clock__0 
        = vlSelf->contatore_tb__DOT__Clock;
}

VL_INLINE_OPT VlCoroutine Vcontatore_tb___024root___eval_initial__TOP__Vtiming__1(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb_contatore.v", 
                                           14);
        vlSelf->contatore_tb__DOT__Clock = (1U & (~ (IData)(vlSelf->contatore_tb__DOT__Clock)));
    }
}

void Vcontatore_tb___024root___act_sequent__TOP__0(Vcontatore_tb___024root* vlSelf);

void Vcontatore_tb___024root___eval_act(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vcontatore_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vcontatore_tb___024root___nba_sequent__TOP__0(Vcontatore_tb___024root* vlSelf);
void Vcontatore_tb___024root___nba_sequent__TOP__1(Vcontatore_tb___024root* vlSelf);

void Vcontatore_tb___024root___eval_nba(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcontatore_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcontatore_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcontatore_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcontatore_tb___024root___nba_sequent__TOP__0(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->contatore_tb__DOT__count__DOT__parall__DOT__dato 
        = vlSelf->contatore_tb__DOT__count__DOT__w;
    vlSelf->contatore_tb__DOT__count__DOT__w = (0xfU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->contatore_tb__DOT__count__DOT__parall__DOT__dato)));
}

VL_INLINE_OPT void Vcontatore_tb___024root___nba_sequent__TOP__1(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->contatore_tb__DOT__out = ((0xcU > (IData)(vlSelf->contatore_tb__DOT__count__DOT__parall__DOT__dato))
                                       ? (IData)(vlSelf->contatore_tb__DOT__count__DOT__parall__DOT__dato)
                                       : 0U);
}

void Vcontatore_tb___024root___timing_resume(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vcontatore_tb___024root___eval_triggers__act(Vcontatore_tb___024root* vlSelf);

bool Vcontatore_tb___024root___eval_phase__act(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcontatore_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vcontatore_tb___024root___timing_resume(vlSelf);
        Vcontatore_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcontatore_tb___024root___eval_phase__nba(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcontatore_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontatore_tb___024root___dump_triggers__nba(Vcontatore_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontatore_tb___024root___dump_triggers__act(Vcontatore_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcontatore_tb___024root___eval(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcontatore_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_contatore.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vcontatore_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_contatore.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vcontatore_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vcontatore_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcontatore_tb___024root___eval_debug_assertions(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
