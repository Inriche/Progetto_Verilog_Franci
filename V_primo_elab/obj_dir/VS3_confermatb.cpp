// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VS3_confermatb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VS3_confermatb::VS3_confermatb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VS3_confermatb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

VS3_confermatb::VS3_confermatb(const char* _vcname__)
    : VS3_confermatb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VS3_confermatb::~VS3_confermatb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VS3_confermatb___024root___eval_debug_assertions(VS3_confermatb___024root* vlSelf);
#endif  // VL_DEBUG
void VS3_confermatb___024root___eval_static(VS3_confermatb___024root* vlSelf);
void VS3_confermatb___024root___eval_initial(VS3_confermatb___024root* vlSelf);
void VS3_confermatb___024root___eval_settle(VS3_confermatb___024root* vlSelf);
void VS3_confermatb___024root___eval(VS3_confermatb___024root* vlSelf);

void VS3_confermatb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VS3_confermatb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VS3_confermatb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VS3_confermatb___024root___eval_static(&(vlSymsp->TOP));
        VS3_confermatb___024root___eval_initial(&(vlSymsp->TOP));
        VS3_confermatb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VS3_confermatb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VS3_confermatb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VS3_confermatb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VS3_confermatb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VS3_confermatb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VS3_confermatb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VS3_confermatb___024root___eval_final(VS3_confermatb___024root* vlSelf);

VL_ATTR_COLD void VS3_confermatb::final() {
    VS3_confermatb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VS3_confermatb::hierName() const { return vlSymsp->name(); }
const char* VS3_confermatb::modelName() const { return "VS3_confermatb"; }
unsigned VS3_confermatb::threads() const { return 1; }
void VS3_confermatb::prepareClone() const { contextp()->prepareClone(); }
void VS3_confermatb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VS3_confermatb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VS3_confermatb___024root__trace_decl_types(VerilatedVcd* tracep);

void VS3_confermatb___024root__trace_init_top(VS3_confermatb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VS3_confermatb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VS3_confermatb___024root*>(voidSelf);
    VS3_confermatb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VS3_confermatb___024root__trace_decl_types(tracep);
    VS3_confermatb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VS3_confermatb___024root__trace_register(VS3_confermatb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VS3_confermatb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VS3_confermatb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VS3_confermatb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
