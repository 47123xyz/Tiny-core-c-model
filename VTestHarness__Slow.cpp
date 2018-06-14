// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"      // For This
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VTestHarness) {
    VTestHarness__Syms* __restrict vlSymsp = __VlSymsp = new VTestHarness__Syms(this, name());
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (__PVT____024unit, VTestHarness___024unit);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTestHarness::__Vconfigure(VTestHarness__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTestHarness::~VTestHarness() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VTestHarness::_initial__TOP__1(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_initial__TOP__1\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1,159,0,5);
    //char	__VpadToAlign28[4];
    VL_SIGW(__Vtemp2,159,0,5);
    //char	__VpadToAlign52[4];
    VL_SIGW(__Vtemp3,159,0,5);
    //char	__VpadToAlign76[4];
    VL_SIGW(__Vtemp4,159,0,5);
    //char	__VpadToAlign100[4];
    VL_SIGW(__Vtemp5,159,0,5);
    //char	__VpadToAlign124[4];
    VL_SIGW(__Vtemp6,159,0,5);
    //char	__VpadToAlign148[4];
    VL_SIGW(__Vtemp7,159,0,5);
    //char	__VpadToAlign172[4];
    VL_SIGW(__Vtemp8,159,0,5);
    //char	__VpadToAlign196[4];
    VL_SIGW(__Vtemp9,159,0,5);
    //char	__VpadToAlign220[4];
    VL_SIGW(__Vtemp10,159,0,5);
    //char	__VpadToAlign244[4];
    VL_SIGW(__Vtemp11,159,0,5);
    //char	__VpadToAlign268[4];
    VL_SIGW(__Vtemp12,159,0,5);
    //char	__VpadToAlign292[4];
    VL_SIGW(__Vtemp13,159,0,5);
    //char	__VpadToAlign316[4];
    VL_SIGW(__Vtemp14,159,0,5);
    //char	__VpadToAlign340[4];
    VL_SIGW(__Vtemp15,159,0,5);
    //char	__VpadToAlign364[4];
    VL_SIGW(__Vtemp16,159,0,5);
    //char	__VpadToAlign388[4];
    VL_SIGW(__Vtemp17,159,0,5);
    //char	__VpadToAlign412[4];
    VL_SIGW(__Vtemp18,159,0,5);
    //char	__VpadToAlign436[4];
    VL_SIGW(__Vtemp19,159,0,5);
    //char	__VpadToAlign460[4];
    VL_SIGW(__Vtemp20,159,0,5);
    //char	__VpadToAlign484[4];
    VL_SIGW(__Vtemp21,159,0,5);
    //char	__VpadToAlign508[4];
    VL_SIGW(__Vtemp22,159,0,5);
    //char	__VpadToAlign532[4];
    VL_SIGW(__Vtemp23,159,0,5);
    //char	__VpadToAlign556[4];
    VL_SIGW(__Vtemp24,159,0,5);
    //char	__VpadToAlign580[4];
    VL_SIGW(__Vtemp25,159,0,5);
    //char	__VpadToAlign604[4];
    VL_SIGW(__Vtemp26,159,0,5);
    //char	__VpadToAlign628[4];
    VL_SIGW(__Vtemp27,159,0,5);
    //char	__VpadToAlign652[4];
    VL_SIGW(__Vtemp28,159,0,5);
    //char	__VpadToAlign676[4];
    VL_SIGW(__Vtemp29,159,0,5);
    //char	__VpadToAlign700[4];
    VL_SIGW(__Vtemp30,159,0,5);
    //char	__VpadToAlign724[4];
    VL_SIGW(__Vtemp31,159,0,5);
    //char	__VpadToAlign748[4];
    VL_SIGW(__Vtemp32,159,0,5);
    //char	__VpadToAlign772[4];
    VL_SIGW(__Vtemp33,159,0,5);
    //char	__VpadToAlign796[4];
    VL_SIGW(__Vtemp34,159,0,5);
    //char	__VpadToAlign820[4];
    VL_SIGW(__Vtemp35,159,0,5);
    //char	__VpadToAlign844[4];
    VL_SIGW(__Vtemp36,159,0,5);
    //char	__VpadToAlign868[4];
    VL_SIGW(__Vtemp37,159,0,5);
    //char	__VpadToAlign892[4];
    VL_SIGW(__Vtemp38,159,0,5);
    //char	__VpadToAlign916[4];
    VL_SIGW(__Vtemp39,159,0,5);
    //char	__VpadToAlign940[4];
    VL_SIGW(__Vtemp40,159,0,5);
    //char	__VpadToAlign964[4];
    VL_SIGW(__Vtemp41,159,0,5);
    //char	__VpadToAlign988[4];
    VL_SIGW(__Vtemp42,159,0,5);
    //char	__VpadToAlign1012[4];
    VL_SIGW(__Vtemp43,159,0,5);
    // Body
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncResetRegVec_w1_i0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncResetRegVec_w1_i0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp1[0U] = 0x743d2564U;
    __Vtemp1[1U] = 0x6d656f75U;
    __Vtemp1[2U] = 0x6b5f7469U;
    __Vtemp1[3U] = 0x656c696eU;
    __Vtemp1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp1),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp2[0U] = 0x743d2564U;
    __Vtemp2[1U] = 0x6d656f75U;
    __Vtemp2[2U] = 0x6b5f7469U;
    __Vtemp2[3U] = 0x656c696eU;
    __Vtemp2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp2),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp3[0U] = 0x743d2564U;
    __Vtemp3[1U] = 0x6d656f75U;
    __Vtemp3[2U] = 0x6b5f7469U;
    __Vtemp3[3U] = 0x656c696eU;
    __Vtemp3[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp3),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp4[0U] = 0x743d2564U;
    __Vtemp4[1U] = 0x6d656f75U;
    __Vtemp4[2U] = 0x6b5f7469U;
    __Vtemp4[3U] = 0x656c696eU;
    __Vtemp4[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp4),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp5[0U] = 0x743d2564U;
    __Vtemp5[1U] = 0x6d656f75U;
    __Vtemp5[2U] = 0x6b5f7469U;
    __Vtemp5[3U] = 0x656c696eU;
    __Vtemp5[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp5),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp6[0U] = 0x743d2564U;
    __Vtemp6[1U] = 0x6d656f75U;
    __Vtemp6[2U] = 0x6b5f7469U;
    __Vtemp6[3U] = 0x656c696eU;
    __Vtemp6[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp6),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp7[0U] = 0x743d2564U;
    __Vtemp7[1U] = 0x6d656f75U;
    __Vtemp7[2U] = 0x6b5f7469U;
    __Vtemp7[3U] = 0x656c696eU;
    __Vtemp7[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp7),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp8[0U] = 0x743d2564U;
    __Vtemp8[1U] = 0x6d656f75U;
    __Vtemp8[2U] = 0x6b5f7469U;
    __Vtemp8[3U] = 0x656c696eU;
    __Vtemp8[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp8),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp9[0U] = 0x743d2564U;
    __Vtemp9[1U] = 0x6d656f75U;
    __Vtemp9[2U] = 0x6b5f7469U;
    __Vtemp9[3U] = 0x656c696eU;
    __Vtemp9[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp9),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp10[0U] = 0x743d2564U;
    __Vtemp10[1U] = 0x6d656f75U;
    __Vtemp10[2U] = 0x6b5f7469U;
    __Vtemp10[3U] = 0x656c696eU;
    __Vtemp10[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp10),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp11[0U] = 0x743d2564U;
    __Vtemp11[1U] = 0x6d656f75U;
    __Vtemp11[2U] = 0x6b5f7469U;
    __Vtemp11[3U] = 0x656c696eU;
    __Vtemp11[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp11),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp12[0U] = 0x743d2564U;
    __Vtemp12[1U] = 0x6d656f75U;
    __Vtemp12[2U] = 0x6b5f7469U;
    __Vtemp12[3U] = 0x656c696eU;
    __Vtemp12[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp12),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp13[0U] = 0x743d2564U;
    __Vtemp13[1U] = 0x6d656f75U;
    __Vtemp13[2U] = 0x6b5f7469U;
    __Vtemp13[3U] = 0x656c696eU;
    __Vtemp13[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp13),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp14[0U] = 0x743d2564U;
    __Vtemp14[1U] = 0x6d656f75U;
    __Vtemp14[2U] = 0x6b5f7469U;
    __Vtemp14[3U] = 0x656c696eU;
    __Vtemp14[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp14),
				vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp15[0U] = 0x743d2564U;
    __Vtemp15[1U] = 0x6d656f75U;
    __Vtemp15[2U] = 0x6b5f7469U;
    __Vtemp15[3U] = 0x656c696eU;
    __Vtemp15[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp15),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp16[0U] = 0x743d2564U;
    __Vtemp16[1U] = 0x6d656f75U;
    __Vtemp16[2U] = 0x6b5f7469U;
    __Vtemp16[3U] = 0x656c696eU;
    __Vtemp16[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp16),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp17[0U] = 0x743d2564U;
    __Vtemp17[1U] = 0x6d656f75U;
    __Vtemp17[2U] = 0x6b5f7469U;
    __Vtemp17[3U] = 0x656c696eU;
    __Vtemp17[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp17),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp18[0U] = 0x743d2564U;
    __Vtemp18[1U] = 0x6d656f75U;
    __Vtemp18[2U] = 0x6b5f7469U;
    __Vtemp18[3U] = 0x656c696eU;
    __Vtemp18[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp18),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp19[0U] = 0x743d2564U;
    __Vtemp19[1U] = 0x6d656f75U;
    __Vtemp19[2U] = 0x6b5f7469U;
    __Vtemp19[3U] = 0x656c696eU;
    __Vtemp19[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp19),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp20[0U] = 0x743d2564U;
    __Vtemp20[1U] = 0x6d656f75U;
    __Vtemp20[2U] = 0x6b5f7469U;
    __Vtemp20[3U] = 0x656c696eU;
    __Vtemp20[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp20),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp21[0U] = 0x743d2564U;
    __Vtemp21[1U] = 0x6d656f75U;
    __Vtemp21[2U] = 0x6b5f7469U;
    __Vtemp21[3U] = 0x656c696eU;
    __Vtemp21[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp21),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp22[0U] = 0x743d2564U;
    __Vtemp22[1U] = 0x6d656f75U;
    __Vtemp22[2U] = 0x6b5f7469U;
    __Vtemp22[3U] = 0x656c696eU;
    __Vtemp22[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp22),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp23[0U] = 0x743d2564U;
    __Vtemp23[1U] = 0x6d656f75U;
    __Vtemp23[2U] = 0x6b5f7469U;
    __Vtemp23[3U] = 0x656c696eU;
    __Vtemp23[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp23),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp24[0U] = 0x743d2564U;
    __Vtemp24[1U] = 0x6d656f75U;
    __Vtemp24[2U] = 0x6b5f7469U;
    __Vtemp24[3U] = 0x656c696eU;
    __Vtemp24[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp24),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp25[0U] = 0x743d2564U;
    __Vtemp25[1U] = 0x6d656f75U;
    __Vtemp25[2U] = 0x6b5f7469U;
    __Vtemp25[3U] = 0x656c696eU;
    __Vtemp25[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp25),
				vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp26[0U] = 0x743d2564U;
    __Vtemp26[1U] = 0x6d656f75U;
    __Vtemp26[2U] = 0x6b5f7469U;
    __Vtemp26[3U] = 0x656c696eU;
    __Vtemp26[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp26),
				vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp27[0U] = 0x743d2564U;
    __Vtemp27[1U] = 0x6d656f75U;
    __Vtemp27[2U] = 0x6b5f7469U;
    __Vtemp27[3U] = 0x656c696eU;
    __Vtemp27[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp27),
				vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp28[0U] = 0x743d2564U;
    __Vtemp28[1U] = 0x6d656f75U;
    __Vtemp28[2U] = 0x6b5f7469U;
    __Vtemp28[3U] = 0x656c696eU;
    __Vtemp28[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp28),
				vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp29[0U] = 0x743d2564U;
    __Vtemp29[1U] = 0x6d656f75U;
    __Vtemp29[2U] = 0x6b5f7469U;
    __Vtemp29[3U] = 0x656c696eU;
    __Vtemp29[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp29),
				vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp30[0U] = 0x743d2564U;
    __Vtemp30[1U] = 0x6d656f75U;
    __Vtemp30[2U] = 0x6b5f7469U;
    __Vtemp30[3U] = 0x656c696eU;
    __Vtemp30[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp30),
				vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp31[0U] = 0x743d2564U;
    __Vtemp31[1U] = 0x6d656f75U;
    __Vtemp31[2U] = 0x6b5f7469U;
    __Vtemp31[3U] = 0x656c696eU;
    __Vtemp31[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp31),
				vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp32[0U] = 0x743d2564U;
    __Vtemp32[1U] = 0x6d656f75U;
    __Vtemp32[2U] = 0x6b5f7469U;
    __Vtemp32[3U] = 0x656c696eU;
    __Vtemp32[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp32),
				vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp33[0U] = 0x743d2564U;
    __Vtemp33[1U] = 0x6d656f75U;
    __Vtemp33[2U] = 0x6b5f7469U;
    __Vtemp33[3U] = 0x656c696eU;
    __Vtemp33[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp33),
				vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp34[0U] = 0x743d2564U;
    __Vtemp34[1U] = 0x6d656f75U;
    __Vtemp34[2U] = 0x6b5f7469U;
    __Vtemp34[3U] = 0x656c696eU;
    __Vtemp34[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp34),
				vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp35[0U] = 0x743d2564U;
    __Vtemp35[1U] = 0x6d656f75U;
    __Vtemp35[2U] = 0x6b5f7469U;
    __Vtemp35[3U] = 0x656c696eU;
    __Vtemp35[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp35),
				vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp36[0U] = 0x743d2564U;
    __Vtemp36[1U] = 0x6d656f75U;
    __Vtemp36[2U] = 0x6b5f7469U;
    __Vtemp36[3U] = 0x656c696eU;
    __Vtemp36[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp36),
				vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp37[0U] = 0x743d2564U;
    __Vtemp37[1U] = 0x6d656f75U;
    __Vtemp37[2U] = 0x6b5f7469U;
    __Vtemp37[3U] = 0x656c696eU;
    __Vtemp37[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp37),
				vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp38[0U] = 0x743d2564U;
    __Vtemp38[1U] = 0x6d656f75U;
    __Vtemp38[2U] = 0x6b5f7469U;
    __Vtemp38[3U] = 0x656c696eU;
    __Vtemp38[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp38),
				vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__widx_bin__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp39[0U] = 0x743d2564U;
    __Vtemp39[1U] = 0x6d656f75U;
    __Vtemp39[2U] = 0x6b5f7469U;
    __Vtemp39[3U] = 0x656c696eU;
    __Vtemp39[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp39),
				vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp40[0U] = 0x743d2564U;
    __Vtemp40[1U] = 0x6d656f75U;
    __Vtemp40[2U] = 0x6b5f7469U;
    __Vtemp40[3U] = 0x656c696eU;
    __Vtemp40[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp40),
				vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp41[0U] = 0x743d2564U;
    __Vtemp41[1U] = 0x6d656f75U;
    __Vtemp41[2U] = 0x6b5f7469U;
    __Vtemp41[3U] = 0x656c696eU;
    __Vtemp41[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp41),
				vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp42[0U] = 0x743d2564U;
    __Vtemp42[1U] = 0x6d656f75U;
    __Vtemp42[2U] = 0x6b5f7469U;
    __Vtemp42[3U] = 0x656c696eU;
    __Vtemp42[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp42),
				vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp43[0U] = 0x743d2564U;
    __Vtemp43[1U] = 0x6d656f75U;
    __Vtemp43[2U] = 0x6b5f7469U;
    __Vtemp43[3U] = 0x656c696eU;
    __Vtemp43[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp43),
				vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:186393
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT____Vxrand2 
	= VL_RAND_RESET_I(32);
    // INITIAL at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:186387
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT____Vxrand1 
	= VL_RAND_RESET_I(32);
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:187511
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___RAND_72 
	= VL_RANDOM_I(32);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___RAND_73 
	= VL_RANDOM_I(32);
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w1_i0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0__DOT__reg_1_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ready_reg__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncResetRegVec_w1_i0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__widx_bin__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__widx_bin__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ready_reg__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_1_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_2_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_3_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_4_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_5_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_6_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_7_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_8_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_9_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_10_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_11_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_12_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_13_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_14_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_15_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_16_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_17_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_18_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_19_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_20_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_21_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_22_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_23_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_24_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_25_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_26_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_27_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_28_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_29_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_30_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_31_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ready_reg__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_0__DOT__reg_0_q = 0U;
    }
}

void VTestHarness::_settle__TOP__2(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_settle__TOP__2\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_user___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_user
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_user___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_user
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_2__DOT__ram_last___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_2__DOT__ram_last
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_2__DOT__ram_data___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_2__DOT__ram_data
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_2__DOT__ram_strb___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_2__DOT__ram_strb
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_burst___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_burst
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_size___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_size
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_id___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_id
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_id___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_id
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_addr___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_addr
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_len___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_len
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_burst___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_burst
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_size___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_size
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_addr___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_addr
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_len___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_len
	[0U];
}

void VTestHarness::_initial__TOP__28(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_initial__TOP__28\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign1076[4];
    VL_SIGW(__Vtemp51,159,0,5);
    // Body
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/plusarg_reader.v:17
    __Vtemp51[0U] = 0x733d2564U;
    __Vtemp51[1U] = 0x79636c65U;
    __Vtemp51[2U] = 0x72655f63U;
    __Vtemp51[3U] = 0x785f636fU;
    __Vtemp51[4U] = 0x6d61U;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5,__Vtemp51),
				vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus))) {
	vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__debugInterrupts__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_54) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__source_extend__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_54) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_54) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__source_extend__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__source_extend__DOT__sync_0__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT___T_6) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->reset) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q = 0U;
    }
    // INITIAL at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:48
    if (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59) {
	vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q = 0U;
    }
}

void VTestHarness::_settle__TOP__29(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_settle__TOP__29\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp57,95,0,3);
    // Body
    vlTOPp->io_success = (1U == vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fexit);
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_data 
	= ((2U == (3U & vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))
	    ? vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_data
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_mask 
	= ((2U == (3U & vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))
	    ? 0xfU : ((1U == (3U & vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))
		       ? 0xfU : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode 
	= ((2U == (3U & vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))
	    ? 0U : ((1U == (3U & vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))
		     ? 4U : 1U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address 
	= (0x1ffU & ((2U == (3U & vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))
		      ? (0x1fcU & (vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr 
				   << 2U)) : ((1U == 
					       (3U 
						& vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_op))
					       ? (0x1fcU 
						  & (vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_bits_addr 
						     << 2U))
					       : 0x40U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_690 
	= (((0x10U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_4 
			       >> 0xcU)) << 4U)) | 
	    ((8U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_3 
			     >> 0xcU)) << 3U)) | (4U 
						  & ((IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_2 
							      >> 0xcU)) 
						     << 2U)))) 
	   | ((2U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_1 
			      >> 0xcU)) << 1U)) | (1U 
						   & (IData)(
							     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_0 
							      >> 0xcU)))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_data___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_data
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_data___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_data
	[0U];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_data___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_data
	[0U];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_strb___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_strb
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_last___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_last
	[0U];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_id___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_id
	[0U];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_id___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_id
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_burst___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_burst
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_lock___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_lock
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_cache___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_cache
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_prot___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_prot
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_qos___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_qos
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_strb___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__ram_strb
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_size___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_size
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_user___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_user
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT__ram___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT__ram
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_resp___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_resp
	[0U];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_last___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__ram_last
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_847 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_831);
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_847 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_831);
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1289 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1273);
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_burst___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_burst
	[0U];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_burst___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_burst
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__ram_resp___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__ram_resp
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_748 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_744) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_750 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_744)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_748 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_744) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_750 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_744)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1180 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1176) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1182 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1176)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2011 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_xcpt_interrupt) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_xcpt));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1329 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1313);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1329 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1313);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1329 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1313);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1329 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1313);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1185 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1169);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1185 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1169);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1185 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1169);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1329 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1313);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1329 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1313);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1289 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1273);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_961 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_945);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_961 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_945);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_961 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_945);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_973 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_957);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1177 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1161);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1187 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1171);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1185 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1169);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1185 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1169);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_961 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_945);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_961 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_945);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_951 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_935);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_951 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_935);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_951 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_935);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_951 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_935);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_963 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_947);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1329 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1313);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1329 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1313);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1329 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1313);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1329 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1313);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1329 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1313);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1361 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1345);
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_877 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_861);
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_867 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_851);
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1279 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1263);
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_867 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_851);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1281 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1265);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1281 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1265);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1289 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1273);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_963 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_947);
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_973 
	= ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_957);
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_data___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_data
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1324 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1201)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1313 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1324 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1201)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1313 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1324 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1201)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1313 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1324 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1201)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1313 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1180 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1057) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1169 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1180 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1057) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1169 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1180 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1057) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1169 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1324 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1201)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1313 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1324 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1201)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1313 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1284 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1161)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1273 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_956 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_833) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_945 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_956 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_833) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_945 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_956 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_833) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_945 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_968 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_845) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_957 
	       < vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1182 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1059) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1171 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1180 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1057) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1169 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1180 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1057) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1169 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_956 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_833) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_945 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_956 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_833) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_945 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_958 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_835) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_947 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1324 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1201)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1313 
	       < vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1324 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1201)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1313 
	       < vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1324 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1201)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1313 
	       < vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1324 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1201)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1313 
	       < vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1324 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1201)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1313 
	       < vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1356 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1233)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1345 
	       < vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_872 
	= ((((0U == (((((((((((((((((((vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0U] 
				       | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[1U]) 
				      | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[2U]) 
				     | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[3U]) 
				    | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[4U]) 
				   | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[5U]) 
				  | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[6U]) 
				 | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[7U]) 
				| vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[8U]) 
			       | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[9U]) 
			      | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0xaU]) 
			     | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0xbU]) 
			    | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0xcU]) 
			   | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0xdU]) 
			  | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0xeU]) 
			 | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0xfU]) 
			| vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0x10U]) 
		       | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0x11U]) 
		      | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0x12U]) 
		     | vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_749[0x13U])) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_861 
	       < vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1284 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1161)) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1273 
	       < vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_958 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_835) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_947 
	       < vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_968 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_845) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_957 
	       < vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1172 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1059) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1161 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_946 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_833) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_935 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_946 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_833) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_935 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_946 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_833) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_935 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_946 
	= ((((0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_833) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_935 
	       < vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_862 
	= ((((0U == (((((((((((((((((((vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0U] 
				       | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[1U]) 
				      | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[2U]) 
				     | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[3U]) 
				    | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[4U]) 
				   | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[5U]) 
				  | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[6U]) 
				 | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[7U]) 
				| vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[8U]) 
			       | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[9U]) 
			      | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0xaU]) 
			     | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0xbU]) 
			    | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0xcU]) 
			   | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0xdU]) 
			  | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0xeU]) 
			 | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0xfU]) 
			| vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0x10U]) 
		       | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0x11U]) 
		      | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0x12U]) 
		     | vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_749[0x13U])) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_851 
	       < vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1274 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1161)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1263 
		     < vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_862 
	= ((((0U == (((((((((((((((((((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0U] 
				       | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[1U]) 
				      | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[2U]) 
				     | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[3U]) 
				    | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[4U]) 
				   | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[5U]) 
				  | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[6U]) 
				 | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[7U]) 
				| vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[8U]) 
			       | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[9U]) 
			      | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0xaU]) 
			     | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0xbU]) 
			    | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0xcU]) 
			   | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0xdU]) 
			  | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0xeU]) 
			 | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0xfU]) 
			| vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0x10U]) 
		       | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0x11U]) 
		      | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0x12U]) 
		     | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_749[0x13U])) 
	     | (0U == vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	    | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_851 
	       < vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_last___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_last
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_len___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_len
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_addr___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_addr
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1172 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1168) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1174 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1168));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_size___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_size
	[0U];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_size___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_size
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_273 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_263)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__LevelGateway_2__DOT___T_10 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__asyncXing__DOT__SynchronizerShiftReg_w2_d3__DOT__sync_0) 
		  >> 1U) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__pending_2))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_addr___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_addr
	[0U];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_addr___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_addr
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__LevelGateway_1__DOT___T_10 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__asyncXing__DOT__SynchronizerShiftReg_w2_d3__DOT__sync_0) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__pending_1))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_last
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_id
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_user
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1104 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1076_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1109 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1076_1)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__ram_data
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24048 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_cmdtype) 
	    << 0x18U) | vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_control);
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_185 
	= (VL_ULL(1) + vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__time__024);
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_mask___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_mask
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_103 
	= (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor 
			 >> 0x1fU)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__DMSTATUSRdData_allhalted 
	= ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__selectedHartReg)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs_0));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__DMSTATUSRdData_allrunning 
	= ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__selectedHartReg)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs_0)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_last
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_id___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_id
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_203 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_199) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_205 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_199));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_len___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_len
	[0U];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_len___05FT_55_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_len
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_472 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_479)) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_461));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata 
	= (0x1fffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_ext__DOT__reg_RW0_ren)
			 ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_ext__DOT__ram
			[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_ext__DOT__reg_RW0_addr]
			 : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_ext__DOT__RW0_random));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_537 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_550 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_563 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_576 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_589 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_602 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_615 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_628 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
	    << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1172 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1168) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1174 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1168));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_365 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_361) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_367 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_361));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__empty 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_57 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1024 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1018));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1022 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1018) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_176 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_172) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_178 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_172));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__empty 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__ram_id___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__ram_id
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_index___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_index
	[0U];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__value_1)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_id
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_id
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_lock___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_lock
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_cache___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_cache
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_prot___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_prot
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_qos___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_qos
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_burst___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_burst
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_addr___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_addr
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_len___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_len
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_id___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_id
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_strb
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__ram_last
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1469 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)) 
	   | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_332 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_308)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__empty 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_471 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_449) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_102 
	= (1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U] 
		 >> 0x1fU));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94 
	= (VL_ULL(0x3ffffffff) & ((VL_ULL(0x1ffffffff) 
				   & (((QData)((IData)(
						       vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U])) 
				       << 0x20U) | (QData)((IData)(
								   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])))) 
				  - vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[0U] 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[1U] 
	= (IData)((VL_ULL(0x1ffffffff) & (((QData)((IData)(
							   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U])) 
					   << 0x1fU) 
					  | ((QData)((IData)(
							     vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])) 
					     >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[2U] 
	= (IData)(((VL_ULL(0x1ffffffff) & (((QData)((IData)(
							    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U])) 
					    << 0x1fU) 
					   | ((QData)((IData)(
							      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])) 
					      >> 1U))) 
		   >> 0x20U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__result 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__resHi)
	    ? ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[2U] 
		<< 0x1fU) | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
			     >> 1U)) : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U]);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_365 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_361) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_367 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_361));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_id
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_lock___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_lock
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_cache___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_cache
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_prot___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_prot
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_qos___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_qos
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_burst___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_burst
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_addr___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_addr
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_len___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_len
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1024 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1020) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1026 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1020));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_size___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_size
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1892 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_branch) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_br_taken));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_350 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_346) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_352 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_346));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_339 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_333));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_337 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT___T_333) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_mask
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2986 
	= ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state)) 
	   | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__inWriteback 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state)) 
	   | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__release_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1200 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1196) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1202 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1196));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__d_first 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2627));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2631 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2627) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1200 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1196) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1202 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1196));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_195 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_191) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_197 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_191));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_282 
	= (VL_ULL(0x3ffffffffffffff) & (VL_ULL(1) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_278));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_283 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_278 
	    << 6U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_274)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_295 
	= (VL_ULL(0x3ffffffffffffff) & (VL_ULL(1) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_291));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_324 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_318));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_322 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT___T_318) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_692 
	= ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mepc) 
	   | ((4U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa)
	       ? 1U : 3U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_wen___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_wen
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_386 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_380));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_384 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_380) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_712 
	= ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dpc) 
	   | ((4U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa)
	       ? 1U : 3U));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_sink
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_error
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_45 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch) 
		 & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__ram_sink___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__ram_sink
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__ram_error___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__ram_error
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_sink___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_sink
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_error___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_error
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_wxd 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_ctrl_wxd));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2191 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_valid)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_ctrl_csr)
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_533 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_346_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_538 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_346_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_812 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_672_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_817 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_672_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_718 
	= (((((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_mask))
	       ? 0xffU : 0U) << 0x18U) | (((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_mask))
					    ? 0xffU
					    : 0U) << 0x10U)) 
	   | ((((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_mask))
		 ? 0xffU : 0U) << 8U) | ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_mask))
					  ? 0xffU : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_614 
	= (0xfU & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_mask)) 
		   | (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_mask) 
			    >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT__logic_and 
	= ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd)) 
	   | (0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT__logic_xor 
	= ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd)) 
	   | (0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_794 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_size)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_size))) 
			   >> 1U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_797 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_size)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_size))) 
			   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_address 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_6804 
	= ((0xffffffU & ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_0) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_1) 
					<< 8U))) | 
			 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_2) 
			  << 0x10U))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__abstractDataMem_3) 
					 << 0x18U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4956 
	= ((0xffffffU & ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_0) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_1) 
					<< 8U))) | 
			 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_2) 
			  << 0x10U))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_3) 
					 << 0x18U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4604 
	= ((0xffffffU & ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_4) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_5) 
					<< 8U))) | 
			 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_6) 
			  << 0x10U))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_7) 
					 << 0x18U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_5132 
	= ((0xffffffU & ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_8) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_9) 
					<< 8U))) | 
			 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_10) 
			  << 0x10U))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_11) 
					 << 0x18U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_5968 
	= ((0xffffffU & ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_12) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_13) 
					<< 8U))) | 
			 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_14) 
			  << 0x10U))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_15) 
					 << 0x18U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_6584 
	= ((0xffffffU & ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_16) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_17) 
					<< 8U))) | 
			 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_18) 
			  << 0x10U))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_19) 
					 << 0x18U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4076 
	= ((0xffffffU & ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_20) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_21) 
					<< 8U))) | 
			 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_22) 
			  << 0x10U))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_23) 
					 << 0x18U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4428 
	= ((0xffffffU & ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_24) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_25) 
					<< 8U))) | 
			 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_26) 
			  << 0x10U))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_27) 
					 << 0x18U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_5792 
	= ((0xffffffU & ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_28) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_29) 
					<< 8U))) | 
			 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_30) 
			  << 0x10U))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_31) 
					 << 0x18U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_6364 
	= ((0xffffffU & ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_32) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_33) 
					<< 8U))) | 
			 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_34) 
			  << 0x10U))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_35) 
					 << 0x18U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4780 
	= ((0xffffffU & ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_36) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_37) 
					<< 8U))) | 
			 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_38) 
			  << 0x10U))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_39) 
					 << 0x18U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3856 
	= ((0xffffffU & ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_40) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_41) 
					<< 8U))) | 
			 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_42) 
			  << 0x10U))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_43) 
					 << 0x18U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_6188 
	= ((0xffffffU & ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_44) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_45) 
					<< 8U))) | 
			 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_46) 
			  << 0x10U))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_47) 
					 << 0x18U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_5616 
	= ((0xffffffU & ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_48) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_49) 
					<< 8U))) | 
			 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_50) 
			  << 0x10U))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_51) 
					 << 0x18U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_5308 
	= ((0xffffffU & ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_52) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_53) 
					<< 8U))) | 
			 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_54) 
			  << 0x10U))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_55) 
					 << 0x18U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_4252 
	= ((0xffffffU & ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_56) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_57) 
					<< 8U))) | 
			 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_58) 
			  << 0x10U))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_59) 
					 << 0x18U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_6980 
	= ((0xffffffU & ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_60) 
				     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_61) 
					<< 8U))) | 
			 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_62) 
			  << 0x10U))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__programBufferMem_63) 
					 << 0x18U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_575) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_492));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1945 
	= (((((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
	      | (9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
	     | (0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
	    | (0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
	   | (((((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
		 | (0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
		| (0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
	       | (0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
	      | (0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_error
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2064 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_ctrl_mem));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_470 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_hit));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_last
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT___T_57 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_id
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_user
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT___T_57 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_id
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_user
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT___T_57 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_id
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_user
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT___T_57 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_id
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_user
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT___T_57 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_resp___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_resp
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_id
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_user
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_last
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_last
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_last
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_last
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_last___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_last
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__buf_replay 
	= (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Freplay)
		  ? (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid)) 
		     - (IData)(1U)) : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext_RW0_rdata 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__reg_RW0_addr]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__RW0_random);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT___T_250 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT__acq_opcode)) 
	   | (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT__acq_opcode)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_sink___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_sink
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_error___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_error
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_mask___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_mask
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_address___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_address
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_error
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___GEN_72 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_btb_taken));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___GEN_74 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_btb_bridx));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_meta_error 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_meta_correctable_errors));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_victim_state_state 
	= ((0U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_hit_state_state))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_hit_state_state)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_987_state));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_339 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_333));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_337 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT___T_333) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT___T_57 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_57 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_57 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_57 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram
	[vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_582 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_590)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_571));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT___GEN_21 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_burst___05FT_55_data)
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT___GEN_22 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_size___05FT_55_data)
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_586 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_571)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT___GEN_25 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_id___05FT_55_data));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT___GEN_24 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_addr___05FT_55_data
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT___GEN_23 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__ram_len___05FT_55_data)
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3025_ae_ld 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3004) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3006_ae_ld));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3025_ae_st 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3004) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3006_ae_st));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_637 
	= (((((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd)) 
	      | (9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
	     | (0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
	    | (0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
	   | (((((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd)) 
		 | (0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
		| (0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
	       | (0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
	      | (0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT___T_57 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value_1)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT___GEN_25 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__maybe_full) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_id___05FT_55_data));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT___GEN_21 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_burst___05FT_55_data)
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT___GEN_22 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_size___05FT_55_data)
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT___GEN_24 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__maybe_full)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_addr___05FT_55_data
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT___GEN_23 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT__ram_len___05FT_55_data)
	    : 0U);
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_id
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_user
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_addr___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__ram_addr
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext_R0_data 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__reg_R0_ren)
	    ? vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__reg_R0_addr]
	    : vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__mem__DOT__mem_ext__DOT__R0_random);
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_id___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_id
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_addr___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_addr
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__ram_user
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1137 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1133) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1139 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1133));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1248 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1244) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1250 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1244));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1069 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1065) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1071 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1065));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1220 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1216) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1222 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1216));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1137 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1133) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1139 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1133));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1248 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1244) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1250 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1244));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1069 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1065) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1071 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1065));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1220 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1216) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1222 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1216));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1137 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1133) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1139 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1133));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1248 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1244) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1250 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1244));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1069 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1065) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1071 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1065));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1220 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1216) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1222 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1216));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_713 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_709) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_715 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_709));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_864 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_860) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_866 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_860));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_781 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_777) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_783 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_777));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_892 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_888) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_894 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_888));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_user___05FT_63_data 
	= vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_user
	[vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_927 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_923) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_929 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_923));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1078 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1074) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1080 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1074));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_995 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_991) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_997 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_991));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1106 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1102) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1108 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1102));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_842 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_729)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_831 
		     < vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_665 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_661) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_667 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_661)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_776 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_772) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_778 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_772)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_597 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_593) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_599 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_593)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1069 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1065) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1071 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1065));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1220 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1216) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1222 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1216));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1137 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1133) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1139 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1133));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1248 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1244) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1250 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1244));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1069 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1065) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1071 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1065));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1220 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1216) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1222 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1216));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1137 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1133) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1139 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1133));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1248 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1244) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1250 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1244));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_842 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_729)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_831 
		     < vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_665 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_661) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_667 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_661)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_776 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_772) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_778 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_772)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_597 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_593) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_599 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_593)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1029 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1025) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1031 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1025));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1180 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1176) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1182 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1176));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1097 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1093) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1099 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1093));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1208 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1204) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1210 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1204));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_769 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_765) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_771 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_765));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_880 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_876) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_882 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_876));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_701 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_697) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_703 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_697));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_852 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_848) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_854 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_848));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_769 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_765) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_771 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_765));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_880 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_876) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_882 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_876));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_701 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_697) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_703 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_697));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_852 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_848) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_854 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_848));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1284 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1161)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1273 
		     < vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1097 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1093) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1099 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1093)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1029 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1025) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1031 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1025)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1208 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1204) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1210 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1204)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1276 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1153)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1265 
		     < vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1021 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1017) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1023 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1017));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1089 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1085) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1091 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1085));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1276 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1153)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1265 
		     < vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1021 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1017) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1023 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1017));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1089 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1085) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1091 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1085));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1169 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1165) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1171 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1165));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1280 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1276) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1282 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1276));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1101 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1097) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1103 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1097));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1252 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1248) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1254 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1248));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_993 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_989) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_995 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_989));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1104 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1100) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1106 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1100));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_925 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_921) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_927 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_921));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1076 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1072) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1078 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1072));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1097 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1093) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1099 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1093)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1208 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1204) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1210 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1204)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1029 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1025) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1031 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1025)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1180 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1176) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1182 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1176)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_701 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_697) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_703 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_697));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_852 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_848) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_854 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_848));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_769 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_765) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_771 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_765));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_880 
	= (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_876) 
		    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_882 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_876));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_713 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_709) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_715 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_709));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_864 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_860) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_866 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_860));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_781 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_777) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_783 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_777));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_892 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_888) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_894 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_888));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_993 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_989) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_995 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_989));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1104 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1100) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1106 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1100));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_925 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_921) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_927 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_921));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1076 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1072) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1078 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1072));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_993 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_989) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_995 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_989));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1104 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1100) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1106 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1100));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_925 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_921) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_927 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_921));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1076 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1072) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1078 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1072));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_993 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_989) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_995 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_989));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1104 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1100) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1106 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1100));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_925 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_921) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_927 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_921));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1076 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1072) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1078 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1072));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_993 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_989) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_995 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_989));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1104 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1100) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1106 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1100));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_925 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_921) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_927 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_921));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1076 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1072) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1078 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1072));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_685 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_681) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_687 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_681)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_617 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_613) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_619 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_613)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_796 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_792) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_798 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_792)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_768 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_764) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_770 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_764)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_21 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1137 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1133) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1139 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1133));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1248 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1244) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1250 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1244));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1069 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1065) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1071 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1065));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1220 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1216) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1222 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1216));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1137 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1133) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1139 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1133));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1248 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1244) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1250 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1244));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1069 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1065) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1071 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1065));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1220 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1216) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1222 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1216));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ABSTRACTCSWrEnLegal 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_108745 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_108753 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_685 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_681) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_687 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_681)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_796 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_792) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_798 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_792)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_617 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_613) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_619 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_613)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_768 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_764) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_770 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_764)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_685 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_681) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_687 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_681)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_796 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_792) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_798 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_792)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_617 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_613) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_619 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_613)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_768 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_764) 
		 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_770 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_764)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_771 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_767) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_773 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_767));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_882 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_878) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_884 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_878));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_703 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_699) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_705 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_699));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_854 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_850) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_856 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_850));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_771 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_767) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_773 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_767));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_882 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_878) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_884 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_878));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_703 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_699) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_705 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_699));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_854 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_850) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_856 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_850));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_995 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_991) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_997 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_991));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1106 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1102) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1108 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1102));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_927 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_923) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_929 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_923));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1078 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1074) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1080 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1074));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_769 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_765) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_771 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_765));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_880 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_876) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_882 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_876));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_701 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_697) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_703 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_697));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_852 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_848) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_854 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_848));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_769 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_765) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_771 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_765));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_880 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_876) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_882 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_876));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_701 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_697) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_703 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_697));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_852 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_848) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_854 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_848));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_769 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_765) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_771 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_765));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_880 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_876) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_882 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_876));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_701 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_697) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_703 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_697));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_852 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_848) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_854 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_848));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_769 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_765) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_771 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_765));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_880 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_876) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_882 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_876));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_701 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_697) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_703 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_697));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_852 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_848) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_854 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_848));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_769 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_765) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_771 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_765));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_880 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_876) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_882 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_876));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_701 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_697) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_703 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_697));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_852 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_848) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_854 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_848));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_769 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_765) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_771 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_765));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_880 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_876) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_882 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_876));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_701 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_697) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_703 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_697));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_852 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_848) 
		   - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_854 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_848));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1137 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1133) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1139 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1133));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1248 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1244) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1250 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1244));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1069 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1065) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1071 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1065));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1220 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1216) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1222 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor_1__DOT___T_1216));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1137 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1133) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1139 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1133));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1248 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1244) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1250 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1244));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1069 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1065) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1071 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1065));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1220 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1216) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1222 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor_1__DOT___T_1216));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1137 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1133) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1139 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1133));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1248 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1244) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1250 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1244));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1069 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1065) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1071 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1065));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1220 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1216) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1222 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_1216));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1137 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1133) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1139 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1133));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1248 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1244) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1250 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1244));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1069 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1065) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1071 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1065));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1220 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1216) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1222 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__fixer__DOT__TLMonitor__DOT___T_1216));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___GEN_164 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_phys)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3004) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3006_ma_ld)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___GEN_165 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_phys)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3004) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3006_ma_st)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___GEN_166 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_phys)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3004) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3006_pf_ld)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___GEN_167 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_phys)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3004) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3006_pf_st)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1097 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1093) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1099 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1093));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1208 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1204) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1210 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1204));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1029 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1025) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1031 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1025));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1180 
	= (0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1176) 
		     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1182 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1176));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__int_rtc_tick 
	= (0x63U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__value));
    vlTOPp->TestHarness__DOT__dut__DOT___T_182 = (0x7fU 
						  & ((IData)(1U) 
						     + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_350 
	= (((VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								 (0x3000U 
								  ^ 
								  (0xffffffc0U 
								   & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr)))))) 
	    | (((((VL_ULL(0) == (VL_ULL(0x1fc000000) 
				 & (QData)((IData)(
						   (0xc000000U 
						    ^ 
						    (0xffffffc0U 
						     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr)))))) 
		  | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				   & (QData)((IData)(
						     (0x2000000U 
						      ^ 
						      (0xffffffc0U 
						       & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr))))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				  & (QData)((IData)(
						    (0xffffffc0U 
						     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr)))))) 
		| (VL_ULL(0) == (VL_ULL(0x1ffffc000) 
				 & (QData)((IData)(
						   (0x80000000U 
						    ^ 
						    (0xffffffc0U 
						     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr))))))) 
	       | (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				& (QData)((IData)((0x60000000U 
						   ^ 
						   (0xffffffc0U 
						    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1068 
	= (((0xffffffc0U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__refill_addr) 
	    == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1042) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__empty 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__value_1));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__empty 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_53 
	= (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1257 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1254)) 
	   & (IData)(vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_resp_ready));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__value_1));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__value)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__value_1));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__empty 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_167 
	= (0x3fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__count)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_101 
	= (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_104 
	= (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_106 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_171 
	= (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_241 
	= ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state)) 
	   | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__empty 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1392 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_wxd));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___GEN_178 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__resetting)
		      ? ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__flushCounter))
		      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__flushCounter)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_296 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_291 
	    << 6U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_287)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1127 
	= (((7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x27U))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1110)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1132 
	= (((3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x25U))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1112)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1137 
	= (((3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x23U))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1114)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1142 
	= (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x22U))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1116)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1147 
	= (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x21U))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1118)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1154 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1121))) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_528 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2002 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_jalr) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4504 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1686 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_step) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_283 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_284 
	= (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT__wmask 
	= (((((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_mask))
	       ? 0xffU : 0U) << 0x18U) | (((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_mask))
					    ? 0xffU
					    : 0U) << 0x10U)) 
	   | ((((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_mask))
		 ? 0xffU : 0U) << 8U) | ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_mask))
					  ? 0xffU : 0U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_166 
	= ((0U == (3U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				  >> 0x24U)) & (~ (0x1fU 
						   & ((IData)(3U) 
						      << 
						      (3U 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								  >> 0x2eU))))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_369 
	= (((2U >= (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				  >> 0x2eU)))) & ((
						   (((((0U 
							== 
							(0x1c0U 
							 & (IData)(
								   (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								    >> 0x24U)))) 
						       | (0U 
							  == 
							  (0x1fcU 
							   & (0x44U 
							      ^ (IData)(
									(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
									 >> 0x24U)))))) 
						      | (0U 
							 == 
							 (0x1f8U 
							  & (0x48U 
							     ^ (IData)(
								       (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
									>> 0x24U)))))) 
						     | (0U 
							== 
							(0x1f0U 
							 & (0x50U 
							    ^ (IData)(
								      (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								       >> 0x24U)))))) 
						    | (0U 
						       == 
						       (0x1e0U 
							& (0x60U 
							   ^ (IData)(
								     (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								      >> 0x24U)))))) 
						   | (0U 
						      == 
						      (0x180U 
						       & (0x80U 
							  ^ (IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								     >> 0x24U)))))) 
						  | (0U 
						     == 
						     (0x100U 
						      & (0x100U 
							 ^ (IData)(
								   (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								    >> 0x24U))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1056 
	= (((7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x33U))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1042)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1061 
	= (((7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x30U))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1044)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1066 
	= (((3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x2eU))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1046)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1071 
	= (((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x2dU))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1048)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1076 
	= (((0x1ffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			       >> 0x24U))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1050)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1127 
	= (((4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				  >> 0x33U)))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1110)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1234 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1161) 
		     >> (1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				       >> 0x2dU))))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982 
	= ((4U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			   >> 0x2dU)) << 2U)) | (3U 
						 & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							    >> 0x2eU))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_53 
	= (1U & ((2U <= (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				       >> 0x2eU)))) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							  >> 0x2eU)))) 
			   >> 1U) & (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						>> 0x25U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_56 
	= (1U & ((2U <= (3U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				       >> 0x2eU)))) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(
							 (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
							  >> 0x2eU)))) 
			   >> 1U) & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					     >> 0x25U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_3680 
	= ((((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			    >> 0x23U))) ? 0xffU : 0U) 
	    << 0x18U) | ((((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					  >> 0x22U)))
			    ? 0xffU : 0U) << 0x10U) 
			 | ((((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					     >> 0x21U)))
			       ? 0xffU : 0U) << 8U) 
			    | ((1U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					      >> 0x20U)))
			        ? 0xffU : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_6991 
	= ((0x10U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			      >> 0x2bU)) << 4U)) | 
	   (0xfU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			    >> 0x26U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1546 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_alu2))
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rvc)
	        ? 2U : 4U) : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT___T_53 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT___T_53 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT___T_53 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT___T_53 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT___T_53 
	= (0xfU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s0_speculative 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_speculative) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_valid) 
	      & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_speculative))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_231 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_223));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_307 
	= ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_223)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_304));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT___T_53 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_53 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_53 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_53 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4669 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a) 
	      >> 1U));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT___T_53 
	= (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT___T_41 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value) 
	   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__value_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2935 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_release_data_valid) 
		 + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_release_data_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_data___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_data
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra
	[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1391 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_wxd));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1552 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_div));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4529 
	= ((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				 >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4550 
	= ((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				 >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4571 
	= ((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				 >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4592 
	= ((0x3a0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				 >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4613 
	= ((0x3a1U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				 >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4634 
	= ((0x3a1U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				 >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4655 
	= ((0x3a1U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				 >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4676 
	= ((0x3a1U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
				 >> 0x14U))) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_830 
	= ((((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)) 
	     | (9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	    | (0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	   | (0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_844 
	= (((((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)) 
	      | (0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	     | (0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	    | (0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	   | (0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_298 
	= (((((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)) 
	      | (9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	     | (0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	    | (0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	   | (((((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)) 
		 | (0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
		| (0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	       | (0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	      | (0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1986 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_rxs2) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem) 
	      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_rocc)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_253 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_245));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_329 
	= ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_245)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_326));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_253 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_245));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_329 
	= ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_245)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_326));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_253 
	= (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_245));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_329 
	= ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_245)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_326));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1763 
	= (1U & ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))) 
			   >> 1U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1766 
	= (1U & ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))) 
			   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3026 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_valid_pre_xcpt) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_error_valid) 
	      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__lrscAddr 
		 == (0x3ffffffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
				   >> 6U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2061 
	= (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_xcpt)) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_fp)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_wxd));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_pc_valid 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_valid) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_replay)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_xcpt_interrupt));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1910 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_flush_pipe));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_pc_valid 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_valid) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_replay)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_xcpt_interrupt));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1435 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_msb_0 
	    << 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_source___05FT_63_data 
	= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_source
	[vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__value_1];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1771 
	= ((0x800U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst 
		      >> 0x14U)) | (0x7ffU & VL_NEGATE_I((IData)(
								 (1U 
								  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst 
								     >> 0x1fU))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1445 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_msb_1 
	    << 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3087 
	= (0xffffU & ((2U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr)
		       ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data 
			  >> 0x10U) : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_slow_bypass 
	= ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
	   | ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_type)) 
		| (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_type))) 
	       | (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_type))) 
	      | (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_type))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1988 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_rocc)
	    ? 2U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_type));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_263 
	= (0x3fU & ((0x3cU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT__acq_source) 
			      << 2U)) | (3U & (~ (0x1fU 
						  & ((IData)(3U) 
						     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT__acq_size)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2706 
	= ((0xfffffffcU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr) 
	   | (3U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__uncachedReqs_0_addr));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_795 
	= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
		   & (((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ))) 
		      - (IData)(1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_53 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
	   < (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
	      << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_269 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
	   < (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
	      << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_89 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
	   < (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
	      << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_125 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
	   < (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
	      << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_161 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
	   < (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
	      << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_197 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
	   < (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
	      << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_233 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
	   < (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
	      << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__legal_address 
	= ((((((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
								    (0xc000000U 
								     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr))))) 
	       | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				& (QData)((IData)((0x2000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr)))))) 
	      | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
			       & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1ffffc000) & (QData)((IData)(
								    (0x80000000U 
								     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr)))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1e0000000) & (QData)((IData)(
								   (0x60000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr)))))) 
	   | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								  (0x3000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_hit_way 
	= ((0x80000000U <= vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr) 
	   & (0x80004000U > vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_562 
	= ((2U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
		   | (1U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ)))) 
		  << 1U)) | (1U & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1451 
	= ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)) 
	   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
	      >> 0x1fU));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__cmdHi 
	= ((1U == (5U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))) 
	   | (2U == (2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__alu__DOT___T_38 
	= ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)) 
	   | (0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2421 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext_RW0_rdata 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_ren)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__ram
	   [vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__reg_RW0_addr]
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__RW0_random);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcacheArb__DOT___GEN_8 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcacheArb__DOT___T_177)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT__acq_mask)
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___GEN_79 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_pc
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_pc);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___GEN_82 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_xcpt_pf_inst)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_pf_inst));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_xcpt 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_ae_inst) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_pf_inst));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___GEN_80 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_data
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_dout_0);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_53 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
	   < (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
	      << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_269 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
	   < (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
	      << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_89 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
	   < (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
	      << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_125 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
	   < (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
	      << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_161 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
	   < (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
	      << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_197 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
	   < (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
	      << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_233 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
	   < (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
	      << 2U));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT___T_69 
	= (((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_31_q) 
		<< 0x1fU) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_30_q) 
			     << 0x1eU)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_29_q) 
					    << 0x1dU) 
					   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_28_q) 
					      << 0x1cU))) 
	     | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_27_q) 
		  << 0x1bU) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_26_q) 
			       << 0x1aU)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_25_q) 
					      << 0x19U) 
					     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_24_q) 
						<< 0x18U)))) 
	    | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_23_q) 
		  << 0x17U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_22_q) 
			       << 0x16U)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_21_q) 
					      << 0x15U) 
					     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_20_q) 
						<< 0x14U))) 
	       | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_19_q) 
		    << 0x13U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_18_q) 
				 << 0x12U)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_17_q) 
						<< 0x11U) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_16_q) 
						  << 0x10U))))) 
	   | ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_15_q) 
		  << 0xfU) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_14_q) 
			      << 0xeU)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_13_q) 
					    << 0xdU) 
					   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_12_q) 
					      << 0xcU))) 
	       | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_11_q) 
		    << 0xbU) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_10_q) 
				<< 0xaU)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_9_q) 
					      << 9U) 
					     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_8_q) 
						<< 8U)))) 
	      | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_7_q) 
		    << 7U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_6_q) 
			      << 6U)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_5_q) 
					  << 5U) | 
					 ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_4_q) 
					  << 4U))) 
		 | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_3_q) 
		      << 3U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_2_q) 
				<< 2U)) | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_1_q) 
					    << 1U) 
					   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_0_q))))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_0__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT___T_102 
	= (((vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__time__024 
	     >= vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__timecmp_0) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__ipi_0));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_45 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_0__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0__DOT___T_9 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0__DOT__reg_1_q) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_0__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_48 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ready_reg__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_48 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ready_reg__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_624 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_610)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_624 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_610)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_695 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_678)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1056 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1042)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_369 
	= ((((((((0U == (0x3c0U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))) 
		 | (0U == (0x3fcU & (0x44U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))))) 
		| (0U == (0x3f8U & (0x48U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))))) 
	       | (0U == (0x3f0U & (0x50U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))))) 
	      | (0U == (0x3e0U & (0x60U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))))) 
	     | (0U == (0x380U & (0x80U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))))) 
	    | (0U == (0x300U & (0x100U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))))) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_644 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_618)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_644 
	= (((0x7fU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_618)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1076 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1050)) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_0 
	= (((((((0U == (0x1c0U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))) 
		| (0U == (0x1fcU & (0x44U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))))) 
	       | (0U == (0x1f8U & (0x48U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))))) 
	      | (0U == (0x1f0U & (0x50U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))))) 
	     | (0U == (0x1e0U & (0x60U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))))) 
	    | (0U == (0x180U & (0x80U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))))) 
	   | (0U == (0x100U & (0x100U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address)))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_1_a_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_valid) 
	   & (0U == (0x1fcU & (0x40U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_23 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_burst___05FT_55_data)
	    : 1U);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_22 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_lock___05FT_55_data));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_21 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_cache___05FT_55_data)
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_20 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_prot___05FT_55_data)
	    : 1U);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_19 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_qos___05FT_55_data)
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_566 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source___05FT_55_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source___05FT_55_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source___05FT_55_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source___05FT_55_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_826 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_source___05FT_55_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_800)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24121 
	= (0x38000003U | ((0x7000U & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24048 
				      >> 8U)) | (0xf80U 
						 & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24048 
						    << 7U))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24126 
	= (0x38000023U | ((0x1f00000U & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24048 
					 << 0x14U)) 
			  | (0x7000U & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24048 
					>> 8U))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_108728 
	= (1U & ((~ (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24048 
		     >> 0x11U)) | ((0x1000U <= (0xffffU 
						& vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24048)) 
				   & (0x101fU >= (0xffffU 
						  & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_24048)))));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_763 
	= ((((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_mask___05FT_55_data))
	      ? 0xffU : 0U) << 0x18U) | ((((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_mask___05FT_55_data))
					    ? 0xffU
					    : 0U) << 0x10U) 
					 | ((((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_mask___05FT_55_data))
					       ? 0xffU
					       : 0U) 
					     << 8U) 
					    | ((1U 
						& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_mask___05FT_55_data))
					        ? 0xffU
					        : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_0 
	= ((IData)(((0x3fU >= (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
					>> 6U))) ? 
		    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__vb_array 
		     >> (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
				  >> 6U))) : VL_ULL(0))) 
	   & ((0xfffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata) 
	      == (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
			      >> 0xcU))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_544 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_537 
	   & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_537)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_557 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_550 
	   & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_550)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_570 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_563 
	   & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_563)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_583 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_576 
	   & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_576)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_596 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_589 
	   & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_589)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_609 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_602 
	   & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_602)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_622 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_615 
	   & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_615)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_635 
	= (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_628 
	   & (~ ((IData)(1U) + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_628)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_1313 
	= ((0x10U & (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_index___05FT_55_data 
		     >> 0xfU)) | ((0xcU & (vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_index___05FT_55_data 
					   >> 8U)) 
				  | (3U & vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_index___05FT_55_data)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_679 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_0) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_684 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_1) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_689 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_2) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_694 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_3) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_699 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_4) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_704 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_5) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_709 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_6) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_714 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_7) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_719 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_8) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_724 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_9) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_729 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_10) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_734 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_11) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_739 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_12) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_744 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_13) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_749 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_14) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_754 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_599_15) 
	   | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT___GEN_19 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_burst___05FT_55_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_burst___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT___GEN_20 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_size___05FT_55_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_size___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT___GEN_22 
	= (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)
		      ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_addr___05FT_55_data)
		      : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_addr___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT___GEN_21 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__ram_len___05FT_55_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__ram_len___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__da_bits_opcode 
	= ((7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode___05FT_55_data))
	    ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode___05FT_55_data))
		     ? 4U : ((5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode___05FT_55_data))
			      ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode___05FT_55_data))
				       ? 1U : ((3U 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode___05FT_55_data))
					        ? 1U
					        : (
						   (2U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode___05FT_55_data))
						    ? 1U
						    : 0U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_180[0U] 
	= ((0xfffffffeU & ((IData)((((QData)((IData)(
						     ((1U 
						       & (IData)(
								 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94 
								  >> 0x20U)))
						       ? 
						      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U]
						       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94)))) 
				     << 0x20U) | (QData)((IData)(
								 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])))) 
			   << 1U)) | (1U & (~ (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94 
						       >> 0x20U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_180[1U] 
	= ((1U & ((IData)((((QData)((IData)(((1U & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94 
							    >> 0x20U)))
					      ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U]
					      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94)))) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U])))) 
		  >> 0x1fU)) | (0xfffffffeU & ((IData)(
						       ((((QData)((IData)(
									  ((1U 
									    & (IData)(
										(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94 
										>> 0x20U)))
									    ? 
									   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U]
									    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94)))) 
							  << 0x20U) 
							 | (QData)((IData)(
									   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U]))) 
							>> 0x20U)) 
					       << 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_180[2U] 
	= (1U & ((IData)(((((QData)((IData)(((1U & (IData)(
							   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94 
							    >> 0x20U)))
					      ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U]
					      : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94)))) 
			    << 0x20U) | (QData)((IData)(
							vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[0U]))) 
			  >> 0x20U)) >> 0x1fU));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_195 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__count)) 
	    & (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_94 
			  >> 0x20U)))) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__isHi)));
    __Vtemp57[0U] = ((0xff000000U & ((IData)((VL_ULL(0x3ffffffffff) 
					      & ((VL_ULL(0x7ffffffffff) 
						  & VL_EXTENDS_QQ(43,42, 
								  (VL_ULL(0x3ffffffffff) 
								   & VL_MULS_QQQ(42,42,42, 
										(VL_ULL(0x3ffffffffff) 
										& VL_EXTENDS_QQ(42,33, 
										(((QData)((IData)(
										(0xffffffU 
										& VL_NEGATE_I((IData)(
										(1U 
										& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])))))) 
										<< 9U) 
										| (QData)((IData)(
										((0x100U 
										& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
										<< 8U)) 
										| (0xffU 
										& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[0U]))))))), 
										(VL_ULL(0x3ffffffffff) 
										& VL_EXTENDS_QQ(42,33, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor)))))) 
						 + 
						 (VL_ULL(0x7ffffffffff) 
						  & VL_EXTENDS_QQ(43,42, 
								  (((QData)((IData)(
										(0x1ffU 
										& VL_NEGATE_I((IData)(
										(1U 
										& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[2U])))))) 
								    << 0x21U) 
								   | (VL_ULL(0x1ffffffff) 
								      & (((QData)((IData)(
										vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[2U])) 
									  << 0x20U) 
									 | (QData)((IData)(
										vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[1U])))))))))) 
				     << 0x18U)) | (0xffffffU 
						   & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[1U] 
						       << 0x18U) 
						      | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[0U] 
							 >> 8U))));
    __Vtemp57[1U] = ((0xffffffU & ((IData)((VL_ULL(0x3ffffffffff) 
					    & ((VL_ULL(0x7ffffffffff) 
						& VL_EXTENDS_QQ(43,42, 
								(VL_ULL(0x3ffffffffff) 
								 & VL_MULS_QQQ(42,42,42, 
									       (VL_ULL(0x3ffffffffff) 
										& VL_EXTENDS_QQ(42,33, 
										(((QData)((IData)(
										(0xffffffU 
										& VL_NEGATE_I((IData)(
										(1U 
										& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])))))) 
										<< 9U) 
										| (QData)((IData)(
										((0x100U 
										& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
										<< 8U)) 
										| (0xffU 
										& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[0U]))))))), 
									       (VL_ULL(0x3ffffffffff) 
										& VL_EXTENDS_QQ(42,33, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor)))))) 
					       + (VL_ULL(0x7ffffffffff) 
						  & VL_EXTENDS_QQ(43,42, 
								  (((QData)((IData)(
										(0x1ffU 
										& VL_NEGATE_I((IData)(
										(1U 
										& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[2U])))))) 
								    << 0x21U) 
								   | (VL_ULL(0x1ffffffff) 
								      & (((QData)((IData)(
										vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[2U])) 
									  << 0x20U) 
									 | (QData)((IData)(
										vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[1U])))))))))) 
				   >> 8U)) | (0xff000000U 
					      & ((IData)(
							 ((VL_ULL(0x3ffffffffff) 
							   & ((VL_ULL(0x7ffffffffff) 
							       & VL_EXTENDS_QQ(43,42, 
									       (VL_ULL(0x3ffffffffff) 
										& VL_MULS_QQQ(42,42,42, 
										(VL_ULL(0x3ffffffffff) 
										& VL_EXTENDS_QQ(42,33, 
										(((QData)((IData)(
										(0xffffffU 
										& VL_NEGATE_I((IData)(
										(1U 
										& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])))))) 
										<< 9U) 
										| (QData)((IData)(
										((0x100U 
										& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
										<< 8U)) 
										| (0xffU 
										& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[0U]))))))), 
										(VL_ULL(0x3ffffffffff) 
										& VL_EXTENDS_QQ(42,33, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor)))))) 
							      + 
							      (VL_ULL(0x7ffffffffff) 
							       & VL_EXTENDS_QQ(43,42, 
									       (((QData)((IData)(
										(0x1ffU 
										& VL_NEGATE_I((IData)(
										(1U 
										& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[2U])))))) 
										<< 0x21U) 
										| (VL_ULL(0x1ffffffff) 
										& (((QData)((IData)(
										vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[2U])) 
										<< 0x20U) 
										| (QData)((IData)(
										vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[1U]))))))))) 
							  >> 0x20U)) 
						 << 0x18U)));
    __Vtemp57[2U] = (0xffffffU & ((IData)(((VL_ULL(0x3ffffffffff) 
					    & ((VL_ULL(0x7ffffffffff) 
						& VL_EXTENDS_QQ(43,42, 
								(VL_ULL(0x3ffffffffff) 
								 & VL_MULS_QQQ(42,42,42, 
									       (VL_ULL(0x3ffffffffff) 
										& VL_EXTENDS_QQ(42,33, 
										(((QData)((IData)(
										(0xffffffU 
										& VL_NEGATE_I((IData)(
										(1U 
										& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U])))))) 
										<< 9U) 
										| (QData)((IData)(
										((0x100U 
										& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__remainder[1U] 
										<< 8U)) 
										| (0xffU 
										& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[0U]))))))), 
									       (VL_ULL(0x3ffffffffff) 
										& VL_EXTENDS_QQ(42,33, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__divisor)))))) 
					       + (VL_ULL(0x7ffffffffff) 
						  & VL_EXTENDS_QQ(43,42, 
								  (((QData)((IData)(
										(0x1ffU 
										& VL_NEGATE_I((IData)(
										(1U 
										& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[2U])))))) 
								    << 0x21U) 
								   | (VL_ULL(0x1ffffffff) 
								      & (((QData)((IData)(
										vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[2U])) 
									  << 0x20U) 
									 | (QData)((IData)(
										vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_109[1U]))))))))) 
					   >> 0x20U)) 
				  >> 8U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[0U] 
	= __Vtemp57[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[1U] 
	= __Vtemp57[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[2U] 
	= __Vtemp57[2U];
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1172 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1152)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1172 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1152)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1172 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1152)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1177 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1154)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1177 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1154)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1177 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1154)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1187 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1158)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1187 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1158)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1187 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1158)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1194 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1161))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1194 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1161))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1194 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1161))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1167 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1150)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1167 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1150)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1167 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1150)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_922 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_922 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_922 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1182 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1156)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1182 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1156)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1182 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1156)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT___GEN_19 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_burst___05FT_55_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_burst___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT___GEN_20 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_size___05FT_55_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_size___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT___GEN_22 
	= (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)
		      ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_addr___05FT_55_data)
		      : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_addr___05FT_63_data));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT___GEN_21 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__ram_len___05FT_55_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__ram_len___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_821 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_size___05FT_55_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_798)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_169 
	= (0x3ffU & ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_opcode___05FT_55_data))
		      ? 0U : (~ (0x1ffffffU & (((IData)(0xfffU) 
						<< (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_size___05FT_55_data)) 
					       >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_95 
	= ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
	    ? 0U : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
		     ? 0U : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
			      ? 0U : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
				       ? 0U : ((0xbU 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
					        ? 0U
					        : (
						   (0xaU 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						    ? 0U
						    : 
						   ((9U 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						     ? 0U
						     : 
						    ((8U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						      ? 0U
						      : 
						     ((7U 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						       ? 0U
						       : 
						      ((6U 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						        ? 0U
						        : 
						       ((5U 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
							 ? 0U
							 : 
							((4U 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
							  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram___05FT_63_data)
							  : 
							 ((3U 
							   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
							   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram___05FT_63_data)
							   : 
							  ((2U 
							    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
							    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram___05FT_63_data)
							    : 
							   ((1U 
							     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
							     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram___05FT_55_data)
							     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram___05FT_55_data))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_740 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_726)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_745 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_728)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_154 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_755 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_732)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_918 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_845 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_750 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_730)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_164 
	= ((0U == (0xfffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_259 
	= (((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0x7000U & (0x3000U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_391 
	= (((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0x7000U & (0x3000U ^ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_760 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_734)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_105 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_108 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1096 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1082)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1096 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1082)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1096 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1082)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1101 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1084)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1101 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1084)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1101 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1084)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1106 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1086)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1106 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1086)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1106 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1086)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_171 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_171 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_171 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1111 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1088)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1274 
	= (1U & ((~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1201) 
				>> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1111 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1088)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1274 
	= (1U & ((~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1201) 
				>> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1111 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1088)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1274 
	= (1U & ((~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1201) 
				>> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1172 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1152)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1172 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1152)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1204 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1184)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1187 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1158)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1187 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1158)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1219 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1190)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1194 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1161))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1194 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1161))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1226 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1193))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT___GEN_8 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__ram_resp___05FT_55_data)
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data)
	        ? 2U : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_922 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_922 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_954 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1182 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1156)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1182 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1156)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1214 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1188)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT___GEN_13 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__maybe_full)
		  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__ram_id___05FT_55_data)
		  : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		     >> 3U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT___GEN_9 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__maybe_full)
		  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__ram_id___05FT_55_data)
		  : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		     >> 3U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_181 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1116 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1090) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_181 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1116 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1090) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_181 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1116 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1090) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_317 
	= ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	   & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								  (0x3000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_317 
	= ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	   & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								  (0x3000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_317 
	= ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	   & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								  (0x3000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_155 
	= ((((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
								  (0xc000000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
								    (0x2000000U 
								     ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	   | (VL_ULL(0) == (VL_ULL(0x1ffffc000) & (QData)((IData)(
								  (0x80000000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_155 
	= ((((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
								  (0xc000000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
								    (0x2000000U 
								     ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	   | (VL_ULL(0) == (VL_ULL(0x1ffffc000) & (QData)((IData)(
								  (0x80000000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_155 
	= ((((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
								  (0xc000000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
								    (0x2000000U 
								     ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	   | (VL_ULL(0) == (VL_ULL(0x1ffffc000) & (QData)((IData)(
								  (0x80000000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_77 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_80 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_77 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_80 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_77 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_80 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1030 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1010)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1028 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1008)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1045 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1016)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1043 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1014)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1052 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1019))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_47 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_45) 
	   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
	      >> 1U));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_780 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_778 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1040 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1014)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1038 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1012)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1035 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data)) 
	   & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_261_0_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1090 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2191)) 
	   | (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2191)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_ret 
	= (0x3fU & ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2191)) 
		    & (((IData)(1U) << (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					      >> 0x14U))) 
		       >> 2U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_call 
	= (0xffU & ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2191)) 
		    & ((IData)(1U) << (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					     >> 0x14U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_break 
	= (0x7fU & ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2191)) 
		    & (((IData)(1U) << (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					      >> 0x14U))) 
		       >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_630 
	= ((((8U & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
		    >> 0x1cU)) | (4U & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
					>> 0x15U))) 
	    | ((2U & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
		      >> 0xeU)) | (1U & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_272_0_bits_data 
					 >> 7U)))) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_614)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_633 
	= ((((8U & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
		    >> 0x1cU)) | (4U & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
					>> 0x15U))) 
	    | ((2U & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
		      >> 0xeU)) | (1U & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_279_0_data 
					 >> 7U)))) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_614)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_733 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_716)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_733 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_716)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_748 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_722) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_26 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_addr___05FT_55_data
	    : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data);
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_748 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_722) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_154 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_154 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_743 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_720)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_906 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_833 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_743 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_720)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_906 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_833 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_21 
	= ((0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
	    ? 4U : ((0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
		     ? 4U : ((0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
			      ? 1U : ((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
				       ? 0U : ((0xfU 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
					        ? 3U
					        : (
						   (0xeU 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
						    ? 3U
						    : 
						   ((0xdU 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
						     ? 3U
						     : 
						    ((0xcU 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
						      ? 3U
						      : 
						     ((0xbU 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
						       ? 3U
						       : 
						      ((0xaU 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
						        ? 3U
						        : 
						       ((9U 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
							 ? 3U
							 : 
							((8U 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
							  ? 3U
							  : 2U))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_164 
	= ((0U == (0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x7fffffU & ((IData)(0xffU) 
					       << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_259 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0xe0000000U & (0x60000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_302 
	= (((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0xe0000000U & (0x60000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_738 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_718)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_25 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
		     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_len___05FT_55_data)
		     : (~ (0x7fffffU & (((IData)(0x3ffU) 
					 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
					>> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_164 
	= ((0U == (0xffU & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x7fffffU & ((IData)(0xffU) 
					       << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_259 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0xe0000000U & (0x60000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_302 
	= (((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0xe0000000U & (0x60000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_738 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_718)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_461 
	= ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))
	    ? 2U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_410 
	= (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
		     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
			<< 5U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_105 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_108 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_105 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_108 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_728 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_714)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_728 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_714)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_377 
	= (0x3fU & ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))
		     ? 0U : (~ (0x1fffffU & (((IData)(0xffU) 
					      << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
					     >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_17 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
		  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_wen___05FT_55_data)
		  : (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
			>> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_757 
	= (((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_718)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_720) 
	       != (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
			    >> 2U))))) | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_718)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_715 
	= (((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_676)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_678) 
	       != (1U & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
			    >> 2U))))) | (8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_676)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_799 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
	      ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_782)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_799 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
	      ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_782)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1947 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem) 
	   & ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
		| (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
	       | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
	      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1945)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1983 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem) 
	   & ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
		| (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
	       | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
	      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1945)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1124 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1104)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1124 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1104)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1132 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1112)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1139 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1110)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1139 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1110)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1147 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1118)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1146 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1113))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1146 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1113))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1154 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1121))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_882 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1142 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1116)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1129 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1106)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1129 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1106)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1137 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1114)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1177 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1154)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1177 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1154)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1209 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1186)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_317 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_308) 
	   & (~ (0xffffU & (((IData)(7U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			    >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1167 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_1150)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1167 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__fixer__DOT__TLMonitor__DOT___T_1150)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1199 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_1182)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1017 
	= (0x1ffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
		      ? (~ (0xffffffU & (((IData)(0xfffU) 
					  << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					 >> 3U))) : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1036 
	= (1U & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT__maybe_full))
		  : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__maybe_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_314 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_308) 
		  == (1U & (~ (0xffffU & (((IData)(7U) 
					   << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					  >> 2U))))) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_957 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_940)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_181 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_967 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_944)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1130 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1057 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_972 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_946) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_167 
	= ((((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
								  (0xc000000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
								    (0x2000000U 
								     ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	   | (VL_ULL(0) == (VL_ULL(0x1ffffc000) & (QData)((IData)(
								  (0x80000000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_407 
	= ((((VL_ULL(0) == (VL_ULL(0x8a000000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))
	      ? 2U : 0U) | (VL_ULL(0) == (VL_ULL(0x8a000000) 
					  & (QData)((IData)(
							    (0x2000000U 
							     ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | ((VL_ULL(0) == (VL_ULL(0x8a000000) & (QData)((IData)(
								  (0x80000000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))
	       ? 3U : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1035 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1012)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1033 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1010)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___GEN_16 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_470) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_tl_error)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_ae_inst));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_511 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_507) 
	   | (0U != ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
		      ? 0U : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
			       ? 0U : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
				        ? 0U : ((0xcU 
						 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						 ? 0U
						 : 
						((0xbU 
						  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						  ? 0U
						  : 
						 ((0xaU 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						   ? 0U
						   : 
						  ((9U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						    ? 0U
						    : 
						   ((8U 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						     ? 0U
						     : 
						    ((7U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						      ? 0U
						      : 
						     ((6U 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						       ? 0U
						       : 
						      ((5U 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						        ? 0U
						        : 
						       ((4U 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
							 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_resp___05FT_63_data)
							 : 
							((3U 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
							  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_resp___05FT_63_data)
							  : 
							 ((2U 
							   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
							   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_resp___05FT_63_data)
							   : 
							  ((1U 
							    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
							    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_resp___05FT_63_data)
							    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_resp___05FT_63_data))))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_536 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
		  ? ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
		      ? 0U : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
			       ? 0U : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
				        ? 0U : ((0xcU 
						 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						 ? 0U
						 : 
						((0xbU 
						  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						  ? 0U
						  : 
						 ((0xaU 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						   ? 0U
						   : 
						  ((9U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						    ? 0U
						    : 
						   ((8U 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						     ? 0U
						     : 
						    ((7U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						      ? 0U
						      : 
						     ((6U 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						       ? 0U
						       : 
						      ((5U 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						        ? 0U
						        : 
						       ((4U 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
							 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_id___05FT_63_data)
							 : 
							((3U 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
							  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_id___05FT_63_data)
							  : 
							 ((2U 
							   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
							   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_id___05FT_63_data)
							   : 
							  ((1U 
							    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
							    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_id___05FT_63_data)
							    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_id___05FT_63_data))))))))))))))))
		  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_80 
	= ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
	    ? 0U : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
		     ? 0U : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
			      ? 0U : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
				       ? 0U : ((0xbU 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
					        ? 0U
					        : (
						   (0xaU 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						    ? 0U
						    : 
						   ((9U 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						     ? 0U
						     : 
						    ((8U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						      ? 0U
						      : 
						     ((7U 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						       ? 0U
						       : 
						      ((6U 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						        ? 0U
						        : 
						       ((5U 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
							 ? 0U
							 : 
							((4U 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
							  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_user___05FT_63_data)
							  : 
							 ((3U 
							   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
							   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_user___05FT_63_data)
							   : 
							  ((2U 
							    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
							    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_user___05FT_63_data)
							    : 
							   ((1U 
							     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
							     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_user___05FT_63_data)
							     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_user___05FT_63_data))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_81 
	= ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577)) 
	   & ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577)) 
	      & ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577)) 
		 & ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577)) 
		    & ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577)) 
		       & ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577)) 
			  & ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577)) 
			     & ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577)) 
				& ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577)) 
				   & ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577)) 
				      & ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577)) 
					 & ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
					     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__ram_last___05FT_63_data)
					     : ((3U 
						 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__ram_last___05FT_63_data)
						 : 
						((2U 
						  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__ram_last___05FT_63_data)
						  : 
						 ((1U 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_577))
						   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__ram_last___05FT_63_data)
						   : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__ram_last___05FT_63_data))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_47 
	= ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
	    ? 0U : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
		     ? 0U : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
			      ? 0U : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
				       ? 0U : ((0xbU 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
					        ? 0U
					        : (
						   (0xaU 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						    ? 0U
						    : 
						   ((9U 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						     ? 0U
						     : 
						    ((8U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						      ? 0U
						      : 
						     ((7U 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						       ? 0U
						       : 
						      ((6U 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						        ? 0U
						        : 
						       ((5U 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
							 ? 0U
							 : 
							((4U 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
							  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram___05FT_63_data)
							  : 
							 ((3U 
							   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
							   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram___05FT_63_data)
							   : 
							  ((2U 
							    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
							    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram___05FT_63_data)
							    : 
							   ((1U 
							     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
							     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram___05FT_55_data)
							     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT__ram___05FT_55_data))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_296 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT___T_250)
		      ? 0U : 1U)) & (~ ((0x20U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT__acq_source))
					 ? (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_223))
					 : (0U == (0xfU 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT__acq_source)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_285 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_223) 
		    - (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT___T_250)
			       ? 0U : 1U) | (3U & (
						   ((IData)(1U) 
						    << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT__acq_size)) 
						   >> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_806 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_786)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_806 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_786)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_821 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_792)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_821 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_792)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_828 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_error___05FT_63_data) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_795))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_828 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_error___05FT_63_data) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_795))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_440 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT__full)) 
		  | (0xfU == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT__full)
			       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT__saved_mask)
			       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_22_param 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT__saved_param)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_param___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_816 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_796)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_831 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_802)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_838 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_805))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_821 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_798)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_811 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_794)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__beatsDO_2 
	= (0x3ffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
		      ? (~ (0x1ffffffU & (((IData)(0xfffU) 
					   << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					  >> 2U))) : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1028 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1008)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1028 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1008)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1028 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1008)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1028 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1008)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1043 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1014)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1043 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1014)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1043 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1014)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1043 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1014)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1050 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1017))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1050 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1017))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1050 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1017))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1050 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1017))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1033 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1010)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1033 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1010)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1033 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1010)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1033 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1010)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1023 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1006)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1023 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1006)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1023 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1006)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1023 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1006)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__beatsDO_0 
	= (0xfU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
		    ? (~ (0x7ffffU & (((IData)(0x3fU) 
				       << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
				      >> 2U))) : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_556 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_556 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_816 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_790)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_816 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_790)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_804 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_784)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_819 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_790)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_826 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_793))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_809 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_786)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_799 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_782)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__beatsDO_1 
	= (0x3fU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
		     ? (~ (0x1fffffU & (((IData)(0xffU) 
					 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					>> 2U))) : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_566 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_826 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__TLMonitor__DOT___T_800)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2763 
	= (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
	    << 0x2dU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			  << 0x2bU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					<< 0x27U) | 
				       (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data)) 
					 << 0x22U) 
					| (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
					    << 0x21U) 
					   | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_63_data)) 
					       << 1U) 
					      | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_778 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_778 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_778 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_778 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1038 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__fixer__DOT__TLMonitor__DOT___T_1012)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1038 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__widget__DOT__TLMonitor__DOT___T_1012)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1038 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_pbus__DOT__buffer__DOT__TLMonitor__DOT___T_1012)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1038 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1012)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2747 
	= (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
	    << 0x2dU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			  << 0x2bU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					<< 0x27U) | 
				       (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data)) 
					 << 0x22U) 
					| (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
					    << 0x21U) 
					   | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_data___05FT_63_data)) 
					       << 1U) 
					      | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_error___05FT_63_data))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_554 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_814 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__TLMonitor__DOT___T_788)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2755 
	= (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
	    << 0x2dU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			  << 0x2bU) | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					<< 0x27U) | 
				       (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data)) 
					 << 0x22U) 
					| (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
					    << 0x21U) 
					   | (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_63_data)) 
					       << 1U) 
					      | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_22_opcode 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT__saved_opcode)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_opcode___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1101 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1084)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1101 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1084)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1096 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1082)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1096 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1082)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_171 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_171 
	= (1U & (((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
		      >> 3U)) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
				 >> 3U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1111 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1088)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1274 
	= (1U & ((~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1201) 
				>> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1111 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1088)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1274 
	= (1U & ((~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1201) 
				>> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1106 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1086)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1106 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1086)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__beatsAI_0 
	= (0x3ffU & ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))
		      ? 0U : (~ (0x1ffffffU & (((IData)(0xfffU) 
						<< (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
					       >> 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_181 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1116 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_1090) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_181 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1116 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_1090) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_317 
	= ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	   & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								  (0x3000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_317 
	= ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	   & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								  (0x3000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_155 
	= ((((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
								  (0xc000000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
								    (0x2000000U 
								     ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	   | (VL_ULL(0) == (VL_ULL(0x1ffffc000) & (QData)((IData)(
								  (0x80000000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_155 
	= ((((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
								  (0xc000000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
								    (0x2000000U 
								     ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	   | (VL_ULL(0) == (VL_ULL(0x1ffffc000) & (QData)((IData)(
								  (0x80000000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_77 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_80 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_77 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_80 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2165[0U] 
	= (IData)((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2165[1U] 
	= ((0xfffffff0U & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			   << 4U)) | (IData)(((((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data)) 
						<< 0x20U) 
					       | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_data___05FT_63_data))) 
					      >> 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2165[2U] 
	= ((0xfffffff0U & ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
			     << 0x10U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data) 
					  << 0xdU)) 
			   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data) 
			       << 9U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
					 << 4U)))) 
	   | (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
		      >> 0x1cU)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_0_0 
	= ((((VL_ULL(0) == (VL_ULL(0xc8000000) & (QData)((IData)(
								 (0x8000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	     | (VL_ULL(0) == (VL_ULL(0xca000000) & (QData)((IData)(
								   (0x2000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	    | (VL_ULL(0) == (VL_ULL(0xca002000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	   | (VL_ULL(0) == (VL_ULL(0xca000000) & (QData)((IData)(
								 (0x80000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_22_size 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT__saved_size)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_size___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_581 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_582));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_959 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_942)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_733 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_716)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_733 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_716)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_733 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_716)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_733 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_716)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_733 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_716)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_733 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_716)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_735 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_718)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_735 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_718)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_param 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__saved_param)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT___T_22_param 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__saved_param)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_param 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_param)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_457 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | (0xfU == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
			       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__saved_mask)
			       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_457 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | (0xfU == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
			       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__saved_mask)
			       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_457 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | (0xfU == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
			       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_mask)
			       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_460 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? 0xfU : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_460 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? 0xfU : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_460 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? 0xfU : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_974 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_948) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_748 
	= (((0xfffffffU & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
	    == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_722) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_748 
	= (((0xfffffffU & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
	    == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_722) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_748 
	= (((0x3ffffffU & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
	    == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_722) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_748 
	= (((0x3ffffffU & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
	    == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_722) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_748 
	= (((0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_722)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_748 
	= (((0xfffU & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_722)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_750 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_724) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_750 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_724) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_181 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_154 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_154 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_154 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_154 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_154 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_154 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_154 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_154 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_969 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_946)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1132 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1059 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_743 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_720)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_906 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_833 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_743 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_720)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_906 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_833 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_743 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_720)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_906 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_833 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_743 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_720)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_906 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_833 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_743 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_720)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_906 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_833 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_743 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_720)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_906 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_833 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_745 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_722)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_908 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_835 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_745 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_722)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_908 
	= (1U & ((~ (0xfffffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_835 
				 >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_811 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_788)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_811 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_788)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_801 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_784)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_801 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_784)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_799 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_782)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_799 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_782)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_715 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_698)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_954 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_940)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_728 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_714)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_728 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_714)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_728 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_714)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_728 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_714)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_728 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_714)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_728 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_714)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_730 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_716)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_730 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_716)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__saved_opcode)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_opcode)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__saved_opcode)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_191 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_340 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & ((((VL_ULL(0) == (VL_ULL(0x1fc000000) 
				& (QData)((IData)((0xc000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
		 | (VL_ULL(0) == (VL_ULL(0x1ffff0000) 
				  & (QData)((IData)(
						    (0x2000000U 
						     ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
		| (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				 & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	       | (VL_ULL(0) == (VL_ULL(0x1ffffc000) 
				& (QData)((IData)((0x80000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_554 
	= (((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1ffffc000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_964 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_944)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_164 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_259 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0xc000000U & (0xc000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_738 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_718)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_164 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_259 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0xc000000U & (0xc000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_738 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_718)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_164 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_259 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0x3ff0000U & (0x2000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_738 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_718)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_164 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_259 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (0U == (0x3ff0000U & (0x2000000U ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_738 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_718)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_164 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_259 
	= ((1U & (6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_738 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_718)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_164 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_259 
	= ((1U & (6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_738 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_718)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_164 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_259 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1ffffc000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_388 
	= (((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1ffffc000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_740 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_720)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_164 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_259 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1ffffc000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_388 
	= (((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (VL_ULL(0) == (VL_ULL(0x1ffffc000) & (QData)((IData)(
								   (0x80000000U 
								    ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_740 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_720)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_105 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_108 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_105 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_108 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_105 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_108 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_105 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_108 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_105 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_108 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_105 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_108 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_105 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_108 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_105 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_108 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_105 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_108 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_size 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__saved_size)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_size 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__saved_size)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT___T_22_size 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__saved_size)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_576 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_586) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_590)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_614 
	= ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_590)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_586));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_409 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_403)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_405
	    : vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT___GEN_24);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_531 
	= (0x7fffffU & ((0xffU | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT___GEN_23) 
				  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT___GEN_22)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_408 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_403)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_407)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT___GEN_23));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_read 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd)) 
	     | (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
	    | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_637));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write 
	= ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd)) 
	     | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
	    | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_637));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_151 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1071 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1048)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1234 
	= (1U & ((~ (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1161) 
			   >> (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_source___05FT_63_data)))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1076 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
	    == vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1050) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_135 
	= ((((VL_ULL(0) == (VL_ULL(0x1fc000000) & (QData)((IData)(
								  (0xc000000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	     | (VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
								    (0x2000000U 
								     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))) 
	    | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))) 
	   | (VL_ULL(0) == (VL_ULL(0x1ffffc000) & (QData)((IData)(
								  (0x80000000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1061 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1044)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1056 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1042)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_275 
	= ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data)) 
	   | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_261 
	= (((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data)) 
	    & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data))) 
	   | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_241 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_235)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_237
	    : vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT___GEN_24);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_360 
	= (0x7fffffU & ((0xffU | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT___GEN_23) 
				  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT___GEN_22)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_240 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_235)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_239)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT___GEN_23));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_952 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_938)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_191 
	= ((0U == (0x3fU & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			    & (~ (0x1fffU & ((IData)(0x3fU) 
					     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_962 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_942)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_105 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_108 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_302 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	   & (VL_ULL(0) == (VL_ULL(0x80000000) & (QData)((IData)(
								 (0x80000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1025 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1008)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_161 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1066 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1046)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_297 
	= ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	   & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
								  (0x3000U 
								   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_57 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
					>> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_60 
	= (1U & ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		 | (1U & ((((IData)(1U) << (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data))) 
			   >> 1U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
				     >> 1U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2068 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2064) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___GEN_164));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2065 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2064) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___GEN_165));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2074 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2064) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___GEN_166));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2071 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2064) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___GEN_167));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_3__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1395 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1392) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_mem)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT___T_9 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_296) 
	    < vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1717 
	= (7U & ((((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2191)) 
		   & (((IData)(1U) << (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					     >> 0x14U))) 
		      >> 5U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1686))) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_debug))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT___T_75 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT__wmask 
	    & ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd))
	        ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data 
		   + vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_data)
	        : (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT__logic_and) 
		    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT__logic_xor))
		    ? (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT__logic_and)
			 ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data 
			    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_data)
			 : 0U) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT__logic_xor)
				   ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data 
				      ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_data)
				   : 0U)) : (((1U & 
					       (((1U 
						  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data 
						     >> 0x1fU)) 
						 == 
						 (1U 
						  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_data 
						     >> 0x1fU)))
						 ? 
						(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data 
						 < vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_data)
						 : 
						((0U 
						  == 
						  (2U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd)))
						  ? 
						 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data 
						  >> 0x1fU)
						  : 
						 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_data 
						  >> 0x1fU))))
					       ? ((0xcU 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd)) 
						  | (0xeU 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd)))
					       : ((0xdU 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd)) 
						  | (0xfU 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__pstore1_cmd))))
					      ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data
					      : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__a_data)))) 
	   | ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__AMOALU__DOT__wmask) 
	      & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1137 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1114)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1142 
	= (((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982) 
		   >> 2U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1116)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_75 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_56) 
		    | ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				>> 0x25U)) & (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						      >> 0x24U)))) 
		   << 3U)) | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_56) 
				     | ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						 >> 0x25U)) 
					& (~ (IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						      >> 0x24U))))) 
				    << 2U))) | ((2U 
						 & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_53) 
						     | ((~ (IData)(
								   (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								    >> 0x25U))) 
							& (IData)(
								  (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								   >> 0x24U)))) 
						    << 1U)) 
						| (1U 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_53) 
						      | ((~ (IData)(
								    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								     >> 0x25U))) 
							 & (~ (IData)(
								      (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
								       >> 0x24U))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT___T_44 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT___T_41) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT___T_41) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2975 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__inWriteback) 
	   & (0x10U > (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2935))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_554 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
			    >> 0xaU))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
						    >> 0xaU)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
			       >> 8U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
						      >> 8U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_554 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
			    >> 0xaU))) | (1U == (3U 
						 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
						    >> 0xaU)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
			       >> 8U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
						      >> 8U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_307 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_245) 
		    - (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data) 
			     | (3U & (((IData)(1U) 
				       << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data))) 
				      >> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_814 
	= (((0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
		      >> 7U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_788)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_814 
	= (((0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
		      >> 7U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_788)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_725 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_702)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_730 
	= (((0x3ffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
		       >> 2U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_704)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_285 
	= (0x3fU & ((0x3cU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data)) 
		    | (3U & (~ (0x1fU & ((IData)(3U) 
					 << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_318 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data)) 
	   & (0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
			     >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1119 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1102)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1119 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1102)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1127 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1110)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__grantIsUncached 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
	    | (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
	   | (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2624 
	= (0x3ffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
		      ? (~ (0x1ffffffU & (((IData)(0xfffU) 
					   << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					  >> 2U))) : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_188 
	= (0x3ffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
		      ? (~ (0x1ffffffU & (((IData)(0xfffU) 
					   << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					  >> 2U))) : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2863 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__blockUncachedGrant) 
	      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_valid)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_199 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__state)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1552));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_845 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_830) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_844));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_read 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)) 
	     | (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	    | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_298));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_write 
	= ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)) 
	     | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	    | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_298));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_826 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_329) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_793))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_826 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_329) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_793))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_826 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_329) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_793))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_826 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_329) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_793))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_826 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_329) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_793))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_826 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_329) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_793))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1766) 
		    << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
					      << 2U) 
					     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
						<< 3U))))) 
	    | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1766) 
		      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
						<< 1U) 
					       & ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr) 
						  << 2U)))))) 
	   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1763) 
		      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
			     >> 1U)) & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr)) 
		     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1763) 
				      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr 
					     >> 1U)) 
					 & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_0 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_bypass_0)
	    ? ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data
	        : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0))
		    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_2
		    : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_0))
		        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_1
		        : 0U))) : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1435);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1865 
	= (VL_ULL(0x1ffffffff) & (VL_EXTENDS_QI(33,32, vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_pc) 
				  + VL_EXTENDS_QI(33,32, 
						  ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1892)
						    ? 
						   ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1771) 
						      << 0x14U) 
						     | ((0xff000U 
							 & (VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst 
										>> 0x1fU)))) 
							    << 0xcU)) 
							| (0x800U 
							   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst 
							      << 4U)))) 
						    | ((0x7e0U 
							& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst 
							   >> 0x14U)) 
						       | (0x1eU 
							  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst 
							     >> 7U))))
						    : 
						   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_jal)
						     ? 
						    ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1771) 
						       << 0x14U) 
						      | ((0xff000U 
							  & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst) 
							 | (0x800U 
							    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst 
							       >> 9U)))) 
						     | (0x7feU 
							& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_inst 
							   >> 0x14U)))
						     : 
						    ((0xfffffff0U 
						      & (VL_NEGATE_I((IData)(
									     (1U 
									      & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_rvc)
										 ? 2U
										 : 4U) 
										>> 3U)))) 
							 << 4U)) 
						     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_rvc)
							 ? 2U
							 : 4U)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_1 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_bypass_1)
	    ? ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data
	        : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
		    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_2
		    : ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_rs_lsb_1))
		        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_1
		        : 0U))) : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1445);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3103 
	= ((0xffff0000U & (((1U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ)))
			     ? ((1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ) 
					   >> 2U)) 
				       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3087) 
					  >> 0xfU)))
				 ? 0xffffU : 0U) : 
			    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_data 
			     >> 0x10U)) << 0x10U)) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3087));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_270 
	= (0x7fU & ((1U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_263) 
			   << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_263))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__prot_al 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__legal_address) 
	   & (VL_ULL(0) == (VL_ULL(0x40000000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__eff_array 
	= (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__legal_address) 
	      & ((((VL_ULL(0) == (VL_ULL(0xc8000000) 
				  & (QData)((IData)(
						    (0x8000000U 
						     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr))))) 
		   | (VL_ULL(0) == (VL_ULL(0xca000000) 
				    & (QData)((IData)(
						      (0x2000000U 
						       ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr)))))) 
		  | (VL_ULL(0) == (VL_ULL(0xca002000) 
				   & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr))))) 
		 | (VL_ULL(0) == (VL_ULL(0xc0000000) 
				  & (QData)((IData)(
						    (0x40000000U 
						     ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr)))))))
	      ? 3U : 0U) << 4U) | (((8U & ((IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_3 
						    >> 1U)) 
					   << 3U)) 
				    | (4U & ((IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_2 
						      >> 1U)) 
					     << 2U))) 
				   | ((2U & ((IData)(
						     (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_1 
						      >> 1U)) 
					     << 1U)) 
				      | (1U & (IData)(
						      (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__reg_entries_0 
						       >> 1U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_530 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__inWriteback)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_probe_way)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_hit_way));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_575 
	= (((((2U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr)
	       ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_562)
	       : 0U) | ((2U <= (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_typ)))
			 ? 3U : 0U)) << 2U) | ((2U 
						& vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr)
					        ? 0U
					        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_562)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_136 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Fpc
	    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___GEN_79);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_31 
	= (7U & ((3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___GEN_72)
			 ? ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___GEN_74))
			 : 2U)) - (1U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___GEN_79 
					 >> 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__xcpt_0_pf_inst 
	= ((1U & ((3U & ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__nBufValid))) 
		  - (IData)(1U))) ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT__buf___05Fxcpt_pf_inst)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___GEN_82));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_238 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_speculative) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_cacheable))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_xcpt));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_91 
	= (((QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___GEN_80)) 
	    << 0x20U) | (QData)((IData)(((0xffff0000U 
					  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___GEN_80 
					     << 0x10U)) 
					 | (0xffffU 
					    & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___GEN_80)))));
    vlTOPp->TestHarness__DOT___T_6 = (1U & ((IData)(vlTOPp->reset) 
					    | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT___T_69 
					       >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1044 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
	   & (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			 >> 0x22U))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumereq 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_45) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0) 
	      >> 0xbU));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_28 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_0__DOT__reg_0_q) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_0_q) 
	      + (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_45)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_322 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w1_i0__DOT__reg_0_q) 
	    << 0xbU) | ((0x80U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0__DOT___T_9) 
				  << 6U)) | (8U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0__DOT___T_9) 
						   << 3U))));
}
