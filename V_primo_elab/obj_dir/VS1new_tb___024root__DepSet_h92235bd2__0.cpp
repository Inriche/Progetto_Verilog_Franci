// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VS1new_tb.h for the primary calling header

#include "VS1new_tb__pch.h"
#include "VS1new_tb__Syms.h"
#include "VS1new_tb___024root.h"

VL_INLINE_OPT VlCoroutine VS1new_tb___024root___eval_initial__TOP__Vtiming__0(VS1new_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS1new_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS1new_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x316e6577U;
    __Vtemp_1[2U] = 0x73696d53U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->S1new_tb__DOT__ingresso = 7U;
    vlSelf->S1new_tb__DOT__C = 0U;
    co_await vlSelf->__VdlySched.delay(0xc8ULL, nullptr, 
                                       "tb_S1new.v", 
                                       39);
    VL_FINISH_MT("tb_S1new.v", 42, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VS1new_tb___024root___dump_triggers__act(VS1new_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VS1new_tb___024root___eval_triggers__act(VS1new_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS1new_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS1new_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->S1new_tb__DOT__C) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__S1new_tb__DOT__C__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__S1new_tb__DOT__C__0 
        = vlSelf->S1new_tb__DOT__C;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VS1new_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
