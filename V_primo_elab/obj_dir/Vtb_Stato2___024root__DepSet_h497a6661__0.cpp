// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Stato2.h for the primary calling header

#include "Vtb_Stato2__pch.h"
#include "Vtb_Stato2__Syms.h"
#include "Vtb_Stato2___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_Stato2___024root___eval_initial__TOP__Vtiming__0(Vtb_Stato2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato2___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x696d5331U;
    __Vtemp_1[2U] = 0x53U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    vlSelf->tb_Stato2__DOT__i = 1U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    vlSelf->tb_Stato2__DOT__i = 2U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    vlSelf->tb_Stato2__DOT__i = 3U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    vlSelf->tb_Stato2__DOT__i = 4U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    vlSelf->tb_Stato2__DOT__i = 5U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    vlSelf->tb_Stato2__DOT__i = 6U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    vlSelf->tb_Stato2__DOT__i = 7U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    vlSelf->tb_Stato2__DOT__i = 8U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    vlSelf->tb_Stato2__DOT__i = 9U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    vlSelf->tb_Stato2__DOT__i = 0xaU;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    vlSelf->tb_Stato2__DOT__i = 0xbU;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 65);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "tb_S1.v", 66);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__clock = (1U & (~ (IData)(vlSelf->tb_Stato2__DOT__clock)));
    vlSelf->tb_Stato2__DOT__i = 0xcU;
    vlSelf->tb_Stato2__DOT__clock = 0U;
    vlSelf->tb_Stato2__DOT__A1 = 1U;
    vlSelf->tb_Stato2__DOT__A2 = 2U;
    vlSelf->tb_Stato2__DOT__A3 = 3U;
    vlSelf->tb_Stato2__DOT__B1 = 0xaU;
    vlSelf->tb_Stato2__DOT__B2 = 0x14U;
    vlSelf->tb_Stato2__DOT__B3 = 0x1eU;
    vlSelf->tb_Stato2__DOT__C1 = 4U;
    vlSelf->tb_Stato2__DOT__C2 = 5U;
    vlSelf->tb_Stato2__DOT__C3 = 6U;
    vlSelf->tb_Stato2__DOT__D0 = 7U;
    vlSelf->tb_Stato2__DOT__D1 = 8U;
    vlSelf->tb_Stato2__DOT__E0 = 9U;
    vlSelf->tb_Stato2__DOT__E1 = 0xaU;
    vlSelf->tb_Stato2__DOT__F0 = 0xbU;
    vlSelf->tb_Stato2__DOT__F1 = 0xcU;
    vlSelf->tb_Stato2__DOT__G0 = 0xdU;
    vlSelf->tb_Stato2__DOT__G1 = 0xeU;
    vlSelf->tb_Stato2__DOT__H0 = 0xaU;
    vlSelf->tb_Stato2__DOT__H1 = 7U;
    vlSelf->tb_Stato2__DOT__I0 = 7U;
    vlSelf->tb_Stato2__DOT__I1 = 0xdU;
    vlSelf->tb_Stato2__DOT__J0 = 0x11U;
    vlSelf->tb_Stato2__DOT__J1 = 0x14U;
    vlSelf->tb_Stato2__DOT__K0 = 0x1eU;
    vlSelf->tb_Stato2__DOT__K1 = 0x23U;
    vlSelf->tb_Stato2__DOT__Ctrl = 0U;
    vlSelf->tb_Stato2__DOT__Ctrl_mux9 = 0U;
    vlSelf->tb_Stato2__DOT__Ctrl_mux5 = 0U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb_S1.v", 90);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__Ctrl = 1U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb_S1.v", 94);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__Ctrl = 2U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb_S1.v", 97);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__Ctrl_mux9 = 1U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb_S1.v", 101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__Ctrl_mux9 = 0U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb_S1.v", 104);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_Stato2__DOT__A1 = 0xfU;
    vlSelf->tb_Stato2__DOT__A2 = 0x10U;
    vlSelf->tb_Stato2__DOT__A3 = 0x11U;
    vlSelf->tb_Stato2__DOT__B1 = 0x64U;
    vlSelf->tb_Stato2__DOT__B2 = 0xc8U;
    vlSelf->tb_Stato2__DOT__B3 = 0x12cU;
    vlSelf->tb_Stato2__DOT__C1 = 0x12U;
    vlSelf->tb_Stato2__DOT__C2 = 0x13U;
    vlSelf->tb_Stato2__DOT__C3 = 0x14U;
    vlSelf->tb_Stato2__DOT__Ctrl = 0U;
    vlSelf->tb_Stato2__DOT__Ctrl_mux9 = 1U;
    co_await vlSelf->__VdlySched.delay(0x9c40ULL, nullptr, 
                                       "tb_S1.v", 114);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("tb_S1.v", 116, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Stato2___024root___dump_triggers__act(Vtb_Stato2___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_Stato2___024root___eval_triggers__act(Vtb_Stato2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_Stato2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Stato2___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb_Stato2__DOT__clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_Stato2__DOT__clock__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_Stato2__DOT__clock__0 
        = vlSelf->tb_Stato2__DOT__clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_Stato2___024root___dump_triggers__act(vlSelf);
    }
#endif
}
