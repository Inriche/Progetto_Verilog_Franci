// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstato2tb.h for the primary calling header

#include "Vstato2tb__pch.h"
#include "Vstato2tb__Syms.h"
#include "Vstato2tb___024root.h"

VL_INLINE_OPT VlCoroutine Vstato2tb___024root___eval_initial__TOP__Vtiming__0(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x61746f33U;
    __Vtemp_1[2U] = 0x5374U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->stato2tb__DOT__qty_p1 = 2U;
    vlSelf->stato2tb__DOT__qty_p2 = 3U;
    vlSelf->stato2tb__DOT__qty_p3 = 4U;
    vlSelf->stato2tb__DOT__qty_p4 = 6U;
    vlSelf->stato2tb__DOT__credito = 7U;
    vlSelf->stato2tb__DOT__price_p1 = 4U;
    vlSelf->stato2tb__DOT__price_p2 = 5U;
    vlSelf->stato2tb__DOT__price_p3 = 6U;
    vlSelf->stato2tb__DOT__price_p4 = 7U;
    vlSelf->stato2tb__DOT__selezione = 4U;
    vlSelf->stato2tb__DOT__conferma = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "S2_tb.v", 49);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->stato2tb__DOT__selezione = 4U;
    vlSelf->stato2tb__DOT__conferma = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "S2_tb.v", 54);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->stato2tb__DOT__selezione = 6U;
    vlSelf->stato2tb__DOT__conferma = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "S2_tb.v", 59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->stato2tb__DOT__selezione = 6U;
    vlSelf->stato2tb__DOT__conferma = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "S2_tb.v", 64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("S2_tb.v", 67, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstato2tb___024root___dump_triggers__act(Vstato2tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vstato2tb___024root___eval_triggers__act(Vstato2tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstato2tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((((IData)(vlSelf->stato2tb__DOT__dut__DOT__new_sel) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__dut__DOT__new_sel__0)) 
                                       | ((IData)(vlSelf->stato2tb__DOT__price_p2) 
                                          != (IData)(vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__price_p2__0))) 
                                      | ((IData)(vlSelf->stato2tb__DOT__price_p3) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__price_p3__0))) 
                                     | ((IData)(vlSelf->stato2tb__DOT__price_p4) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__price_p4__0))));
    vlSelf->__VactTriggered.set(1U, (((((IData)(vlSelf->stato2tb__DOT__dut__DOT__new_sel) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__dut__DOT__new_sel__0)) 
                                       | ((IData)(vlSelf->stato2tb__DOT__qty_p2) 
                                          != (IData)(vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__qty_p2__0))) 
                                      | ((IData)(vlSelf->stato2tb__DOT__qty_p3) 
                                         != (IData)(vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__qty_p3__0))) 
                                     | ((IData)(vlSelf->stato2tb__DOT__qty_p4) 
                                        != (IData)(vlSelf->__Vtrigprevexpr___TOP__stato2tb__DOT__qty_p4__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
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
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vstato2tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
