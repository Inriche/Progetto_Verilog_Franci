// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstato4tb.h for the primary calling header

#include "Vstato4tb__pch.h"
#include "Vstato4tb__Syms.h"
#include "Vstato4tb___024root.h"

VL_INLINE_OPT VlCoroutine Vstato4tb___024root___eval_initial__TOP__Vtiming__0(Vstato4tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato4tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato4tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"S4.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelf->stato4tb__DOT__PRICE_P1 = 1U;
    vlSelf->stato4tb__DOT__PRICE_P2 = 3U;
    vlSelf->stato4tb__DOT__PRICE_P3 = 4U;
    vlSelf->stato4tb__DOT__PRICE_P4 = 5U;
    vlSelf->stato4tb__DOT__CREDITO = 3U;
    vlSelf->stato4tb__DOT__Sel = 1U;
    vlSelf->stato4tb__DOT__INTERNO = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "S4_tb.v", 36);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->stato4tb__DOT__Sel = 1U;
    vlSelf->stato4tb__DOT__INTERNO = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "S4_tb.v", 41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->stato4tb__DOT__Sel = 3U;
    vlSelf->stato4tb__DOT__INTERNO = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "S4_tb.v", 46);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->stato4tb__DOT__Sel = 3U;
    vlSelf->stato4tb__DOT__INTERNO = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "S4_tb.v", 51);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("S4_tb.v", 53, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato4tb___024root___dump_triggers__act(Vstato4tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vstato4tb___024root___eval_triggers__act(Vstato4tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato4tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato4tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((((IData)(vlSelf->stato4tb__DOT__PRICE_P2) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__stato4tb__DOT__PRICE_P2__0)) 
                                       | ((IData)(vlSelf->stato4tb__DOT__PRICE_P3) 
                                          != (IData)(vlSelf->__Vtrigprevexpr___TOP__stato4tb__DOT__PRICE_P3__0))) 
                                      | ((IData)(vlSelf->stato4tb__DOT__PRICE_P4) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__stato4tb__DOT__PRICE_P4__0))) 
                                     | ((IData)(vlSelf->stato4tb__DOT__Sel) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__stato4tb__DOT__Sel__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__stato4tb__DOT__PRICE_P2__0 
        = vlSelf->stato4tb__DOT__PRICE_P2;
    vlSelf->__Vtrigprevexpr___TOP__stato4tb__DOT__PRICE_P3__0 
        = vlSelf->stato4tb__DOT__PRICE_P3;
    vlSelf->__Vtrigprevexpr___TOP__stato4tb__DOT__PRICE_P4__0 
        = vlSelf->stato4tb__DOT__PRICE_P4;
    vlSelf->__Vtrigprevexpr___TOP__stato4tb__DOT__Sel__0 
        = vlSelf->stato4tb__DOT__Sel;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vstato4tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
