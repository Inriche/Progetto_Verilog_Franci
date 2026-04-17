// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstato2tb.h for the primary calling header

#include "Vstato2tb__pch.h"
#include "Vstato2tb___024root.h"

VL_ATTR_COLD void Vstato2tb___024root___eval_static(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vstato2tb___024root___eval_final(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato2tb___024root___dump_triggers__stl(Vstato2tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vstato2tb___024root___eval_phase__stl(Vstato2tb___024root* vlSelf);

VL_ATTR_COLD void Vstato2tb___024root___eval_settle(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___eval_settle\n"); );
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
            Vstato2tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("S2_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vstato2tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato2tb___024root___dump_triggers__stl(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstato2tb___024root___stl_sequent__TOP__0(Vstato2tb___024root* vlSelf);

VL_ATTR_COLD void Vstato2tb___024root___eval_stl(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vstato2tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 32> Vstato2tb__ConstPool__TABLE_h6eaa519a_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vstato2tb__ConstPool__TABLE_h9e739a06_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vstato2tb__ConstPool__TABLE_he83defd8_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vstato2tb__ConstPool__TABLE_h26225a24_0;

VL_ATTR_COLD void Vstato2tb___024root___stl_sequent__TOP__0(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___stl_sequent__TOP__0\n"); );
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
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__a1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__a1__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__a0__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__a0__DOT____Vlvbound_h6fef23cb__0 = 0;
    CData/*0:0*/ stato2tb__DOT__dut__DOT__Comp2__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
    stato2tb__DOT__dut__DOT__Comp2__DOT__N1__DOT____Vlvbound_h6fef23cb__0 = 0;
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
    stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__a1__DOT____Vlvbound_h6fef23cb__0 
        = (IData)((0U == (6U & (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm2))));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__aa1 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__a1__DOT____Vlvbound_h6fef23cb__0;
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
    stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__a0__DOT____Vlvbound_h6fef23cb__0 
        = ((IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__aa1) 
           & (~ (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm2)));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__uu1 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__a0__DOT____Vlvbound_h6fef23cb__0;
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
    stato2tb__DOT__dut__DOT__Comp2__DOT__N1__DOT____Vlvbound_h6fef23cb__0 
        = (1U & (~ (IData)(vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__uu1)));
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__nn1 
        = stato2tb__DOT__dut__DOT__Comp2__DOT__N1__DOT____Vlvbound_h6fef23cb__0;
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

VL_ATTR_COLD void Vstato2tb___024root___eval_triggers__stl(Vstato2tb___024root* vlSelf);

VL_ATTR_COLD bool Vstato2tb___024root___eval_phase__stl(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vstato2tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vstato2tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato2tb___024root___dump_triggers__act(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] stato2tb.dut.new_sel or [changed] stato2tb.price_p2 or [changed] stato2tb.price_p3 or [changed] stato2tb.price_p4)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] stato2tb.dut.new_sel or [changed] stato2tb.qty_p2 or [changed] stato2tb.qty_p3 or [changed] stato2tb.qty_p4)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato2tb___024root___dump_triggers__nba(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] stato2tb.dut.new_sel or [changed] stato2tb.price_p2 or [changed] stato2tb.price_p3 or [changed] stato2tb.price_p4)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] stato2tb.dut.new_sel or [changed] stato2tb.qty_p2 or [changed] stato2tb.qty_p3 or [changed] stato2tb.qty_p4)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vstato2tb___024root___ctor_var_reset(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->stato2tb__DOT__qty_p1 = VL_RAND_RESET_I(3);
    vlSelf->stato2tb__DOT__qty_p2 = VL_RAND_RESET_I(3);
    vlSelf->stato2tb__DOT__qty_p3 = VL_RAND_RESET_I(3);
    vlSelf->stato2tb__DOT__qty_p4 = VL_RAND_RESET_I(3);
    vlSelf->stato2tb__DOT__credito = VL_RAND_RESET_I(3);
    vlSelf->stato2tb__DOT__price_p1 = VL_RAND_RESET_I(3);
    vlSelf->stato2tb__DOT__price_p2 = VL_RAND_RESET_I(3);
    vlSelf->stato2tb__DOT__price_p3 = VL_RAND_RESET_I(3);
    vlSelf->stato2tb__DOT__price_p4 = VL_RAND_RESET_I(3);
    vlSelf->stato2tb__DOT__selezione = VL_RAND_RESET_I(3);
    vlSelf->stato2tb__DOT__conferma = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__nuovo_qtyp1 = VL_RAND_RESET_I(3);
    vlSelf->stato2tb__DOT__nuovo_qtyp2 = VL_RAND_RESET_I(3);
    vlSelf->stato2tb__DOT__nuovo_qtyp3 = VL_RAND_RESET_I(3);
    vlSelf->stato2tb__DOT__nuovo_qtyp4 = VL_RAND_RESET_I(3);
    vlSelf->stato2tb__DOT__pnonvalid = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__new_sel = VL_RAND_RESET_I(2);
    vlSelf->stato2tb__DOT__dut__DOT__interno = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__aa1 = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__c41 = VL_RAND_RESET_I(3);
    vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__aa0 = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd0 = VL_RAND_RESET_I(3);
    vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__dd1 = VL_RAND_RESET_I(3);
    vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__uu0 = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__nn0 = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__Comp1__DOT__u1__DOT__aa1 = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm1 = VL_RAND_RESET_I(3);
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__mm2 = VL_RAND_RESET_I(3);
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__uu1 = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__nn1 = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__nn2 = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__aa1 = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__U1__DOT__aa1 = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn1 = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__xx1 = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa1 = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn2 = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa2 = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__nn3 = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa3 = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa4 = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa5 = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__Comp2__DOT__minoranza__DOT__aa6 = VL_RAND_RESET_I(1);
    vlSelf->stato2tb__DOT__dut__DOT__Comp4__DOT__mm1 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__dut__DOT__new_sel__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__price_p2__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__price_p3__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__price_p4__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__qty_p2__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__qty_p3__0 = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__qty_p4__0 = VL_RAND_RESET_I(3);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
