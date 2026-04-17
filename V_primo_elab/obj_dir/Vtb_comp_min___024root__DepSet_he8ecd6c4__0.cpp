// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_comp_min.h for the primary calling header

#include "Vtb_comp_min__pch.h"
#include "Vtb_comp_min___024root.h"

VlCoroutine Vtb_comp_min___024root___eval_initial__TOP__Vtiming__0(Vtb_comp_min___024root* vlSelf);

void Vtb_comp_min___024root___eval_initial(Vtb_comp_min___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_comp_min__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_comp_min___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_comp_min___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vtb_comp_min___024root___act_sequent__TOP__0(Vtb_comp_min___024root* vlSelf);

void Vtb_comp_min___024root___eval_act(Vtb_comp_min___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_comp_min__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_comp_min___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_comp_min___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_comp_min___024root___act_sequent__TOP__0(Vtb_comp_min___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_comp_min__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_comp_min___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_comp_min__DOT__uut__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
    tb_comp_min__DOT__uut__DOT__N1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_comp_min__DOT__uut__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    tb_comp_min__DOT__uut__DOT__A1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_comp_min__DOT__uut__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
    tb_comp_min__DOT__uut__DOT__N2__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_comp_min__DOT__uut__DOT__A2__DOT____Vlvbound_h6fef23cb__0;
    tb_comp_min__DOT__uut__DOT__A2__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_comp_min__DOT__uut__DOT__N3__DOT____Vlvbound_h6fef23cb__0;
    tb_comp_min__DOT__uut__DOT__N3__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_comp_min__DOT__uut__DOT__A3__DOT____Vlvbound_h6fef23cb__0;
    tb_comp_min__DOT__uut__DOT__A3__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_comp_min__DOT__uut__DOT__A4__DOT____Vlvbound_h6fef23cb__0;
    tb_comp_min__DOT__uut__DOT__A4__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_comp_min__DOT__uut__DOT__A5__DOT____Vlvbound_h6fef23cb__0;
    tb_comp_min__DOT__uut__DOT__A5__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_comp_min__DOT__uut__DOT__A6__DOT____Vlvbound_h6fef23cb__0;
    tb_comp_min__DOT__uut__DOT__A6__DOT____Vlvbound_h6fef23cb__0 = 0;
    // Body
    tb_comp_min__DOT__uut__DOT__N1__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ ((IData)(vlSelf->tb_comp_min__DOT__str1) 
                    >> 2U)));
    vlSelf->tb_comp_min__DOT__uut__DOT__nn1 = tb_comp_min__DOT__uut__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
    tb_comp_min__DOT__uut__DOT__N2__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ ((IData)(vlSelf->tb_comp_min__DOT__str1) 
                    >> 1U)));
    vlSelf->tb_comp_min__DOT__uut__DOT__nn2 = tb_comp_min__DOT__uut__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
    tb_comp_min__DOT__uut__DOT__N3__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (IData)(vlSelf->tb_comp_min__DOT__str1)));
    vlSelf->tb_comp_min__DOT__uut__DOT__nn3 = tb_comp_min__DOT__uut__DOT__N3__DOT____Vlvbound_h6fef23cb__0;
    vlSelf->tb_comp_min__DOT__uut__DOT__xx1 = (1U & 
                                               (~ (
                                                   ((IData)(vlSelf->tb_comp_min__DOT__str1) 
                                                    ^ (IData)(vlSelf->tb_comp_min__DOT__str2)) 
                                                   >> 2U)));
    tb_comp_min__DOT__uut__DOT__A1__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->tb_comp_min__DOT__uut__DOT__nn1) 
           & ((IData)(vlSelf->tb_comp_min__DOT__str2) 
              >> 2U));
    vlSelf->tb_comp_min__DOT__uut__DOT__aa1 = tb_comp_min__DOT__uut__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    tb_comp_min__DOT__uut__DOT__A2__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->tb_comp_min__DOT__uut__DOT__nn2) 
           & ((IData)(vlSelf->tb_comp_min__DOT__str2) 
              >> 1U));
    vlSelf->tb_comp_min__DOT__uut__DOT__aa2 = tb_comp_min__DOT__uut__DOT__A2__DOT____Vlvbound_h6fef23cb__0;
    tb_comp_min__DOT__uut__DOT__A3__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->tb_comp_min__DOT__uut__DOT__nn3) 
           & (IData)(vlSelf->tb_comp_min__DOT__str2));
    vlSelf->tb_comp_min__DOT__uut__DOT__aa3 = tb_comp_min__DOT__uut__DOT__A3__DOT____Vlvbound_h6fef23cb__0;
    tb_comp_min__DOT__uut__DOT__A5__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->tb_comp_min__DOT__uut__DOT__xx1) 
           & (~ (((IData)(vlSelf->tb_comp_min__DOT__str1) 
                  ^ (IData)(vlSelf->tb_comp_min__DOT__str2)) 
                 >> 1U)));
    vlSelf->tb_comp_min__DOT__uut__DOT__aa5 = tb_comp_min__DOT__uut__DOT__A5__DOT____Vlvbound_h6fef23cb__0;
    tb_comp_min__DOT__uut__DOT__A4__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->tb_comp_min__DOT__uut__DOT__xx1) 
           & (IData)(vlSelf->tb_comp_min__DOT__uut__DOT__aa2));
    vlSelf->tb_comp_min__DOT__uut__DOT__aa4 = tb_comp_min__DOT__uut__DOT__A4__DOT____Vlvbound_h6fef23cb__0;
    tb_comp_min__DOT__uut__DOT__A6__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->tb_comp_min__DOT__uut__DOT__aa5) 
           & (IData)(vlSelf->tb_comp_min__DOT__uut__DOT__aa3));
    vlSelf->tb_comp_min__DOT__uut__DOT__aa6 = tb_comp_min__DOT__uut__DOT__A6__DOT____Vlvbound_h6fef23cb__0;
}

void Vtb_comp_min___024root___eval_nba(Vtb_comp_min___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_comp_min__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_comp_min___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_comp_min___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vtb_comp_min___024root___timing_resume(Vtb_comp_min___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_comp_min__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_comp_min___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_comp_min___024root___eval_triggers__act(Vtb_comp_min___024root* vlSelf);

bool Vtb_comp_min___024root___eval_phase__act(Vtb_comp_min___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_comp_min__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_comp_min___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_comp_min___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_comp_min___024root___timing_resume(vlSelf);
        Vtb_comp_min___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_comp_min___024root___eval_phase__nba(Vtb_comp_min___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_comp_min__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_comp_min___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_comp_min___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_comp_min___024root___dump_triggers__nba(Vtb_comp_min___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_comp_min___024root___dump_triggers__act(Vtb_comp_min___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_comp_min___024root___eval(Vtb_comp_min___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_comp_min__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_comp_min___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_comp_min___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("comparatore_minoranza_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_comp_min___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("comparatore_minoranza_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_comp_min___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_comp_min___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_comp_min___024root___eval_debug_assertions(Vtb_comp_min___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_comp_min__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_comp_min___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
