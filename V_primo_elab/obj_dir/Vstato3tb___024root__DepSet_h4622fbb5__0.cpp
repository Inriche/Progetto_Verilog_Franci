// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstato3tb.h for the primary calling header

#include "Vstato3tb__pch.h"
#include "Vstato3tb___024root.h"

VlCoroutine Vstato3tb___024root___eval_initial__TOP__Vtiming__0(Vstato3tb___024root* vlSelf);

void Vstato3tb___024root___eval_initial(Vstato3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato3tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vstato3tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__stato3tb__DOT__PRICE_P2__0 
        = vlSelf->stato3tb__DOT__PRICE_P2;
    vlSelf->__Vtrigprevexpr___TOP__stato3tb__DOT__PRICE_P3__0 
        = vlSelf->stato3tb__DOT__PRICE_P3;
    vlSelf->__Vtrigprevexpr___TOP__stato3tb__DOT__PRICE_P4__0 
        = vlSelf->stato3tb__DOT__PRICE_P4;
    vlSelf->__Vtrigprevexpr___TOP__stato3tb__DOT__Sel__0 
        = vlSelf->stato3tb__DOT__Sel;
}

void Vstato3tb___024root___act_sequent__TOP__0(Vstato3tb___024root* vlSelf);

void Vstato3tb___024root___eval_act(Vstato3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato3tb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vstato3tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vstato3tb___024root___act_sequent__TOP__0(Vstato3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato3tb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N2__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A2__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A2__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N3__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N3__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A3__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A3__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A4__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A4__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A5__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A5__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A6__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A6__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp5__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp5__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp3__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp3__DOT____Vlvbound_h6fef23cb__0 = 0;
    // Body
    if (vlSelf->stato3tb__DOT__INTERNO) {
        if (vlSelf->stato3tb__DOT__INTERNO) {
            vlSelf->stato3tb__DOT__dut__DOT__dd1 = 0U;
            vlSelf->stato3tb__DOT__dut__DOT__dd2 = vlSelf->stato3tb__DOT__CREDITO;
        }
    } else {
        vlSelf->stato3tb__DOT__dut__DOT__dd1 = vlSelf->stato3tb__DOT__CREDITO;
        vlSelf->stato3tb__DOT__dut__DOT__dd2 = 0U;
    }
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N1__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ ((IData)(vlSelf->stato3tb__DOT__dut__DOT__dd2) 
                    >> 2U)));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn1 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N2__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ ((IData)(vlSelf->stato3tb__DOT__dut__DOT__dd2) 
                    >> 1U)));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn2 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N3__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (IData)(vlSelf->stato3tb__DOT__dut__DOT__dd2)));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn3 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N3__DOT____Vlvbound_h6fef23cb__0;
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__xx1 
        = (1U & (~ (((IData)(vlSelf->stato3tb__DOT__dut__DOT__dd2) 
                     ^ (IData)(vlSelf->stato3tb__DOT__dut__DOT__mm1)) 
                    >> 2U)));
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A1__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn1) 
           & ((IData)(vlSelf->stato3tb__DOT__dut__DOT__mm1) 
              >> 2U));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa1 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A2__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn2) 
           & ((IData)(vlSelf->stato3tb__DOT__dut__DOT__mm1) 
              >> 1U));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa2 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A2__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A3__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn3) 
           & (IData)(vlSelf->stato3tb__DOT__dut__DOT__mm1));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa3 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A3__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A5__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__xx1) 
           & (~ (((IData)(vlSelf->stato3tb__DOT__dut__DOT__dd2) 
                  ^ (IData)(vlSelf->stato3tb__DOT__dut__DOT__mm1)) 
                 >> 1U)));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa5 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A5__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A4__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__xx1) 
           & (IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa2));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa4 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A4__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A6__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa5) 
           & (IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa3));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa6 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A6__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp5__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (((IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa1) 
                     | (IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa4)) 
                    | (IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa6))));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__cc2 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp5__DOT____Vlvbound_h6fef23cb__0;
    if (vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__cc2) {
        if (vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__cc2) {
            vlSelf->stato3tb__DOT__dut__DOT__Maggiore 
                = vlSelf->stato3tb__DOT__dut__DOT__dd2;
        }
    } else {
        vlSelf->stato3tb__DOT__dut__DOT__Maggiore = vlSelf->stato3tb__DOT__dut__DOT__mm1;
    }
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp3__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__cc2)));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__cc3 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp3__DOT____Vlvbound_h6fef23cb__0;
    if (vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__cc3) {
        if (vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__cc3) {
            vlSelf->stato3tb__DOT__dut__DOT__Minore 
                = vlSelf->stato3tb__DOT__dut__DOT__dd2;
        }
    } else {
        vlSelf->stato3tb__DOT__dut__DOT__Minore = vlSelf->stato3tb__DOT__dut__DOT__mm1;
    }
    if (vlSelf->stato3tb__DOT__INTERNO) {
        if (vlSelf->stato3tb__DOT__INTERNO) {
            vlSelf->stato3tb__DOT__Resto = (7U & ((IData)(1U) 
                                                  + 
                                                  ((~ (IData)(vlSelf->stato3tb__DOT__dut__DOT__Maggiore)) 
                                                   + (IData)(vlSelf->stato3tb__DOT__dut__DOT__Minore))));
        }
    } else {
        vlSelf->stato3tb__DOT__Resto = vlSelf->stato3tb__DOT__dut__DOT__dd1;
    }
}

void Vstato3tb___024root___nba_sequent__TOP__0(Vstato3tb___024root* vlSelf);
void Vstato3tb___024root___nba_sequent__TOP__1(Vstato3tb___024root* vlSelf);
void Vstato3tb___024root___nba_comb__TOP__0(Vstato3tb___024root* vlSelf);

void Vstato3tb___024root___eval_nba(Vstato3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato3tb___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstato3tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstato3tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstato3tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

VL_INLINE_OPT void Vstato3tb___024root___nba_sequent__TOP__0(Vstato3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato3tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N2__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N3__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N3__DOT____Vlvbound_h6fef23cb__0 = 0;
    // Body
    if (vlSelf->stato3tb__DOT__INTERNO) {
        if (vlSelf->stato3tb__DOT__INTERNO) {
            vlSelf->stato3tb__DOT__dut__DOT__dd1 = 0U;
            vlSelf->stato3tb__DOT__dut__DOT__dd2 = vlSelf->stato3tb__DOT__CREDITO;
        }
    } else {
        vlSelf->stato3tb__DOT__dut__DOT__dd1 = vlSelf->stato3tb__DOT__CREDITO;
        vlSelf->stato3tb__DOT__dut__DOT__dd2 = 0U;
    }
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N1__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ ((IData)(vlSelf->stato3tb__DOT__dut__DOT__dd2) 
                    >> 2U)));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn1 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N2__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ ((IData)(vlSelf->stato3tb__DOT__dut__DOT__dd2) 
                    >> 1U)));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn2 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N3__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (IData)(vlSelf->stato3tb__DOT__dut__DOT__dd2)));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn3 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__N3__DOT____Vlvbound_h6fef23cb__0;
}

VL_INLINE_OPT void Vstato3tb___024root___nba_sequent__TOP__1(Vstato3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato3tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->stato3tb__DOT__dut__DOT__mm1 = ((2U & (IData)(vlSelf->stato3tb__DOT__Sel))
                                             ? ((1U 
                                                 & (IData)(vlSelf->stato3tb__DOT__Sel))
                                                 ? (IData)(vlSelf->stato3tb__DOT__PRICE_P4)
                                                 : (IData)(vlSelf->stato3tb__DOT__PRICE_P3))
                                             : ((1U 
                                                 & (IData)(vlSelf->stato3tb__DOT__Sel))
                                                 ? (IData)(vlSelf->stato3tb__DOT__PRICE_P2)
                                                 : (IData)(vlSelf->stato3tb__DOT__PRICE_P1)));
}

VL_INLINE_OPT void Vstato3tb___024root___nba_comb__TOP__0(Vstato3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato3tb___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A2__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A2__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A3__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A3__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A4__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A4__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A5__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A5__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A6__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A6__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp5__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp5__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato3tb__DOT__dut__DOT__Mm1__DOT__Comp3__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp3__DOT____Vlvbound_h6fef23cb__0 = 0;
    // Body
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__xx1 
        = (1U & (~ (((IData)(vlSelf->stato3tb__DOT__dut__DOT__dd2) 
                     ^ (IData)(vlSelf->stato3tb__DOT__dut__DOT__mm1)) 
                    >> 2U)));
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A1__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn1) 
           & ((IData)(vlSelf->stato3tb__DOT__dut__DOT__mm1) 
              >> 2U));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa1 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A2__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn2) 
           & ((IData)(vlSelf->stato3tb__DOT__dut__DOT__mm1) 
              >> 1U));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa2 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A2__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A3__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__nn3) 
           & (IData)(vlSelf->stato3tb__DOT__dut__DOT__mm1));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa3 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A3__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A5__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__xx1) 
           & (~ (((IData)(vlSelf->stato3tb__DOT__dut__DOT__dd2) 
                  ^ (IData)(vlSelf->stato3tb__DOT__dut__DOT__mm1)) 
                 >> 1U)));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa5 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A5__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A4__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__xx1) 
           & (IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa2));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa4 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A4__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A6__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa5) 
           & (IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa3));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa6 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__A6__DOT____Vlvbound_h6fef23cb__0;
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp5__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (((IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa1) 
                     | (IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa4)) 
                    | (IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__Comp1__DOT__aa6))));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__cc2 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp5__DOT____Vlvbound_h6fef23cb__0;
    if (vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__cc2) {
        if (vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__cc2) {
            vlSelf->stato3tb__DOT__dut__DOT__Maggiore 
                = vlSelf->stato3tb__DOT__dut__DOT__dd2;
        }
    } else {
        vlSelf->stato3tb__DOT__dut__DOT__Maggiore = vlSelf->stato3tb__DOT__dut__DOT__mm1;
    }
    stato3tb__DOT__dut__DOT__Mm1__DOT__Comp3__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (IData)(vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__cc2)));
    vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__cc3 
        = stato3tb__DOT__dut__DOT__Mm1__DOT__Comp3__DOT____Vlvbound_h6fef23cb__0;
    if (vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__cc3) {
        if (vlSelf->stato3tb__DOT__dut__DOT__Mm1__DOT__cc3) {
            vlSelf->stato3tb__DOT__dut__DOT__Minore 
                = vlSelf->stato3tb__DOT__dut__DOT__dd2;
        }
    } else {
        vlSelf->stato3tb__DOT__dut__DOT__Minore = vlSelf->stato3tb__DOT__dut__DOT__mm1;
    }
    if (vlSelf->stato3tb__DOT__INTERNO) {
        if (vlSelf->stato3tb__DOT__INTERNO) {
            vlSelf->stato3tb__DOT__Resto = (7U & ((IData)(1U) 
                                                  + 
                                                  ((~ (IData)(vlSelf->stato3tb__DOT__dut__DOT__Maggiore)) 
                                                   + (IData)(vlSelf->stato3tb__DOT__dut__DOT__Minore))));
        }
    } else {
        vlSelf->stato3tb__DOT__Resto = vlSelf->stato3tb__DOT__dut__DOT__dd1;
    }
}

void Vstato3tb___024root___timing_resume(Vstato3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato3tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vstato3tb___024root___eval_triggers__act(Vstato3tb___024root* vlSelf);

bool Vstato3tb___024root___eval_phase__act(Vstato3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato3tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vstato3tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vstato3tb___024root___timing_resume(vlSelf);
        Vstato3tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vstato3tb___024root___eval_phase__nba(Vstato3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato3tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vstato3tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato3tb___024root___dump_triggers__nba(Vstato3tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato3tb___024root___dump_triggers__act(Vstato3tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vstato3tb___024root___eval(Vstato3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato3tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vstato3tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("S3_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vstato3tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("S3_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vstato3tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vstato3tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vstato3tb___024root___eval_debug_assertions(Vstato3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato3tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
