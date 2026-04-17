// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstato2tb.h for the primary calling header

#include "Vstato2tb__pch.h"
#include "Vstato2tb___024root.h"

VlCoroutine Vstato2tb___024root___eval_initial__TOP__Vtiming__0(Vstato2tb___024root* vlSelf);

void Vstato2tb___024root___eval_initial(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vstato2tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__dut__DOT__new_sel__0 
        = vlSelf->stato2tb__DOT__dut__DOT__new_sel;
    vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__price_p2__0 
        = vlSelf->stato2tb__DOT__price_p2;
    vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__price_p3__0 
        = vlSelf->stato2tb__DOT__price_p3;
    vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__price_p4__0 
        = vlSelf->stato2tb__DOT__price_p4;
    vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__qty_p2__0 
        = vlSelf->stato2tb__DOT__qty_p2;
    vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__qty_p3__0 
        = vlSelf->stato2tb__DOT__qty_p3;
    vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__qty_p4__0 
        = vlSelf->stato2tb__DOT__qty_p4;
}

void Vstato2tb___024root___act_sequent__TOP__0(Vstato2tb___024root* vlSelf);

void Vstato2tb___024root___eval_act(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___eval_act\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        Vstato2tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 32> Vstato2tb__ConstPool__TABLE_h6eaa519a_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vstato2tb__ConstPool__TABLE_h9e739a06_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vstato2tb__ConstPool__TABLE_he83defd8_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vstato2tb__ConstPool__TABLE_h26225a24_0;

VL_INLINE_OPT void Vstato2tb___024root___act_sequent__TOP__0(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp1__DOT__a1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp1__DOT__a1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__a1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__a1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__a0__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__a0__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp1__DOT__n1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp1__DOT__n1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp1__DOT__a2__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp1__DOT__a2__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N2__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A2__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A2__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N3__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N3__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A3__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A3__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A4__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A4__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A5__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A5__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A6__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A6__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__N2__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__A1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp3__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp3__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N1__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ ((IData)(vlSelf->stato2tb__DOT__credito) 
                    >> 2U)));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn1 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N2__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ ((IData)(vlSelf->stato2tb__DOT__credito) 
                    >> 1U)));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn2 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N3__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (IData)(vlSelf->stato2tb__DOT__credito)));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn3 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N3__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp1__DOT__a1__DOT____Vlvbound_h6fef23cb__0 
        = (((IData)(vlSelf->stato2tb__DOT__selezione) 
            >> 2U) & (IData)(vlSelf->stato2tb__DOT__conferma));
    vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__aa0 
        = stato2tb__DOT__dut__DOT__Comp1__DOT__a1__DOT____Vlvbound_h6fef23cb__0;
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__xx1 
        = (1U & (~ (((IData)(vlSelf->stato2tb__DOT__credito) 
                     ^ (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm1)) 
                    >> 2U)));
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A1__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn1) 
           & ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm1) 
              >> 2U));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa1 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A2__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn2) 
           & ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm1) 
              >> 1U));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa2 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A2__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A3__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn3) 
           & (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm1));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa3 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A3__DOT____Vlvbound_h6fef23cb__0;
    if (vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__aa0) {
        if (vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__aa0) {
            vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd1 
                = vlSelf->stato2tb__DOT__selezione;
            vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd0 = 0U;
        }
    } else {
        vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd1 = 0U;
        vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd0 
            = vlSelf->stato2tb__DOT__selezione;
    }
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A5__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__xx1) 
           & (~ (((IData)(vlSelf->stato2tb__DOT__credito) 
                  ^ (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm1)) 
                 >> 1U)));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa5 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A5__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A4__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__xx1) 
           & (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa2));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa4 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A4__DOT____Vlvbound_h6fef23cb__0;
    vlSelf->stato2tb__DOT__dut__DOT__new_sel = (3U 
                                                & (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd1));
    stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__a1__DOT____Vlvbound_h6fef23cb__0 
        = (IData)((0U == (6U & (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd0))));
    vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__aa1 
        = stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__a1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A6__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa5) 
           & (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa3));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa6 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A6__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__a0__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__aa1) 
           & (~ (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd0)));
    vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__uu0 
        = stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__a0__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__N2__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa1) 
                     | (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa4)) 
                    | (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa6))));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__nn2 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp1__DOT__n1__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__uu0)));
    vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__nn0 
        = stato2tb__DOT__dut__DOT__Comp1__DOT__n1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__A1__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__nn1) 
           & (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__nn2));
    vlSelf->stato2tb__DOT__dut__DOT__interno = stato2tb__DOT__dut__DOT__Comp2__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp1__DOT__a2__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__nn0) 
           & (IData)(vlSelf->stato2tb__DOT__conferma));
    vlSelf->stato2tb__DOT__pnonvalid = stato2tb__DOT__dut__DOT__Comp1__DOT__a2__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp3__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__interno) 
           & (IData)(vlSelf->stato2tb__DOT__conferma));
    vlSelf->stato2tb__DOT__dut__DOT__aa1 = stato2tb__DOT__dut__DOT__Comp3__DOT____Vlvbound_h6fef23cb__0;
    if (vlSelf->stato2tb__DOT__dut__DOT__aa1) {
        if (vlSelf->stato2tb__DOT__dut__DOT__aa1) {
            vlSelf->stato2tb__DOT__dut__DOT__c41 = 
                (7U & ((IData)(1U) + (~ ((IData)(2U) 
                                         + (~ (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp4__DOT__mm1))))));
        }
    } else {
        vlSelf->stato2tb__DOT__dut__DOT__c41 = 0U;
    }
    __Vtableidx1 = (((IData)(vlSelf->stato2tb__DOT__dut__DOT__c41) 
                     << 2U) | (IData)(vlSelf->stato2tb__DOT__dut__DOT__new_sel));
    vlSelf->stato2tb__DOT__nuovo_qtyp4 = Vstato2tb__ConstPool__TABLE_h6eaa519a_0
        [__Vtableidx1];
    vlSelf->stato2tb__DOT__nuovo_qtyp3 = Vstato2tb__ConstPool__TABLE_h9e739a06_0
        [__Vtableidx1];
    vlSelf->stato2tb__DOT__nuovo_qtyp2 = Vstato2tb__ConstPool__TABLE_he83defd8_0
        [__Vtableidx1];
    vlSelf->stato2tb__DOT__nuovo_qtyp1 = Vstato2tb__ConstPool__TABLE_h26225a24_0
        [__Vtableidx1];
}

void Vstato2tb___024root___nba_sequent__TOP__0(Vstato2tb___024root* vlSelf);
void Vstato2tb___024root___nba_sequent__TOP__1(Vstato2tb___024root* vlSelf);
void Vstato2tb___024root___nba_sequent__TOP__2(Vstato2tb___024root* vlSelf);
void Vstato2tb___024root___nba_comb__TOP__0(Vstato2tb___024root* vlSelf);
void Vstato2tb___024root___nba_comb__TOP__1(Vstato2tb___024root* vlSelf);

void Vstato2tb___024root___eval_nba(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstato2tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstato2tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstato2tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstato2tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vstato2tb___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
}

VL_INLINE_OPT void Vstato2tb___024root___nba_sequent__TOP__0(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__a1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__a1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__a0__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__a0__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp1__DOT__n1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp1__DOT__n1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp1__DOT__a2__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp1__DOT__a2__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N2__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N3__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N3__DOT____Vlvbound_h6fef23cb__0 = 0;
    // Body
    if (vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__aa0) {
        if (vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__aa0) {
            vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd0 = 0U;
        }
    } else {
        vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd0 
            = vlSelf->stato2tb__DOT__selezione;
    }
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N1__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ ((IData)(vlSelf->stato2tb__DOT__credito) 
                    >> 2U)));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn1 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N2__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ ((IData)(vlSelf->stato2tb__DOT__credito) 
                    >> 1U)));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn2 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N3__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (IData)(vlSelf->stato2tb__DOT__credito)));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn3 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__N3__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__a1__DOT____Vlvbound_h6fef23cb__0 
        = (IData)((0U == (6U & (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd0))));
    vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__aa1 
        = stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__a1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__a0__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__aa1) 
           & (~ (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd0)));
    vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__uu0 
        = stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__a0__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp1__DOT__n1__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__uu0)));
    vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__nn0 
        = stato2tb__DOT__dut__DOT__Comp1__DOT__n1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp1__DOT__a2__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__nn0) 
           & (IData)(vlSelf->stato2tb__DOT__conferma));
    vlSelf->stato2tb__DOT__pnonvalid = stato2tb__DOT__dut__DOT__Comp1__DOT__a2__DOT____Vlvbound_h6fef23cb__0;
}

VL_INLINE_OPT void Vstato2tb___024root___nba_sequent__TOP__1(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__a1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__a1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__a0__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__a0__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__N1__DOT____Vlvbound_h6fef23cb__0 = 0;
    // Body
    if ((2U & (IData)(vlSelf->stato2tb__DOT__dut__DOT__new_sel))) {
        if ((1U & (IData)(vlSelf->stato2tb__DOT__dut__DOT__new_sel))) {
            vlSelf->stato2tb__DOT__dut__DOT__Comp4__DOT__mm1 
                = vlSelf->stato2tb__DOT__qty_p4;
            vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm2 
                = vlSelf->stato2tb__DOT__qty_p4;
        } else {
            vlSelf->stato2tb__DOT__dut__DOT__Comp4__DOT__mm1 
                = vlSelf->stato2tb__DOT__qty_p3;
            vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm2 
                = vlSelf->stato2tb__DOT__qty_p3;
        }
    } else if ((1U & (IData)(vlSelf->stato2tb__DOT__dut__DOT__new_sel))) {
        vlSelf->stato2tb__DOT__dut__DOT__Comp4__DOT__mm1 
            = vlSelf->stato2tb__DOT__qty_p2;
        vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm2 
            = vlSelf->stato2tb__DOT__qty_p2;
    } else {
        vlSelf->stato2tb__DOT__dut__DOT__Comp4__DOT__mm1 
            = vlSelf->stato2tb__DOT__qty_p1;
        vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm2 
            = vlSelf->stato2tb__DOT__qty_p1;
    }
    stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__a1__DOT____Vlvbound_h6fef23cb__0 
        = (IData)((0U == (6U & (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm2))));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__aa1 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__a1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__a0__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__aa1) 
           & (~ (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm2)));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__uu1 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__a0__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__N1__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__uu1)));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__nn1 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
}

VL_INLINE_OPT void Vstato2tb___024root___nba_sequent__TOP__2(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm1 
        = ((2U & (IData)(vlSelf->stato2tb__DOT__dut__DOT__new_sel))
            ? ((1U & (IData)(vlSelf->stato2tb__DOT__dut__DOT__new_sel))
                ? (IData)(vlSelf->stato2tb__DOT__price_p4)
                : (IData)(vlSelf->stato2tb__DOT__price_p3))
            : ((1U & (IData)(vlSelf->stato2tb__DOT__dut__DOT__new_sel))
                ? (IData)(vlSelf->stato2tb__DOT__price_p2)
                : (IData)(vlSelf->stato2tb__DOT__price_p1)));
}

VL_INLINE_OPT void Vstato2tb___024root___nba_comb__TOP__0(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A2__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A2__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A3__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A3__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A4__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A4__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A5__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A5__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A6__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A6__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__N2__DOT____Vlvbound_h6fef23cb__0 = 0;
    // Body
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A1__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn1) 
           & ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm1) 
              >> 2U));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa1 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A2__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn2) 
           & ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm1) 
              >> 1U));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa2 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A2__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A3__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn3) 
           & (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm1));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa3 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A3__DOT____Vlvbound_h6fef23cb__0;
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__xx1 
        = (1U & (~ (((IData)(vlSelf->stato2tb__DOT__credito) 
                     ^ (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm1)) 
                    >> 2U)));
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A4__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__xx1) 
           & (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa2));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa4 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A4__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A5__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__xx1) 
           & (~ (((IData)(vlSelf->stato2tb__DOT__credito) 
                  ^ (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm1)) 
                 >> 1U)));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa5 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A5__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A6__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa5) 
           & (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa3));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa6 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__A6__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__N2__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa1) 
                     | (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa4)) 
                    | (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa6))));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__nn2 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__N2__DOT____Vlvbound_h6fef23cb__0;
}

VL_INLINE_OPT void Vstato2tb___024root___nba_comb__TOP__1(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___nba_comb__TOP__1\n"); );
    // Init
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__A1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp3__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp3__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    stato2tb__DOT__dut__DOT__Comp2__DOT__A1__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__nn1) 
           & (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__nn2));
    vlSelf->stato2tb__DOT__dut__DOT__interno = stato2tb__DOT__dut__DOT__Comp2__DOT__A1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp3__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__interno) 
           & (IData)(vlSelf->stato2tb__DOT__conferma));
    vlSelf->stato2tb__DOT__dut__DOT__aa1 = stato2tb__DOT__dut__DOT__Comp3__DOT____Vlvbound_h6fef23cb__0;
    if (vlSelf->stato2tb__DOT__dut__DOT__aa1) {
        if (vlSelf->stato2tb__DOT__dut__DOT__aa1) {
            vlSelf->stato2tb__DOT__dut__DOT__c41 = 
                (7U & ((IData)(1U) + (~ ((IData)(2U) 
                                         + (~ (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp4__DOT__mm1))))));
        }
    } else {
        vlSelf->stato2tb__DOT__dut__DOT__c41 = 0U;
    }
    __Vtableidx1 = (((IData)(vlSelf->stato2tb__DOT__dut__DOT__c41) 
                     << 2U) | (IData)(vlSelf->stato2tb__DOT__dut__DOT__new_sel));
    vlSelf->stato2tb__DOT__nuovo_qtyp4 = Vstato2tb__ConstPool__TABLE_h6eaa519a_0
        [__Vtableidx1];
    vlSelf->stato2tb__DOT__nuovo_qtyp3 = Vstato2tb__ConstPool__TABLE_h9e739a06_0
        [__Vtableidx1];
    vlSelf->stato2tb__DOT__nuovo_qtyp2 = Vstato2tb__ConstPool__TABLE_he83defd8_0
        [__Vtableidx1];
    vlSelf->stato2tb__DOT__nuovo_qtyp1 = Vstato2tb__ConstPool__TABLE_h26225a24_0
        [__Vtableidx1];
}

void Vstato2tb___024root___timing_resume(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vstato2tb___024root___eval_triggers__act(Vstato2tb___024root* vlSelf);

bool Vstato2tb___024root___eval_phase__act(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vstato2tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vstato2tb___024root___timing_resume(vlSelf);
        Vstato2tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vstato2tb___024root___eval_phase__nba(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vstato2tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato2tb___024root___dump_triggers__nba(Vstato2tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato2tb___024root___dump_triggers__act(Vstato2tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vstato2tb___024root___eval(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vstato2tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("S2_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vstato2tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("S2_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vstato2tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vstato2tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vstato2tb___024root___eval_debug_assertions(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
