// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vregistro.h for the primary calling header

#include "Vregistro__pch.h"
#include "Vregistro__Syms.h"
#include "Vregistro___024root.h"

VL_INLINE_OPT VlCoroutine Vregistro___024root___eval_initial__TOP__Vtiming__0(Vregistro___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelf->registro__DOT__C = 0U;
    vlSelf->registro__DOT__A = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_reg.v", 
                                       24);
    vlSelf->registro__DOT__A = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_reg.v", 
                                       25);
    vlSelf->registro__DOT__C = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_reg.v", 
                                       26);
    vlSelf->registro__DOT__C = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_reg.v", 
                                       28);
    vlSelf->registro__DOT__A = 0xaU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_reg.v", 
                                       29);
    vlSelf->registro__DOT__C = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_reg.v", 
                                       30);
    vlSelf->registro__DOT__C = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_reg.v", 
                                       32);
    vlSelf->registro__DOT__A = 0xfU;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_reg.v", 
                                       33);
    vlSelf->registro__DOT__C = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "tb_reg.v", 
                                       34);
    vlSelf->registro__DOT__C = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "tb_reg.v", 
                                       36);
    VL_FINISH_MT("tb_reg.v", 37, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vregistro___024root___dump_triggers__act(Vregistro___024root* vlSelf);
#endif  // VL_DEBUG

void Vregistro___024root___eval_triggers__act(Vregistro___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->registro__DOT__C) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__registro__DOT__C__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__registro__DOT__C__0 
        = vlSelf->registro__DOT__C;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vregistro___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vregistro___024root___act_sequent__TOP__0(Vregistro___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vregistro__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vregistro___024root___act_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF_NX("time=%0t  A=%b  C=%b  O=%b\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,4,(IData)(vlSelf->registro__DOT__A),
                     1,vlSelf->registro__DOT__C,4,(1U 
                                                   & (IData)(vlSelf->registro__DOT__dut__DOT__dato)));
    }
}
