// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontatore_tb.h for the primary calling header

#include "Vcontatore_tb__pch.h"
#include "Vcontatore_tb__Syms.h"
#include "Vcontatore_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontatore_tb___024root___dump_triggers__stl(Vcontatore_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcontatore_tb___024root___eval_triggers__stl(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcontatore_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vcontatore_tb___024root___stl_sequent__TOP__0(Vcontatore_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcontatore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontatore_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->contatore_tb__DOT__count__DOT__w = (0xfU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->contatore_tb__DOT__count__DOT__parall__DOT__dato)));
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF_NX("time=%0t  CLK=%b  O=%b\n",0,64,
                     VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->contatore_tb__DOT__Clock),
                     4,vlSelf->contatore_tb__DOT__out);
    }
}
