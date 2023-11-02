// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrom2.h"
#include "Vrom2__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vrom2::Vrom2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrom2__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , addr1{vlSymsp->TOP.addr1}
    , addr2{vlSymsp->TOP.addr2}
    , dout1{vlSymsp->TOP.dout1}
    , dout2{vlSymsp->TOP.dout2}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vrom2::Vrom2(const char* _vcname__)
    : Vrom2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrom2::~Vrom2() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrom2___024root___eval_debug_assertions(Vrom2___024root* vlSelf);
#endif  // VL_DEBUG
void Vrom2___024root___eval_static(Vrom2___024root* vlSelf);
void Vrom2___024root___eval_initial(Vrom2___024root* vlSelf);
void Vrom2___024root___eval_settle(Vrom2___024root* vlSelf);
void Vrom2___024root___eval(Vrom2___024root* vlSelf);

void Vrom2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrom2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrom2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrom2___024root___eval_static(&(vlSymsp->TOP));
        Vrom2___024root___eval_initial(&(vlSymsp->TOP));
        Vrom2___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrom2___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrom2::eventsPending() { return false; }

uint64_t Vrom2::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vrom2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrom2___024root___eval_final(Vrom2___024root* vlSelf);

VL_ATTR_COLD void Vrom2::final() {
    Vrom2___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrom2::hierName() const { return vlSymsp->name(); }
const char* Vrom2::modelName() const { return "Vrom2"; }
unsigned Vrom2::threads() const { return 1; }
void Vrom2::prepareClone() const { contextp()->prepareClone(); }
void Vrom2::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vrom2::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vrom2___024root__trace_init_top(Vrom2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrom2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrom2___024root*>(voidSelf);
    Vrom2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vrom2___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vrom2___024root__trace_register(Vrom2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vrom2::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vrom2::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vrom2___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
