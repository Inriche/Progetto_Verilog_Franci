// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vstato2tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vstato2tb::Vstato2tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vstato2tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vstato2tb::Vstato2tb(const char* _vcname__)
    : Vstato2tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vstato2tb::~Vstato2tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vstato2tb___024root___eval_debug_assertions(Vstato2tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vstato2tb___024root___eval_static(Vstato2tb___024root* vlSelf);
void Vstato2tb___024root___eval_initial(Vstato2tb___024root* vlSelf);
void Vstato2tb___024root___eval_settle(Vstato2tb___024root* vlSelf);
void Vstato2tb___024root___eval(Vstato2tb___024root* vlSelf);

void Vstato2tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vstato2tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vstato2tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vstato2tb___024root___eval_static(&(vlSymsp->TOP));
        Vstato2tb___024root___eval_initial(&(vlSymsp->TOP));
        Vstato2tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vstato2tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vstato2tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vstato2tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vstato2tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vstato2tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vstato2tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vstato2tb___024root___eval_final(Vstato2tb___024root* vlSelf);

VL_ATTR_COLD void Vstato2tb::final() {
    Vstato2tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vstato2tb::hierName() const { return vlSymsp->name(); }
const char* Vstato2tb::modelName() const { return "Vstato2tb"; }
unsigned Vstato2tb::threads() const { return 1; }
void Vstato2tb::prepareClone() const { contextp()->prepareClone(); }
void Vstato2tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vstato2tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vstato2tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vstato2tb___024root__trace_init_top(Vstato2tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vstato2tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vstato2tb___024root*>(voidSelf);
    Vstato2tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vstato2tb___024root__trace_decl_types(tracep);
    Vstato2tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vstato2tb___024root__trace_register(Vstato2tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vstato2tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vstato2tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vstato2tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
