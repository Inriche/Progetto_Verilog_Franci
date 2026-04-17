// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_regfe.h for the primary calling header

#include "Vtb_regfe__pch.h"
#include "Vtb_regfe__Syms.h"
#include "Vtb_regfe___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_regfe___024root___eval_initial__TOP__Vtiming__0(Vtb_regfe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_regfe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfe___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x65676665U;
    __Vtemp_1[2U] = 0x53696d72U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->tb_regfe__DOT__A = 0xaU;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_fereg.v", 
                                       28);
    vlSelf->tb_regfe__DOT__C = (1U & (~ (IData)(vlSelf->tb_regfe__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_fereg.v", 
                                       29);
    vlSelf->tb_regfe__DOT__C = (1U & (~ (IData)(vlSelf->tb_regfe__DOT__C)));
    vlSelf->tb_regfe__DOT__i = 1U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_fereg.v", 
                                       28);
    vlSelf->tb_regfe__DOT__C = (1U & (~ (IData)(vlSelf->tb_regfe__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_fereg.v", 
                                       29);
    vlSelf->tb_regfe__DOT__C = (1U & (~ (IData)(vlSelf->tb_regfe__DOT__C)));
    vlSelf->tb_regfe__DOT__i = 2U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_fereg.v", 
                                       28);
    vlSelf->tb_regfe__DOT__C = (1U & (~ (IData)(vlSelf->tb_regfe__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_fereg.v", 
                                       29);
    vlSelf->tb_regfe__DOT__C = (1U & (~ (IData)(vlSelf->tb_regfe__DOT__C)));
    vlSelf->tb_regfe__DOT__i = 3U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_fereg.v", 
                                       28);
    vlSelf->tb_regfe__DOT__C = (1U & (~ (IData)(vlSelf->tb_regfe__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_fereg.v", 
                                       29);
    vlSelf->tb_regfe__DOT__C = (1U & (~ (IData)(vlSelf->tb_regfe__DOT__C)));
    vlSelf->tb_regfe__DOT__i = 4U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_fereg.v", 
                                       28);
    vlSelf->tb_regfe__DOT__C = (1U & (~ (IData)(vlSelf->tb_regfe__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_fereg.v", 
                                       29);
    vlSelf->tb_regfe__DOT__C = (1U & (~ (IData)(vlSelf->tb_regfe__DOT__C)));
    vlSelf->tb_regfe__DOT__i = 5U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_fereg.v", 
                                       28);
    vlSelf->tb_regfe__DOT__C = (1U & (~ (IData)(vlSelf->tb_regfe__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_fereg.v", 
                                       29);
    vlSelf->tb_regfe__DOT__C = (1U & (~ (IData)(vlSelf->tb_regfe__DOT__C)));
    vlSelf->tb_regfe__DOT__i = 6U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_fereg.v", 
                                       28);
    vlSelf->tb_regfe__DOT__C = (1U & (~ (IData)(vlSelf->tb_regfe__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_fereg.v", 
                                       29);
    vlSelf->tb_regfe__DOT__C = (1U & (~ (IData)(vlSelf->tb_regfe__DOT__C)));
    vlSelf->tb_regfe__DOT__i = 7U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_fereg.v", 
                                       28);
    vlSelf->tb_regfe__DOT__C = (1U & (~ (IData)(vlSelf->tb_regfe__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_fereg.v", 
                                       29);
    vlSelf->tb_regfe__DOT__C = (1U & (~ (IData)(vlSelf->tb_regfe__DOT__C)));
    vlSelf->tb_regfe__DOT__i = 8U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_fereg.v", 
                                       28);
    vlSelf->tb_regfe__DOT__C = (1U & (~ (IData)(vlSelf->tb_regfe__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_fereg.v", 
                                       29);
    vlSelf->tb_regfe__DOT__C = (1U & (~ (IData)(vlSelf->tb_regfe__DOT__C)));
    vlSelf->tb_regfe__DOT__i = 9U;
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_fereg.v", 
                                       28);
    vlSelf->tb_regfe__DOT__C = (1U & (~ (IData)(vlSelf->tb_regfe__DOT__C)));
    co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                       "tb_fereg.v", 
                                       29);
    vlSelf->tb_regfe__DOT__C = (1U & (~ (IData)(vlSelf->tb_regfe__DOT__C)));
    vlSelf->tb_regfe__DOT__i = 0xaU;
    VL_FINISH_MT("tb_fereg.v", 33, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_regfe___024root___dump_triggers__act(Vtb_regfe___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_regfe___024root___eval_triggers__act(Vtb_regfe___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_regfe__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_regfe___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((~ (IData)(vlSelf->tb_regfe__DOT__C)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_regfe__DOT__C__0)));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_regfe__DOT__C__0 
        = vlSelf->tb_regfe__DOT__C;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_regfe___024root___dump_triggers__act(vlSelf);
    }
#endif
}
