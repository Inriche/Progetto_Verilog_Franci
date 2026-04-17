// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestcomplemento.h for the primary calling header

#include "Vtestcomplemento__pch.h"
#include "Vtestcomplemento__Syms.h"
#include "Vtestcomplemento___024root.h"

VL_INLINE_OPT VlCoroutine Vtestcomplemento___024root___eval_initial__TOP__Vtiming__0(Vtestcomplemento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestcomplemento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcomplemento___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"a2.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelf->testcomplemento__DOT__Y = 1U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "complementoa2_tb.v", 
                                       23);
    vlSelf->testcomplemento__DOT__Y = 5U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "complementoa2_tb.v", 
                                       27);
    vlSelf->testcomplemento__DOT__Y = 0xfU;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "complementoa2_tb.v", 
                                       31);
    VL_FINISH_MT("complementoa2_tb.v", 33, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestcomplemento___024root___dump_triggers__act(Vtestcomplemento___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestcomplemento___024root___eval_triggers__act(Vtestcomplemento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtestcomplemento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestcomplemento___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestcomplemento___024root___dump_triggers__act(vlSelf);
    }
#endif
}
