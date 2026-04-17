// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbmuxreg.h for the primary calling header

#include "Vtbmuxreg__pch.h"
#include "Vtbmuxreg__Syms.h"
#include "Vtbmuxreg___024root.h"

VL_INLINE_OPT VlCoroutine Vtbmuxreg___024root___eval_initial__TOP__Vtiming__0(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x78726567U;
    __Vtemp_1[2U] = 0x6d5f6d75U;
    __Vtemp_1[3U] = 0x7369U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->tbmuxreg__DOT__ing3 = 1U;
    vlSelf->tbmuxreg__DOT__ing2 = 3U;
    vlSelf->tbmuxreg__DOT__ing1 = 7U;
    vlSelf->tbmuxreg__DOT__ctrl = 1U;
    vlSelf->tbmuxreg__DOT__C = 0U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "mux3ingregtb.v", 
                                       35);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tbmuxreg__DOT__ctrl = 1U;
    vlSelf->tbmuxreg__DOT__C = 1U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "mux3ingregtb.v", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tbmuxreg__DOT__ctrl = 2U;
    vlSelf->tbmuxreg__DOT__C = 0U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "mux3ingregtb.v", 
                                       47);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tbmuxreg__DOT__ctrl = 2U;
    vlSelf->tbmuxreg__DOT__C = 1U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "mux3ingregtb.v", 
                                       53);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tbmuxreg__DOT__ctrl = 3U;
    vlSelf->tbmuxreg__DOT__C = 0U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "mux3ingregtb.v", 
                                       59);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tbmuxreg__DOT__ctrl = 3U;
    vlSelf->tbmuxreg__DOT__C = 1U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "mux3ingregtb.v", 
                                       65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("mux3ingregtb.v", 68, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbmuxreg___024root___dump_triggers__act(Vtbmuxreg___024root* vlSelf);
#endif  // VL_DEBUG

void Vtbmuxreg___024root___eval_triggers__act(Vtbmuxreg___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtbmuxreg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbmuxreg___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tbmuxreg__DOT__C) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tbmuxreg__DOT__C__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tbmuxreg__DOT__C__0 
        = vlSelf->tbmuxreg__DOT__C;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtbmuxreg___024root___dump_triggers__act(vlSelf);
    }
#endif
}
