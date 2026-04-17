// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VS3_confermatb.h for the primary calling header

#include "VS3_confermatb__pch.h"
#include "VS3_confermatb__Syms.h"
#include "VS3_confermatb___024root.h"

VL_INLINE_OPT VlCoroutine VS3_confermatb___024root___eval_initial__TOP__Vtiming__0(VS3_confermatb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS3_confermatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS3_confermatb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x65726d61U;
    __Vtemp_1[2U] = 0x636f6e66U;
    __Vtemp_1[3U] = 0x6d5f5333U;
    __Vtemp_1[4U] = 0x7369U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->S3_confermatb__DOT__selez = 1U;
    vlSelf->S3_confermatb__DOT__conf = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "S3_conferma_sel_tb.v", 
                                       25);
    vlSelf->S3_confermatb__DOT__conf = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "S3_conferma_sel_tb.v", 
                                       29);
    vlSelf->S3_confermatb__DOT__selez = 7U;
    vlSelf->S3_confermatb__DOT__conf = 0U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "S3_conferma_sel_tb.v", 
                                       35);
    vlSelf->S3_confermatb__DOT__conf = 1U;
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "S3_conferma_sel_tb.v", 
                                       39);
    VL_FINISH_MT("S3_conferma_sel_tb.v", 41, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VS3_confermatb___024root___dump_triggers__act(VS3_confermatb___024root* vlSelf);
#endif  // VL_DEBUG

void VS3_confermatb___024root___eval_triggers__act(VS3_confermatb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VS3_confermatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VS3_confermatb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VS3_confermatb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
