// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregistro.h for the primary calling header

#include "Vregistro__pch.h"
#include "Vregistro___024root.h"

VlCoroutine Vregistro___024root___eval_initial__TOP__Vtiming__0(Vregistro___024root* vlSelf);

void Vregistro___024root___eval_initial(Vregistro___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root___eval_initial\n"); );
    // Body
    Vregistro___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__registro__DOT__C__0 
        = vlSelf->registro__DOT__C;
}

void Vregistro___024root___act_sequent__TOP__0(Vregistro___024root* vlSelf);

void Vregistro___024root___eval_act(Vregistro___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vregistro___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vregistro___024root___nba_sequent__TOP__0(Vregistro___024root* vlSelf);

void Vregistro___024root___eval_nba(Vregistro___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vregistro___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vregistro___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vregistro___024root___nba_sequent__TOP__0(Vregistro___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->registro__DOT__dut__DOT__dato = ((8U & 
                                              ((IData)(vlSelf->registro__DOT__A) 
                                               << 3U)) 
                                             | (7U 
                                                & ((IData)(vlSelf->registro__DOT__dut__DOT__dato) 
                                                   >> 1U)));
}

void Vregistro___024root___timing_resume(Vregistro___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vregistro___024root___eval_triggers__act(Vregistro___024root* vlSelf);

bool Vregistro___024root___eval_phase__act(Vregistro___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vregistro___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vregistro___024root___timing_resume(vlSelf);
        Vregistro___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vregistro___024root___eval_phase__nba(Vregistro___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vregistro___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregistro___024root___dump_triggers__nba(Vregistro___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vregistro___024root___dump_triggers__act(Vregistro___024root* vlSelf);
#endif  // VL_DEBUG

void Vregistro___024root___eval(Vregistro___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vregistro___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_reg.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vregistro___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_reg.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vregistro___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vregistro___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vregistro___024root___eval_debug_assertions(Vregistro___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
