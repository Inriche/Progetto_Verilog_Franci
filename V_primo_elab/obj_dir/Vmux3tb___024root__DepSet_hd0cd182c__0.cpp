// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux3tb.h for the primary calling header

#include "Vmux3tb__pch.h"
#include "Vmux3tb__Syms.h"
#include "Vmux3tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmux3tb___024root___eval_initial__TOP__Vtiming__0(Vmux3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux3tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x5f6d7578U;
    __Vtemp_1[2U] = 0x73696dU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->mux3tb__DOT__ing3 = 1U;
    vlSelf->mux3tb__DOT__ing2 = 3U;
    vlSelf->mux3tb__DOT__ing1 = 7U;
    vlSelf->mux3tb__DOT__ctrl = 2U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "mux3ingtb.v", 
                                       30);
    vlSelf->mux3tb__DOT__ctrl = 3U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "mux3ingtb.v", 
                                       36);
    vlSelf->mux3tb__DOT__ctrl = 1U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "mux3ingtb.v", 
                                       42);
    VL_FINISH_MT("mux3ingtb.v", 45, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmux3tb___024root___dump_triggers__act(Vmux3tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmux3tb___024root___eval_triggers__act(Vmux3tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmux3tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux3tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmux3tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
