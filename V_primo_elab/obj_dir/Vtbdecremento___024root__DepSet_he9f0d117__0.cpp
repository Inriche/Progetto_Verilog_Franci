// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbdecremento.h for the primary calling header

#include "Vtbdecremento__pch.h"
#include "Vtbdecremento__Syms.h"
#include "Vtbdecremento___024root.h"

VL_INLINE_OPT VlCoroutine Vtbdecremento___024root___eval_initial__TOP__Vtiming__0(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dec.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSelf->tbdecremento__DOT__q1 = 4U;
    vlSelf->tbdecremento__DOT__q2 = 6U;
    vlSelf->tbdecremento__DOT__q3 = 5U;
    vlSelf->tbdecremento__DOT__q4 = 2U;
    vlSelf->tbdecremento__DOT__S = 2U;
    vlSelf->tbdecremento__DOT__s_int = 0U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "decremento_prod_scelto_tb.v", 
                                       32);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tbdecremento__DOT__S = 2U;
    vlSelf->tbdecremento__DOT__s_int = 1U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "decremento_prod_scelto_tb.v", 
                                       37);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tbdecremento__DOT__S = 1U;
    vlSelf->tbdecremento__DOT__s_int = 0U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "decremento_prod_scelto_tb.v", 
                                       42);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tbdecremento__DOT__S = 1U;
    vlSelf->tbdecremento__DOT__s_int = 1U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "decremento_prod_scelto_tb.v", 
                                       47);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("decremento_prod_scelto_tb.v", 49, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbdecremento___024root___dump_triggers__act(Vtbdecremento___024root* vlSelf);
#endif  // VL_DEBUG

void Vtbdecremento___024root___eval_triggers__act(Vtbdecremento___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbdecremento__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbdecremento___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((((IData)(vlSelf->tbdecremento__DOT__S) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__tbdecremento__DOT__S__0)) 
                                       | ((IData)(vlSelf->tbdecremento__DOT__q2) 
                                          != (IData)(vlSelf->__Vtrigprevexpr___TOP__tbdecremento__DOT__q2__0))) 
                                      | ((IData)(vlSelf->tbdecremento__DOT__q3) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__tbdecremento__DOT__q3__0))) 
                                     | ((IData)(vlSelf->tbdecremento__DOT__q4) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__tbdecremento__DOT__q4__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tbdecremento__DOT__S__0 
        = vlSelf->tbdecremento__DOT__S;
    vlSelf->__Vtrigprevexpr___TOP__tbdecremento__DOT__q2__0 
        = vlSelf->tbdecremento__DOT__q2;
    vlSelf->__Vtrigprevexpr___TOP__tbdecremento__DOT__q3__0 
        = vlSelf->tbdecremento__DOT__q3;
    vlSelf->__Vtrigprevexpr___TOP__tbdecremento__DOT__q4__0 
        = vlSelf->tbdecremento__DOT__q4;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtbdecremento___024root___dump_triggers__act(vlSelf);
    }
#endif
}
