// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gen_int.h for the primary calling header

#include "Vtb_gen_int__pch.h"
#include "Vtb_gen_int___024root.h"

VL_ATTR_COLD void Vtb_gen_int___024root___eval_static(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_gen_int___024root___eval_final(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gen_int___024root___dump_triggers__stl(Vtb_gen_int___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_gen_int___024root___eval_phase__stl(Vtb_gen_int___024root* vlSelf);

VL_ATTR_COLD void Vtb_gen_int___024root___eval_settle(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_gen_int___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("Generatore_interni_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_gen_int___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gen_int___024root___dump_triggers__stl(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_gen_int___024root___stl_sequent__TOP__0(Vtb_gen_int___024root* vlSelf);

VL_ATTR_COLD void Vtb_gen_int___024root___eval_stl(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_gen_int___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtb_gen_int___024root___stl_sequent__TOP__0(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__U1__DOT__a1__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__U1__DOT__a1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__U1__DOT__a0__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__U1__DOT__a0__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__N1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__N1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__A1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__N2__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__A2__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__A2__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__N3__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__N3__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__A3__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__A3__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__A4__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__A4__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__A5__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__A5__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__A6__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__A6__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__N2__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__A1__DOT____Vlvbound_h6fef23cb__0 = 0;
    // Body
    tb_gen_int__DOT__uut__DOT__U1__DOT__a1__DOT____Vlvbound_h6fef23cb__0 
        = (IData)((0U == (6U & (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm2))));
    vlSelf->tb_gen_int__DOT__uut__DOT__U1__DOT__aa1 
        = tb_gen_int__DOT__uut__DOT__U1__DOT__a1__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__N1__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ ((IData)(vlSelf->tb_gen_int__DOT__CREDITO) 
                    >> 2U)));
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__nn1 
        = tb_gen_int__DOT__uut__DOT__minoranza__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__N2__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ ((IData)(vlSelf->tb_gen_int__DOT__CREDITO) 
                    >> 1U)));
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__nn2 
        = tb_gen_int__DOT__uut__DOT__minoranza__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__N3__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (IData)(vlSelf->tb_gen_int__DOT__CREDITO)));
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__nn3 
        = tb_gen_int__DOT__uut__DOT__minoranza__DOT__N3__DOT____Vlvbound_h6fef23cb__0;
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__xx1 
        = (1U & (~ (((IData)(vlSelf->tb_gen_int__DOT__CREDITO) 
                     ^ (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm1)) 
                    >> 2U)));
    tb_gen_int__DOT__uut__DOT__U1__DOT__a0__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__U1__DOT__aa1) 
           & (~ (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm2)));
    vlSelf->tb_gen_int__DOT__uut__DOT__uu1 = tb_gen_int__DOT__uut__DOT__U1__DOT__a0__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__A1__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__nn1) 
           & ((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm1) 
              >> 2U));
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa1 
        = tb_gen_int__DOT__uut__DOT__minoranza__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__A2__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__nn2) 
           & ((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm1) 
              >> 1U));
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa2 
        = tb_gen_int__DOT__uut__DOT__minoranza__DOT__A2__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__A3__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__nn3) 
           & (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm1));
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa3 
        = tb_gen_int__DOT__uut__DOT__minoranza__DOT__A3__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__A5__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__xx1) 
           & (~ (((IData)(vlSelf->tb_gen_int__DOT__CREDITO) 
                  ^ (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm1)) 
                 >> 1U)));
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa5 
        = tb_gen_int__DOT__uut__DOT__minoranza__DOT__A5__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__N1__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__uu1)));
    vlSelf->tb_gen_int__DOT__uut__DOT__nn1 = tb_gen_int__DOT__uut__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__A4__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__xx1) 
           & (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa2));
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa4 
        = tb_gen_int__DOT__uut__DOT__minoranza__DOT__A4__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__A6__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa5) 
           & (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa3));
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa6 
        = tb_gen_int__DOT__uut__DOT__minoranza__DOT__A6__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__N2__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa1) 
                     | (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa4)) 
                    | (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa6))));
    vlSelf->tb_gen_int__DOT__uut__DOT__nn2 = tb_gen_int__DOT__uut__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__A1__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__nn1) 
           & (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__nn2));
    vlSelf->tb_gen_int__DOT__i = tb_gen_int__DOT__uut__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
}

VL_ATTR_COLD void Vtb_gen_int___024root___eval_triggers__stl(Vtb_gen_int___024root* vlSelf);

VL_ATTR_COLD bool Vtb_gen_int___024root___eval_phase__stl(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_gen_int___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_gen_int___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gen_int___024root___dump_triggers__act(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] tb_gen_int.PRICE_P2 or [changed] tb_gen_int.PRICE_P3 or [changed] tb_gen_int.PRICE_P4 or [changed] tb_gen_int.Sel)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] tb_gen_int.QTY_P2 or [changed] tb_gen_int.QTY_P3 or [changed] tb_gen_int.QTY_P4 or [changed] tb_gen_int.Sel)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gen_int___024root___dump_triggers__nba(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] tb_gen_int.PRICE_P2 or [changed] tb_gen_int.PRICE_P3 or [changed] tb_gen_int.PRICE_P4 or [changed] tb_gen_int.Sel)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] tb_gen_int.QTY_P2 or [changed] tb_gen_int.QTY_P3 or [changed] tb_gen_int.QTY_P4 or [changed] tb_gen_int.Sel)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_gen_int___024root___ctor_var_reset(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_gen_int__DOT__Sel = VL_RAND_RESET_I(2);
    vlSelf->tb_gen_int__DOT__QTY_P1 = VL_RAND_RESET_I(3);
    vlSelf->tb_gen_int__DOT__QTY_P2 = VL_RAND_RESET_I(3);
    vlSelf->tb_gen_int__DOT__QTY_P3 = VL_RAND_RESET_I(3);
    vlSelf->tb_gen_int__DOT__QTY_P4 = VL_RAND_RESET_I(3);
    vlSelf->tb_gen_int__DOT__PRICE_P1 = VL_RAND_RESET_I(3);
    vlSelf->tb_gen_int__DOT__PRICE_P2 = VL_RAND_RESET_I(3);
    vlSelf->tb_gen_int__DOT__PRICE_P3 = VL_RAND_RESET_I(3);
    vlSelf->tb_gen_int__DOT__PRICE_P4 = VL_RAND_RESET_I(3);
    vlSelf->tb_gen_int__DOT__CREDITO = VL_RAND_RESET_I(3);
    vlSelf->tb_gen_int__DOT__i = VL_RAND_RESET_I(1);
    vlSelf->tb_gen_int__DOT__s = VL_RAND_RESET_I(32);
    vlSelf->tb_gen_int__DOT__c = VL_RAND_RESET_I(32);
    vlSelf->tb_gen_int__DOT__uut__DOT__mm1 = VL_RAND_RESET_I(3);
    vlSelf->tb_gen_int__DOT__uut__DOT__mm2 = VL_RAND_RESET_I(3);
    vlSelf->tb_gen_int__DOT__uut__DOT__uu1 = VL_RAND_RESET_I(1);
    vlSelf->tb_gen_int__DOT__uut__DOT__nn1 = VL_RAND_RESET_I(1);
    vlSelf->tb_gen_int__DOT__uut__DOT__nn2 = VL_RAND_RESET_I(1);
    vlSelf->tb_gen_int__DOT__uut__DOT__aa1 = VL_RAND_RESET_I(1);
    vlSelf->tb_gen_int__DOT__uut__DOT__U1__DOT__aa1 = VL_RAND_RESET_I(1);
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__nn1 = VL_RAND_RESET_I(1);
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__xx1 = VL_RAND_RESET_I(1);
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa1 = VL_RAND_RESET_I(1);
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__nn2 = VL_RAND_RESET_I(1);
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa2 = VL_RAND_RESET_I(1);
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__nn3 = VL_RAND_RESET_I(1);
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa3 = VL_RAND_RESET_I(1);
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa4 = VL_RAND_RESET_I(1);
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa5 = VL_RAND_RESET_I(1);
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa6 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_gen_int__DOT__PRICE_P2__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_gen_int__DOT__PRICE_P3__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_gen_int__DOT__PRICE_P4__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_gen_int__DOT__Sel__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_gen_int__DOT__QTY_P2__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_gen_int__DOT__QTY_P3__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__tb_gen_int__DOT__QTY_P4__0 = VL_RAND_RESET_I(3);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
