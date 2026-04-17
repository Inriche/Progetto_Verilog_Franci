// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmagg_min_tb.h for the primary calling header

#include "Vmagg_min_tb__pch.h"
#include "Vmagg_min_tb___024root.h"

VlCoroutine Vmagg_min_tb___024root___eval_initial__TOP__Vtiming__0(Vmagg_min_tb___024root* vlSelf);

void Vmagg_min_tb___024root___eval_initial(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vmagg_min_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

void Vmagg_min_tb___024root___act_sequent__TOP__0(Vmagg_min_tb___024root* vlSelf);

void Vmagg_min_tb___024root___eval_act(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vmagg_min_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vmagg_min_tb___024root___act_sequent__TOP__0(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp1__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
    magg_min_tb__DOT__dut__DOT__Comp1__DOT__N1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp1__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    magg_min_tb__DOT__dut__DOT__Comp1__DOT__A1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp1__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
    magg_min_tb__DOT__dut__DOT__Comp1__DOT__N2__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp1__DOT__A2__DOT____Vlvbound_h6fef23cb__0;
    magg_min_tb__DOT__dut__DOT__Comp1__DOT__A2__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp1__DOT__N3__DOT____Vlvbound_h6fef23cb__0;
    magg_min_tb__DOT__dut__DOT__Comp1__DOT__N3__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp1__DOT__A3__DOT____Vlvbound_h6fef23cb__0;
    magg_min_tb__DOT__dut__DOT__Comp1__DOT__A3__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp1__DOT__A4__DOT____Vlvbound_h6fef23cb__0;
    magg_min_tb__DOT__dut__DOT__Comp1__DOT__A4__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp1__DOT__A5__DOT____Vlvbound_h6fef23cb__0;
    magg_min_tb__DOT__dut__DOT__Comp1__DOT__A5__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp1__DOT__A6__DOT____Vlvbound_h6fef23cb__0;
    magg_min_tb__DOT__dut__DOT__Comp1__DOT__A6__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp5__DOT____Vlvbound_h6fef23cb__0;
    magg_min_tb__DOT__dut__DOT__Comp5__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ magg_min_tb__DOT__dut__DOT__Comp3__DOT____Vlvbound_h6fef23cb__0;
    magg_min_tb__DOT__dut__DOT__Comp3__DOT____Vlvbound_h6fef23cb__0 = 0;
    // Body
    magg_min_tb__DOT__dut__DOT__Comp1__DOT__N1__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ ((IData)(vlSelf->magg_min_tb__DOT__AA) 
                    >> 2U)));
    vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__nn1 
        = magg_min_tb__DOT__dut__DOT__Comp1__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
    magg_min_tb__DOT__dut__DOT__Comp1__DOT__N2__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ ((IData)(vlSelf->magg_min_tb__DOT__AA) 
                    >> 1U)));
    vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__nn2 
        = magg_min_tb__DOT__dut__DOT__Comp1__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
    magg_min_tb__DOT__dut__DOT__Comp1__DOT__N3__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (IData)(vlSelf->magg_min_tb__DOT__AA)));
    vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__nn3 
        = magg_min_tb__DOT__dut__DOT__Comp1__DOT__N3__DOT____Vlvbound_h6fef23cb__0;
    vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__xx1 
        = (1U & (~ (((IData)(vlSelf->magg_min_tb__DOT__AA) 
                     ^ (IData)(vlSelf->magg_min_tb__DOT__BB)) 
                    >> 2U)));
    magg_min_tb__DOT__dut__DOT__Comp1__DOT__A1__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__nn1) 
           & ((IData)(vlSelf->magg_min_tb__DOT__BB) 
              >> 2U));
    vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa1 
        = magg_min_tb__DOT__dut__DOT__Comp1__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    magg_min_tb__DOT__dut__DOT__Comp1__DOT__A2__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__nn2) 
           & ((IData)(vlSelf->magg_min_tb__DOT__BB) 
              >> 1U));
    vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa2 
        = magg_min_tb__DOT__dut__DOT__Comp1__DOT__A2__DOT____Vlvbound_h6fef23cb__0;
    magg_min_tb__DOT__dut__DOT__Comp1__DOT__A3__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__nn3) 
           & (IData)(vlSelf->magg_min_tb__DOT__BB));
    vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa3 
        = magg_min_tb__DOT__dut__DOT__Comp1__DOT__A3__DOT____Vlvbound_h6fef23cb__0;
    magg_min_tb__DOT__dut__DOT__Comp1__DOT__A5__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__xx1) 
           & (~ (((IData)(vlSelf->magg_min_tb__DOT__AA) 
                  ^ (IData)(vlSelf->magg_min_tb__DOT__BB)) 
                 >> 1U)));
    vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa5 
        = magg_min_tb__DOT__dut__DOT__Comp1__DOT__A5__DOT____Vlvbound_h6fef23cb__0;
    magg_min_tb__DOT__dut__DOT__Comp1__DOT__A4__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__xx1) 
           & (IData)(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa2));
    vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa4 
        = magg_min_tb__DOT__dut__DOT__Comp1__DOT__A4__DOT____Vlvbound_h6fef23cb__0;
    magg_min_tb__DOT__dut__DOT__Comp1__DOT__A6__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa5) 
           & (IData)(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa3));
    vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa6 
        = magg_min_tb__DOT__dut__DOT__Comp1__DOT__A6__DOT____Vlvbound_h6fef23cb__0;
    magg_min_tb__DOT__dut__DOT__Comp5__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (((IData)(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa1) 
                     | (IData)(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa4)) 
                    | (IData)(vlSelf->magg_min_tb__DOT__dut__DOT__Comp1__DOT__aa6))));
    vlSelf->magg_min_tb__DOT__dut__DOT__cc2 = magg_min_tb__DOT__dut__DOT__Comp5__DOT____Vlvbound_h6fef23cb__0;
    if (vlSelf->magg_min_tb__DOT__dut__DOT__cc2) {
        if (vlSelf->magg_min_tb__DOT__dut__DOT__cc2) {
            vlSelf->magg_min_tb__DOT__Mag = vlSelf->magg_min_tb__DOT__AA;
        }
    } else {
        vlSelf->magg_min_tb__DOT__Mag = vlSelf->magg_min_tb__DOT__BB;
    }
    magg_min_tb__DOT__dut__DOT__Comp3__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (IData)(vlSelf->magg_min_tb__DOT__dut__DOT__cc2)));
    vlSelf->magg_min_tb__DOT__dut__DOT__cc3 = magg_min_tb__DOT__dut__DOT__Comp3__DOT____Vlvbound_h6fef23cb__0;
    if (vlSelf->magg_min_tb__DOT__dut__DOT__cc3) {
        if (vlSelf->magg_min_tb__DOT__dut__DOT__cc3) {
            vlSelf->magg_min_tb__DOT__Min = vlSelf->magg_min_tb__DOT__AA;
        }
    } else {
        vlSelf->magg_min_tb__DOT__Min = vlSelf->magg_min_tb__DOT__BB;
    }
}

void Vmagg_min_tb___024root___eval_nba(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vmagg_min_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vmagg_min_tb___024root___timing_resume(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vmagg_min_tb___024root___eval_triggers__act(Vmagg_min_tb___024root* vlSelf);

bool Vmagg_min_tb___024root___eval_phase__act(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmagg_min_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vmagg_min_tb___024root___timing_resume(vlSelf);
        Vmagg_min_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmagg_min_tb___024root___eval_phase__nba(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmagg_min_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmagg_min_tb___024root___dump_triggers__nba(Vmagg_min_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmagg_min_tb___024root___dump_triggers__act(Vmagg_min_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmagg_min_tb___024root___eval(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmagg_min_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Maggiore_minore_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vmagg_min_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Maggiore_minore_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vmagg_min_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vmagg_min_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmagg_min_tb___024root___eval_debug_assertions(Vmagg_min_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmagg_min_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmagg_min_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
