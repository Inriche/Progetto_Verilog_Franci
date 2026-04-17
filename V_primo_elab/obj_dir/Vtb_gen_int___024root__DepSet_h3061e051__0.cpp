// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_gen_int.h for the primary calling header

#include "Vtb_gen_int__pch.h"
#include "Vtb_gen_int___024root.h"

VlCoroutine Vtb_gen_int___024root___eval_initial__TOP__Vtiming__0(Vtb_gen_int___024root* vlSelf);

void Vtb_gen_int___024root___eval_initial(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_gen_int___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_gen_int__DOT__PRICE_P2__0 
        = vlSelf->tb_gen_int__DOT__PRICE_P2;
    vlSelf->__Vtrigprevexpr___TOP__tb_gen_int__DOT__PRICE_P3__0 
        = vlSelf->tb_gen_int__DOT__PRICE_P3;
    vlSelf->__Vtrigprevexpr___TOP__tb_gen_int__DOT__PRICE_P4__0 
        = vlSelf->tb_gen_int__DOT__PRICE_P4;
    vlSelf->__Vtrigprevexpr___TOP__tb_gen_int__DOT__Sel__0 
        = vlSelf->tb_gen_int__DOT__Sel;
    vlSelf->__Vtrigprevexpr___TOP__tb_gen_int__DOT__QTY_P2__0 
        = vlSelf->tb_gen_int__DOT__QTY_P2;
    vlSelf->__Vtrigprevexpr___TOP__tb_gen_int__DOT__QTY_P3__0 
        = vlSelf->tb_gen_int__DOT__QTY_P3;
    vlSelf->__Vtrigprevexpr___TOP__tb_gen_int__DOT__QTY_P4__0 
        = vlSelf->tb_gen_int__DOT__QTY_P4;
}

void Vtb_gen_int___024root___act_sequent__TOP__0(Vtb_gen_int___024root* vlSelf);

void Vtb_gen_int___024root___eval_act(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_gen_int___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_gen_int___024root___act_sequent__TOP__0(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___act_sequent__TOP__0\n"); );
    // Init
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

void Vtb_gen_int___024root___nba_sequent__TOP__0(Vtb_gen_int___024root* vlSelf);
void Vtb_gen_int___024root___nba_sequent__TOP__1(Vtb_gen_int___024root* vlSelf);
void Vtb_gen_int___024root___nba_sequent__TOP__2(Vtb_gen_int___024root* vlSelf);
void Vtb_gen_int___024root___nba_comb__TOP__0(Vtb_gen_int___024root* vlSelf);
void Vtb_gen_int___024root___nba_comb__TOP__1(Vtb_gen_int___024root* vlSelf);

void Vtb_gen_int___024root___eval_nba(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_gen_int___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_gen_int___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_gen_int___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_gen_int___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_gen_int___024root___nba_comb__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_gen_int___024root___nba_sequent__TOP__0(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__N1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__N2__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__N3__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__N3__DOT____Vlvbound_h6fef23cb__0 = 0;
    // Body
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
}

VL_INLINE_OPT void Vtb_gen_int___024root___nba_sequent__TOP__1(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__U1__DOT__a1__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__U1__DOT__a1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__U1__DOT__a0__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__U1__DOT__a0__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__N1__DOT____Vlvbound_h6fef23cb__0 = 0;
    // Body
    vlSelf->tb_gen_int__DOT__uut__DOT__mm2 = ((2U & (IData)(vlSelf->tb_gen_int__DOT__Sel))
                                               ? ((1U 
                                                   & (IData)(vlSelf->tb_gen_int__DOT__Sel))
                                                   ? (IData)(vlSelf->tb_gen_int__DOT__QTY_P4)
                                                   : (IData)(vlSelf->tb_gen_int__DOT__QTY_P3))
                                               : ((1U 
                                                   & (IData)(vlSelf->tb_gen_int__DOT__Sel))
                                                   ? (IData)(vlSelf->tb_gen_int__DOT__QTY_P2)
                                                   : (IData)(vlSelf->tb_gen_int__DOT__QTY_P1)));
    tb_gen_int__DOT__uut__DOT__U1__DOT__a1__DOT____Vlvbound_h6fef23cb__0 
        = (IData)((0U == (6U & (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm2))));
    vlSelf->tb_gen_int__DOT__uut__DOT__U1__DOT__aa1 
        = tb_gen_int__DOT__uut__DOT__U1__DOT__a1__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__U1__DOT__a0__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__U1__DOT__aa1) 
           & (~ (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm2)));
    vlSelf->tb_gen_int__DOT__uut__DOT__uu1 = tb_gen_int__DOT__uut__DOT__U1__DOT__a0__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__N1__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__uu1)));
    vlSelf->tb_gen_int__DOT__uut__DOT__nn1 = tb_gen_int__DOT__uut__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
}

VL_INLINE_OPT void Vtb_gen_int___024root___nba_sequent__TOP__2(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->tb_gen_int__DOT__uut__DOT__mm1 = ((2U & (IData)(vlSelf->tb_gen_int__DOT__Sel))
                                               ? ((1U 
                                                   & (IData)(vlSelf->tb_gen_int__DOT__Sel))
                                                   ? (IData)(vlSelf->tb_gen_int__DOT__PRICE_P4)
                                                   : (IData)(vlSelf->tb_gen_int__DOT__PRICE_P3))
                                               : ((1U 
                                                   & (IData)(vlSelf->tb_gen_int__DOT__Sel))
                                                   ? (IData)(vlSelf->tb_gen_int__DOT__PRICE_P2)
                                                   : (IData)(vlSelf->tb_gen_int__DOT__PRICE_P1)));
}

VL_INLINE_OPT void Vtb_gen_int___024root___nba_comb__TOP__0(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__A1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__minoranza__DOT__A2__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__A2__DOT____Vlvbound_h6fef23cb__0 = 0;
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
    // Body
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
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__xx1 
        = (1U & (~ (((IData)(vlSelf->tb_gen_int__DOT__CREDITO) 
                     ^ (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm1)) 
                    >> 2U)));
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__A4__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__xx1) 
           & (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa2));
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa4 
        = tb_gen_int__DOT__uut__DOT__minoranza__DOT__A4__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__minoranza__DOT__A5__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__xx1) 
           & (~ (((IData)(vlSelf->tb_gen_int__DOT__CREDITO) 
                  ^ (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__mm1)) 
                 >> 1U)));
    vlSelf->tb_gen_int__DOT__uut__DOT__minoranza__DOT__aa5 
        = tb_gen_int__DOT__uut__DOT__minoranza__DOT__A5__DOT____Vlvbound_h6fef23cb__0;
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
}

VL_INLINE_OPT void Vtb_gen_int___024root___nba_comb__TOP__1(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___nba_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ tb_gen_int__DOT__uut__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    tb_gen_int__DOT__uut__DOT__A1__DOT____Vlvbound_h6fef23cb__0 = 0;
    // Body
    tb_gen_int__DOT__uut__DOT__A1__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->tb_gen_int__DOT__uut__DOT__nn1) 
           & (IData)(vlSelf->tb_gen_int__DOT__uut__DOT__nn2));
    vlSelf->tb_gen_int__DOT__i = tb_gen_int__DOT__uut__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
}

void Vtb_gen_int___024root___timing_resume(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_gen_int___024root___eval_triggers__act(Vtb_gen_int___024root* vlSelf);

bool Vtb_gen_int___024root___eval_phase__act(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_gen_int___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_gen_int___024root___timing_resume(vlSelf);
        Vtb_gen_int___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_gen_int___024root___eval_phase__nba(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_gen_int___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gen_int___024root___dump_triggers__nba(Vtb_gen_int___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_gen_int___024root___dump_triggers__act(Vtb_gen_int___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_gen_int___024root___eval(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_gen_int___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Generatore_interni_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_gen_int___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Generatore_interni_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_gen_int___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_gen_int___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_gen_int___024root___eval_debug_assertions(Vtb_gen_int___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_gen_int__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_gen_int___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
