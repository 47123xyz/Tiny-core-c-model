// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"      // For This
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__26(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__26\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__widx_bin__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_37));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__widx_bin__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT___T_37));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__debugInterrupts__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__debugIntNxt_0));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_28));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_0_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_1_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 1U)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_2_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 2U)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_3_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 3U)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_4_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 4U)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_5_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 5U)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_6_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 6U)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_7_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 7U)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_8_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 8U)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_9_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 9U)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_10_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0xaU)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_11_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0xbU)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_12_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0xcU)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_13_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0xdU)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_14_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0xeU)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_15_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0xfU)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_16_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0x10U)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_17_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0x11U)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_18_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0x12U)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_19_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0x13U)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_20_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0x14U)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_21_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0x15U)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_22_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0x16U)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_23_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0x17U)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_24_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0x18U)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_25_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0x19U)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_26_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0x1aU)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_27_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0x1bU)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_28_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0x1cU)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_29_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0x1dU)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_30_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0x1eU)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT__reg_31_q 
	= (1U & ((~ (IData)(vlTOPp->reset)) & (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___T_242 
					       >> 0x1fU)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncResetRegVec_w1_i0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q) 
					 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ready_reg__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
					 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT___T_37) 
					    != (1U 
						& (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_0__DOT__reg_0_q))))));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ready_reg__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
					 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_37) 
					    != (1U 
						& (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_0__DOT__reg_0_q))))));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__valid));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_1__DOT__reg_0_q));
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
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_2__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__source_extend__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__27(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__27\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_37));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__widx_bin__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_37));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_28));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_28));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncResetRegVec_w1_i0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q) 
	      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncResetRegVec_w1_i0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q) 
	      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w1_i0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_380) 
	      > (4U | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__threshold_0))));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0__DOT__reg_0_q 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT___T_102)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0__DOT__reg_1_q 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
		 & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT___T_102) 
		    >> 1U)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ready_reg__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q) 
	      & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_37) 
		 != (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_0__DOT__reg_0_q))))));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_28));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_28));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_45 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_2__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0__DOT___T_9 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0__DOT__reg_1_q) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT__AsyncResetRegVec_w2_i0__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_2__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__valid_reg__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__source_extend__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__source_extend__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ridx_gray__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT___T_6)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__30(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_combo__TOP__30\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_842 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_729)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT___T_831 
		     < vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_842 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_729)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT___T_831 
		     < vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1284 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1161)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1273 
		     < vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1276 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1153)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1265 
		     < vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1276 
	= (1U & ((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1153)) 
		   | (0U == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		  | (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1265 
		     < vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT__plusarg_reader__DOT__myplus)) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
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
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_821 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_size___05FT_55_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_798)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
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
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_728 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_714)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_728 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_714)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_799 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
	      ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_782)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_799 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
	      ? 1U : 0U) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_782)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
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
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1035 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1012)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1033 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_1010)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
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
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1061 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_param___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1044)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1056 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_1042)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
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
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT___T_9 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_296) 
	    < vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1137 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1114)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1142 
	= (((1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_2982) 
		   >> 2U)) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1116)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
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
    vlTOPp->TestHarness__DOT___T_6 = (1U & ((IData)(vlTOPp->reset) 
					    | (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT___T_69 
					       >> 1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__31(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__31\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_2__DOT__reg_0_q 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__32(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__32\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__source_extend__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_54)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_54)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_54)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__33(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__33\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp64,95,0,3);
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__int_sync_xing_sourcelzy__DOT___T_102 
	= (((vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__time__024 
	     >= vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__timecmp_0) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__ipi_0));
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
    __Vtemp64[0U] = ((0xff000000U & ((IData)((VL_ULL(0x3ffffffffff) 
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
    __Vtemp64[1U] = ((0xffffffU & ((IData)((VL_ULL(0x3ffffffffff) 
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
    __Vtemp64[2U] = (0xffffffU & ((IData)(((VL_ULL(0x3ffffffffff) 
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
	= __Vtemp64[0U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[1U] 
	= __Vtemp64[1U];
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[2U] 
	= __Vtemp64[2U];
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
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT___GEN_8 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT__ram_resp___05FT_55_data)
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_error___05FT_63_data)
	        ? 2U : 0U));
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
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_47 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_45) 
	   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
	      >> 1U));
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
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_26 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_addr___05FT_55_data
	    : vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data);
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
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_25 
	= (0xffU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
		     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_len___05FT_55_data)
		     : (~ (0x7fffffU & (((IData)(0x3ffU) 
					 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
					>> 2U)))));
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
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_317 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_308) 
	   & (~ (0xffffU & (((IData)(7U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			    >> 2U))));
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
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_22_param 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT__full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT__saved_param)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__ram_param___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__beatsDO_2 
	= (0x3ffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
		      ? (~ (0x1ffffffU & (((IData)(0xfffU) 
					   << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					  >> 2U))) : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__beatsDO_0 
	= (0xfU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
		    ? (~ (0x7ffffU & (((IData)(0x3fU) 
				       << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
				      >> 2U))) : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__beatsDO_1 
	= (0x3fU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))
		     ? (~ (0x1fffffU & (((IData)(0xffU) 
					 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
					>> 2U))) : 0U));
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
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__beatsAI_0 
	= (0x3ffU & ((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))
		      ? 0U : (~ (0x1ffffffU & (((IData)(0xfffU) 
						<< (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
					       >> 2U)))));
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
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_460 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? 0xfU : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_460 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? 0xfU : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_460 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__full)
	    ? 0xfU : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data));
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
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_307 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_245) 
		    - (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data) 
			     | (3U & (((IData)(1U) 
				       << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data))) 
				      >> 2U))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_285 
	= (0x3fU & ((0x3cU & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data)) 
		    | (3U & (~ (0x1fU & ((IData)(3U) 
					 << (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_318 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data)) 
	   & (0U != (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_extra___05FT_55_data) 
			     >> 2U))));
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
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:118665
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_380 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_374)
	    ? ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_363))
	        ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_363))
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_365));
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:118637
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__threshold_0 
	= (3U & vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___GEN_9);
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid 
	= ((IData)(vlTOPp->TestHarness__DOT__SimDTM__DOT_____05Fdebug_req_valid) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_0));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegBadHaltResume 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_cmdtype)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_108728) 
	      & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__haltedBitRegs_0))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__commandRegIsUnsupported 
	= (1U & ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDRdData_cmdtype)) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_108728))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_tl_error_0 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_0) 
	   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tag_array__DOT__tag_array_ext_RW0_rdata 
	      >> 0x14U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_313 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a))
	    ? (0U == ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
		       ^ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
			  << 2U)) & (~ (3U | (0xfffffffcU 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_544 
						 << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a) 
	       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_269)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_313 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a))
	    ? (0U == ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
		       ^ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr 
			  << 2U)) & (~ (3U | (0xfffffffcU 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_544 
						 << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a) 
	       & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_269)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_277 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a))
	    ? (0U == ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
		       ^ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
			  << 2U)) & (~ (3U | (0xfffffffcU 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_557 
						 << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_269)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_233))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_277 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a))
	    ? (0U == ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
		       ^ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr 
			  << 2U)) & (~ (3U | (0xfffffffcU 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_557 
						 << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_269)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_233))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_241 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a))
	    ? (0U == ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
		       ^ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
			  << 2U)) & (~ (3U | (0xfffffffcU 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_570 
						 << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_233)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_197))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_241 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a))
	    ? (0U == ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
		       ^ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr 
			  << 2U)) & (~ (3U | (0xfffffffcU 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_570 
						 << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_233)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_197))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_205 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a))
	    ? (0U == ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
		       ^ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
			  << 2U)) & (~ (3U | (0xfffffffcU 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_583 
						 << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_197)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_161))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_205 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a))
	    ? (0U == ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
		       ^ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr 
			  << 2U)) & (~ (3U | (0xfffffffcU 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_583 
						 << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_197)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_161))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_169 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a))
	    ? (0U == ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
		       ^ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
			  << 2U)) & (~ (3U | (0xfffffffcU 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_596 
						 << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_161)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_125))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_169 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a))
	    ? (0U == ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
		       ^ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr 
			  << 2U)) & (~ (3U | (0xfffffffcU 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_596 
						 << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_161)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_125))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_133 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a))
	    ? (0U == ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
		       ^ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
			  << 2U)) & (~ (3U | (0xfffffffcU 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_609 
						 << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_125)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_89))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_133 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a))
	    ? (0U == ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
		       ^ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr 
			  << 2U)) & (~ (3U | (0xfffffffcU 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_609 
						 << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_125)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_89))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_97 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a))
	    ? (0U == ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
		       ^ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
			  << 2U)) & (~ (3U | (0xfffffffcU 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_622 
						 << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_89)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_53))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_97 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a))
	    ? (0U == ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
		       ^ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr 
			  << 2U)) & (~ (3U | (0xfffffffcU 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_622 
						 << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_89)) 
		  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_53))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_61 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a))
	    ? (0U == ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
		       ^ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
			  << 2U)) & (~ (3U | (0xfffffffcU 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_635 
						 << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__pmp__DOT___T_53)) 
		  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_addr 
		     < (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
			<< 2U)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_61 
	= ((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a))
	    ? (0U == ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
		       ^ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
			  << 2U)) & (~ (3U | (0xfffffffcU 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_635 
						 << 2U))))))
	    : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a) 
	       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__tlb__DOT__pmp__DOT___T_53)) 
		  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s1_pc 
		     < (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr 
			<< 2U)))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_241 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_235)
	    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_237)
	    : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT___GEN_22));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_307 
	= (0x7fffffU & ((0xffU | ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT___GEN_21) 
				  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT___GEN_20)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_240 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_235)
	    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_239)
	    : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT___GEN_21));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_196 
	= (0x3ffU & ((1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__da_bits_opcode))
		      ? (~ (0x1ffffffU & (((IData)(0xfffU) 
					   << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__ram_size___05FT_55_data)) 
					  >> 2U))) : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_164[0U] 
	= (IData)((((QData)((IData)(((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__count)) 
				     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__neg_out)))) 
		    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[0U]))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_164[1U] 
	= ((0xfffffffeU & ((IData)((VL_ULL(0x1ffffffff) 
				    & (((QData)((IData)(
							vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[2U])) 
					<< 0x20U) | (QData)((IData)(
								    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[1U]))))) 
			   << 1U)) | (IData)(((((QData)((IData)(
								((2U 
								  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__count)) 
								 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__neg_out)))) 
						<< 0x20U) 
					       | (QData)((IData)(
								 vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[0U]))) 
					      >> 0x20U)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_164[2U] 
	= ((1U & ((IData)((VL_ULL(0x1ffffffff) & (((QData)((IData)(
								   vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[2U])) 
						   << 0x20U) 
						  | (QData)((IData)(
								    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[1U]))))) 
		  >> 0x1fU)) | (0xfffffffeU & ((IData)(
						       ((VL_ULL(0x1ffffffff) 
							 & (((QData)((IData)(
									     vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[2U])) 
							     << 0x20U) 
							    | (QData)((IData)(
									      vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT___T_124[1U])))) 
							>> 0x20U)) 
					       << 1U)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_356 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_350)
	    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_352)
	    : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT___GEN_22));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_422 
	= (0x7fffffU & ((0xffU | ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT___GEN_21) 
				  << 8U)) << (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT___GEN_20)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_355 
	= ((IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_350)
	    ? (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_354)
	    : (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT___GEN_21));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a_last 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_172)) 
	   | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT___T_169)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_127 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_108) 
		    << 3U) | (0xfffffff8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
					      << 2U) 
					     & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
						<< 3U))))) 
	    | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_108) 
		      << 2U) | (0xfffffffcU & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
						<< 1U) 
					       & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
						  << 2U)))))) 
	   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_105) 
		      | ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
			     >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))) 
		     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_105) 
				      | ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
					     >> 1U)) 
					 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_680 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_656_0) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT___GEN_8));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_685 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_656_1) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT___GEN_8));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_5 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue__DOT___GEN_13)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram___05FT_63_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT__ram___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_11 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT___GEN_9)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram___05FT_63_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1093 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT___GEN_9)
	     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1076_1)
	     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1076_0)) 
	   != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT__Queue_1__DOT___GEN_9)
	        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_672_1)
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_672_0)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_99 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_80) 
		    << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					      << 2U) 
					     & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 3U))))) 
	    | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_80) 
		      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 1U) 
					       & ((~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
						  << 2U)))))) 
	   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_77) 
		      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			     >> 1U)) & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_77) 
				      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					     >> 1U)) 
					 & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_99 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_80) 
		    << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					      << 2U) 
					     & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 3U))))) 
	    | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_80) 
		      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 1U) 
					       & ((~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
						  << 2U)))))) 
	   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_77) 
		      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			     >> 1U)) & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_77) 
				      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					     >> 1U)) 
					 & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_99 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_80) 
		    << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					      << 2U) 
					     & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 3U))))) 
	    | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_80) 
		      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 1U) 
					       & ((~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
						  << 2U)))))) 
	   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_77) 
		      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			     >> 1U)) & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_77) 
				      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					     >> 1U)) 
					 & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_52 
	= (((0xfffffff8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_47) 
			     << 3U) & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
				       << 1U))) | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_47) 
						   << 2U)) 
	   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bpu__DOT___T_45) 
	       << 1U) | (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1045 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1035) 
	   & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1050 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1018)) 
	    & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1035));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1048 
	= (((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1018)) 
	    & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_1035));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_4337 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1090) 
	   | (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_2191)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_1682 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_call) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__insn_break));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_638 
	= (0xfU & ((0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_630) 
			     << 1U)) | (0x1eU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_630) 
						 << 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_668 
	= (0xfU & ((0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_633) 
			     << 1U)) | (0x1eU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_633) 
						 << 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_27 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_id___05FT_55_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___GEN_21));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_24 
	= (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
		  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_size___05FT_55_data)
		  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_461)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT___GEN_18 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__maybe_full)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__Queue_1__DOT__ram_user___05FT_55_data)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_410));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_127 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_108) 
		    << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					      << 2U) 
					     & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 3U))))) 
	    | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_108) 
		      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 1U) 
					       & ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
						  << 2U)))))) 
	   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_105) 
		      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			     >> 1U)) & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_105) 
				      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					     >> 1U)) 
					 & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_127 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_108) 
		    << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					      << 2U) 
					     & (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 3U))))) 
	    | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_108) 
		      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 1U) 
					       & ((~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
						  << 2U)))))) 
	   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_105) 
		      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			     >> 1U)) & vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_105) 
				      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					     >> 1U)) 
					 & (~ vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_391 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_380)) 
	   | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_377)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_468 
	= (((0x13U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
	     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_757)
	     : ((0x12U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
		 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_757)
		 : ((0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
		     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_592)
		     : ((0x10U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
			 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_550)
			 : ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
			     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_715)
			     : ((0xeU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
				 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_715)
				 : ((0xdU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
				     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_715)
				     : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
					 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_715)
					 : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
					     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_715)
					     : ((0xaU 
						 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
						 ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_715)
						 : 
						((9U 
						  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
						  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_715)
						  : 
						 ((8U 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source___05FT_63_data))
						   ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_715)
						   : 
						  (((0U 
						     != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_634)) 
						    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_636) 
						       != 
						       (1U 
							& (~ 
							   ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data) 
							    >> 2U))))) 
						   | (8U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_634))))))))))))))) 
	   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_380)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_344 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_317)
	    ? vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_340_0
	    : vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_data___05FT_63_data);
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1031 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1020)) 
	   | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1017)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_336 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi42tl__DOT___T_1036) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_314))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT___GEN_83 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__valid_0)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__fq__DOT__elts_0_xcpt_ae_inst)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___GEN_16));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_error 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_511)
	    : (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_resp___05FT_63_data)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_size 
	= (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
		    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_80) 
		       >> 5U) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_95) 
				 >> 5U)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_source 
	= (0x1fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
		     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_80)
		     : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___GEN_95)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_512 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_81)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_511));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_547 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_81)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT___T_177_param 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT__state))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT__acq_param)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_22_param));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT___T_177_opcode 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT__state))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dtim_adapter__DOT__acq_opcode)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_22_opcode));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_99 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_80) 
		    << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
					      << 2U) 
					     & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 3U))))) 
	    | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_80) 
		      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 1U) 
					       & ((~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data) 
						  << 2U)))))) 
	   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_77) 
		      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			     >> 1U)) & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_77) 
				      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
					     >> 1U)) 
					 & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_99 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_80) 
		    << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
					      << 2U) 
					     & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 3U))))) 
	    | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_80) 
		      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 1U) 
					       & ((~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data) 
						  << 2U)))))) 
	   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_77) 
		      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			     >> 1U)) & vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_77) 
				      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
					     >> 1U)) 
					 & (~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_363 
	= ((2U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_22_size))
	    ? 2U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_22_size));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_389 
	= (0xfU & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_381))
		    ? (~ (0x7ffU & (((IData)(0x3fU) 
				     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_22_size)) 
				    >> 2U))) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_381) 
						- (IData)(1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_35440 
	= ((((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_460))
	      ? 0xffU : 0U) << 0x18U) | ((((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_460))
					    ? 0xffU
					    : 0U) << 0x10U) 
					 | ((((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_460))
					       ? 0xffU
					       : 0U) 
					     << 8U) 
					    | ((1U 
						& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_460))
					        ? 0xffU
					        : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT___T_738 
	= ((((8U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_460))
	      ? 0xffU : 0U) << 0x18U) | ((((4U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_460))
					    ? 0xffU
					    : 0U) << 0x10U) 
					 | ((((2U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_460))
					       ? 0xffU
					       : 0U) 
					     << 8U) 
					    | ((1U 
						& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_460))
					        ? 0xffU
					        : 0U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_127 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_108) 
		    << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					      << 2U) 
					     & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 3U))))) 
	    | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_108) 
		      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 1U) 
					       & ((~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
						  << 2U)))))) 
	   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_105) 
		      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			     >> 1U)) & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_105) 
				      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					     >> 1U)) 
					 & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_127 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_108) 
		    << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					      << 2U) 
					     & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 3U))))) 
	    | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_108) 
		      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 1U) 
					       & ((~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
						  << 2U)))))) 
	   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_105) 
		      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			     >> 1U)) & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_105) 
				      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					     >> 1U)) 
					 & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_127 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_108) 
		    << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					      << 2U) 
					     & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 3U))))) 
	    | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_108) 
		      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 1U) 
					       & ((~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
						  << 2U)))))) 
	   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_105) 
		      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			     >> 1U)) & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_105) 
				      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					     >> 1U)) 
					 & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_127 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_108) 
		    << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					      << 2U) 
					     & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 3U))))) 
	    | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_108) 
		      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 1U) 
					       & ((~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
						  << 2U)))))) 
	   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_105) 
		      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			     >> 1U)) & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_105) 
				      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					     >> 1U)) 
					 & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_127 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_108) 
		    << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					      << 2U) 
					     & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 3U))))) 
	    | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_108) 
		      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 1U) 
					       & ((~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
						  << 2U)))))) 
	   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_105) 
		      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			     >> 1U)) & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_105) 
				      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					     >> 1U)) 
					 & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_127 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_108) 
		    << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					      << 2U) 
					     & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 3U))))) 
	    | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_108) 
		      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 1U) 
					       & ((~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
						  << 2U)))))) 
	   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_105) 
		      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			     >> 1U)) & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_105) 
				      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					     >> 1U)) 
					 & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_127 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_108) 
		    << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					      << 2U) 
					     & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 3U))))) 
	    | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_108) 
		      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 1U) 
					       & ((~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
						  << 2U)))))) 
	   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_105) 
		      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			     >> 1U)) & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_105) 
				      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					     >> 1U)) 
					 & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_127 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_108) 
		    << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					      << 2U) 
					     & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 3U))))) 
	    | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_108) 
		      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 1U) 
					       & ((~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
						  << 2U)))))) 
	   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_105) 
		      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			     >> 1U)) & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_105) 
				      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					     >> 1U)) 
					 & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_127 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_108) 
		    << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					      << 2U) 
					     & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 3U))))) 
	    | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_108) 
		      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 1U) 
					       & ((~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data) 
						  << 2U)))))) 
	   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_105) 
		      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
			     >> 1U)) & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_105) 
				      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data 
					     >> 1U)) 
					 & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_383 
	= ((2U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_size))
	    ? 2U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_size));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_409 
	= (0xfU & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_401))
		    ? (~ (0x7ffU & (((IData)(0x3fU) 
				     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_size)) 
				    >> 2U))) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_401) 
						- (IData)(1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_383 
	= ((2U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_size))
	    ? 2U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_size));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_409 
	= (0xfU & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_401))
		    ? (~ (0x7ffU & (((IData)(0x3fU) 
				     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_size)) 
				    >> 2U))) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_401) 
						- (IData)(1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_383 
	= ((2U < (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT___T_22_size))
	    ? 2U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT___T_22_size));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_409 
	= (0xfU & ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_401))
		    ? (~ (0x7ffU & (((IData)(0x3fU) 
				     << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT___T_22_size)) 
				    >> 2U))) : ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_401) 
						- (IData)(1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_615 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_614));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_552 
	= ((~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_409) 
	   | (7U & (~ (0x3ffU & ((IData)(7U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT___GEN_22))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_501 
	= (0xffU & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_409 
		     >> 3U) | (0x1feU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_409 
					 >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_479 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_408) 
	   | (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_408) 
		       >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_489 
	= (0xffU & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_408)) 
		    | (0x1feU & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_408)) 
				 << 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___GEN_168 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_phys)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3026)
	       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_read) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3025_ae_ld))
	       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3025_ae_ld)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_790 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write) 
	    << 3U) | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write) 
			 | (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
			| (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))) 
		       << 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_hit_state_state)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_uncached)
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write)
	        ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_read)
		    ? ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
		        ? 3U : ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
				 ? 3U : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
					  ? 3U : ((0xbU 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						   ? 3U
						   : 
						  ((8U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						    ? 2U
						    : 
						   ((0xcU 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						     ? 2U
						     : 
						    ((0xdU 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						      ? 2U
						      : 
						     ((0xeU 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						       ? 2U
						       : 
						      ((0xfU 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						        ? 2U
						        : 0U)))))))))
		    : 0U) : 4U) : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_param 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_uncached)
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write)
	        ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_read)
		    ? ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
		        ? 3U : ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
				 ? 0U : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
					  ? 1U : ((0xbU 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						   ? 2U
						   : 
						  ((8U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						    ? 4U
						    : 
						   ((0xcU 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						     ? 0U
						     : 
						    ((0xdU 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						      ? 1U
						      : 
						     ((0xeU 
						       == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						       ? 2U
						       : 
						      ((0xfU 
							== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						        ? 3U
						        : 0U)))))))))
		    : 0U) : 0U) : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_size 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_uncached)
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write)
	        ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_read)
		    ? ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
		        ? (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))
		        : ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
			    ? (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))
			    : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
			        ? (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))
			        : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
				    ? (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))
				    : ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
				        ? (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))
				        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
					    ? (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))
					    : ((0xdU 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
					        ? (3U 
						   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))
					        : (
						   (0xeU 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						    ? 
						   (3U 
						    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))
						    : 
						   ((0xfU 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						     ? 
						    (3U 
						     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ))
						     : 0U)))))))))
		    : (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ)))
	        : (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_typ)))
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_address 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_uncached)
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write)
	        ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_read)
		    ? ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
		        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr
		        : ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
			    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr
			    : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
			        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr
			        : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
				    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr
				    : ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
				        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr
				        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
					    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr
					    : ((0xdU 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
					        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr
					        : (
						   (0xeU 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr
						    : 
						   ((0xfU 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						     ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr
						     : 0U)))))))))
		    : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr)
	        : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr)
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___GEN_169 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_phys)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3026)
	       ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3025_ae_st))
	       : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3025_ae_st)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___GEN_0 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_275)
	    ? 4U : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_381 
	= ((~ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_241) 
	   | (7U & (~ (0x3ffU & ((IData)(7U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT___GEN_22))))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_330 
	= (0xffU & ((vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_241 
		     >> 3U) | (0x1feU & (vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_241 
					 >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_308 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_240) 
	   | (0x7fU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_240) 
		       >> 1U)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_318 
	= (0xffU & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_240)) 
		    | (0x1feU & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT___T_240)) 
				 << 1U))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_127 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_108) 
		    << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
					      << 2U) 
					     & (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 3U))))) 
	    | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_108) 
		      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 1U) 
					       & ((~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data) 
						  << 2U)))))) 
	   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_105) 
		      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			     >> 1U)) & vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_105) 
				      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
					     >> 1U)) 
					 & (~ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_355 
	= ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_302)
	    : ((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode___05FT_63_data)) 
	       | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_302)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_79 
	= (((8U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_60) 
		    << 3U) | (0xfffffff8U & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
					      << 2U) 
					     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 3U))))) 
	    | (4U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_60) 
		      << 2U) | (0xfffffffcU & ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
						<< 1U) 
					       & ((~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data) 
						  << 2U)))))) 
	   | ((2U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_57) 
		      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
			     >> 1U)) & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)) 
		     << 1U)) | (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_57) 
				      | ((~ (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data 
					     >> 1U)) 
					 & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_250 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__r_full));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__do_enq 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__r_full));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__in_ar_ready 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT___T_44)) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__r_full))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__do_deq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT___T_41 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT___GEN_13 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_3__DOT__empty)) 
		 | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_200 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__w_full));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__do_enq 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__w_full));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT___T_237 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT___T_44)) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__sram__DOT__w_full))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_473 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_472));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__do_deq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT___T_41 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT___GEN_7 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_1__DOT__empty)) 
		 | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_2__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2558 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2555)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT___T_44)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__do_deq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT___T_41 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT___GEN_13 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue__DOT__empty)) 
		 | (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT__Queue_1__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__do_enq 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT___T_44)) 
	   & ((~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__empty)) 
	      & (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_user___05FT_63_data)));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_525 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT___T_44)) 
		 | (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_2__DOT__ram_user___05FT_63_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
		  ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_575)
		  : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__do_deq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__maybe_full)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__do_enq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__maybe_full)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_695 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__a__DOT__maybe_full)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2376 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2373)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT___T_44)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__do_deq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__do_enq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1121 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1121 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1121 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_337 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__widget__DOT___T_314));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1907 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1904)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT___T_44)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2195 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_2192)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT___T_44)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_663 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_660)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT___T_44)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___GEN_97 
	= ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
	   & ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
	      & ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		 & ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		    & ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		       & ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
			  & ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
			     & ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
				& ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
				   & ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
				      & ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
					 & ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
					     ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT___T_44))
					     : ((3U 
						 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						 ? 
						(~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT___T_44))
						 : 
						((2U 
						  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						  ? 
						 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT___T_44))
						  : 
						 ((1U 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						   ? 
						  (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT___T_44))
						   : 
						  (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT___T_44)))))))))))))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__do_enq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__empty))));
    vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__do_deq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__mmio_mem__DOT__axi4buf__DOT__Queue_4__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT__do_enq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue__DOT___T_44)) 
		 & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__empty)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT__do_enq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_1__DOT___T_44)) 
		 & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		     >> 1U) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__empty)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT__do_enq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_2__DOT___T_44)) 
		 & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		     >> 2U) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__empty)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT__do_enq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_3__DOT___T_44)) 
		 & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		     >> 3U) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__empty)))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT__do_enq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__Queue_4__DOT___T_44)) 
		 & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		     >> 4U) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__empty)))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_297 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT___T_44)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_296)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1907 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
		 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		       >> 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1908 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__empty)) 
	   & (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1837 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
		 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		       >> 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1838 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
	   & (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_493 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_575));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_499 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_595 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT___T_44)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_575));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1872 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
		 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
		       >> 4U))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1873 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__empty)) 
	   & (4U == (7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue_1__DOT__ram_source___05FT_63_data) 
			   >> 2U))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__do_enq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__do_deq 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_1051 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_1051 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_1051 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT___T_44)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__empty))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1556 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
	   & (VL_ULL(0) == (VL_ULL(0xc0000000) & (QData)((IData)(
								 (0x40000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1557 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
	   & (VL_ULL(0) == (VL_ULL(0xca002000) & (QData)((IData)(
								 (0x2000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT___T_1555 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__empty)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__requestAIO_0_0));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_18 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__empty)) 
		 | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT__full)));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_1 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue__DOT___GEN_25)
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT___T_44))
		  : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue__DOT___T_44))));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT___GEN_7 
	= (1U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4frag__DOT__Queue_1__DOT___GEN_25)
		  ? (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___T_44))
		  : (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___T_44))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_834 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT___T_831)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT___T_44)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
	   & (VL_ULL(0) == (VL_ULL(0x8a000000) & (QData)((IData)(
								 (0x80000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
	   & (VL_ULL(0) == (VL_ULL(0x88000000) & (QData)((IData)(
								 (0x8000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
	   & (VL_ULL(0) == (VL_ULL(0x8a000000) & (QData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_1_a_valid 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
	   & (VL_ULL(0) == (VL_ULL(0x8a000000) & (QData)((IData)(
								 (0x2000000U 
								  ^ vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1068 
	= ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1065)) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT___T_44)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__do_enq 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT___T_44)) 
	   & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
	      & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_261)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_265 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__empty)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT___T_261))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_292 
	= (0x7fU & ((1U | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_285) 
			   << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_285))));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__maybe_full) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_318)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__d_last 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2627)) 
	   | (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2624)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_846 
	= ((((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)) 
	     | (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	    | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_845));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_884 
	= ((((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)) 
	     | (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	    | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_845));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_1434 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_read) 
	   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_write) 
	      & (0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_mask 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_uncached)
	    ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_write)
	        ? ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_read)
		    ? ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
		        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask)
		        : ((9U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
			    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask)
			    : ((0xaU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
			        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask)
			        : ((0xbU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
				    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask)
				    : ((8U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
				        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask)
				        : ((0xcU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
					    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask)
					    : ((0xdU 
						== (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
					        ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask)
					        : (
						   (0xeU 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask)
						    : 
						   ((0xfU 
						     == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_cmd))
						     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask)
						     : 0U)))))))))
		    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask))
	        : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__get_mask))
	    : 0U);
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_op1 
	= ((1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_alu1))
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_0
	    : ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_alu1))
	        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_pc
	        : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__lhs_sign 
	= (((0U == (6U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))) 
	    | (0U == (1U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)))) 
	   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_0 
	      >> 0x1fU));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1869 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_ctrl_jalr) 
	    | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__mem_reg_sfence))
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__bypass_mux_1
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1865));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1999 
	= ((0xffff0000U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_1 
			   << 0x10U)) | (0xffffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1994 
	= ((0xff00U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_1 
		       << 8U)) | (0xffU & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_1));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__div__DOT__rhs_sign 
	= (((0U == (6U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn))) 
	    | (4U == (5U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_alu_fn)))) 
	   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_1 
	      >> 0x1fU));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_op2 
	= ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_alu2))
	    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_rs_1
	    : ((3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_alu2))
	        ? (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1451) 
		      << 0x1fU) | (0x7ff00000U & ((
						   (2U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm))
						    ? 
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
						    >> 0x14U)
						    : 
						   VL_NEGATE_I((IData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1451)))) 
						  << 0x14U))) 
		    | ((0xff000U & ((((2U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)) 
				      & (3U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)))
				      ? VL_NEGATE_I((IData)((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1451)))
				      : (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
					 >> 0xcU)) 
				    << 0xcU)) | (0x800U 
						 & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1469)) 
						     & ((3U 
							 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm))
							 ? 
							(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
							 >> 0x14U)
							 : 
							((1U 
							  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm))
							  ? 
							 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
							  >> 7U)
							  : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1451)))) 
						    << 0xbU)))) 
		   | ((0x7e0U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1469)
				   ? 0U : (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
					   >> 0x19U)) 
				 << 5U)) | ((0x1eU 
					     & (((2U 
						  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm))
						  ? 0U
						  : 
						 (((0U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)) 
						   | (1U 
						      == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)))
						   ? 
						  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
						   >> 8U)
						   : 
						  ((5U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm))
						    ? 
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
						    >> 0x10U)
						    : 
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
						    >> 0x15U)))) 
						<< 1U)) 
					    | (1U & 
					       ((0U 
						 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm))
						 ? 
						(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
						 >> 7U)
						 : 
						((4U 
						  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm))
						  ? 
						 (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
						  >> 0x14U)
						  : 
						 ((5U 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_ctrl_sel_imm)) 
						  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ex_reg_inst 
						     >> 0xfU))))))))
	        : ((0xfffffff0U & (VL_NEGATE_I((IData)(
						       (1U 
							& ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1546) 
							   >> 3U)))) 
				   << 4U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT___T_1546))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3107 
	= (0xffU & ((1U & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_req_addr)
		     ? (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3103 
			>> 8U) : vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_3103));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_275 
	= (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_270) 
			  >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_270)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__ae_array 
	= (((0U != vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT___T_795)
	     ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tlb__DOT__eff_array)
	     : 0U) | (((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)) 
		       | (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd)))
		       ? 0x3fU : 0U));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_mask 
	= ((0x11U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s1_req_cmd))
	    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcacheArb__DOT___GEN_8)
	    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_575));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_261 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_tag_disparity) 
	   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_238) 
	       & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_470))) 
	      & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_xcpt))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_246 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_240) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_valid)) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_470) 
	      | ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__s2_tlb_resp_miss)) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_238))));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_miss 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_valid) 
	     & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__s2_hit))) 
	    & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT___T_238))) 
	   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT___T_165)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_93 
	= ((0xffff0000U & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_91 
				    >> 0x30U)) << 0x10U)) 
	   | (0xffffU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__ibuf__DOT___T_91 
				 >> 0x30U))));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_365 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__pending_2) 
	     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__enables_0_2)) 
	    << 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__priority_2));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT___T_363 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__pending_1) 
	     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__enables_0_1)) 
	    << 2U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__priority_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__34(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__34\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_48 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__ready_reg__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1044 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
	   & (~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			 >> 0x22U))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmactiveSync__DOT__AsyncResetSynchronizerShiftReg_w1_d3_i0__DOT__sync_0__DOT__reg_0_rst 
	= (1U & (~ vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROL__DOT___T_69));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT___T_37));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__widx_gray__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT___T_37));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__ridx_gray__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_28));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1327 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1044) 
	   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_1_a_valid));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1258 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_1_a_valid) 
	    << 1U) | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1044));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__35(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__35\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__source_extend__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_1__DOT__source_extend__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_1__DOT__sink_extend__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__sink_valid__DOT__sync_1__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__sink_valid__DOT__sync_3__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__sink_valid__DOT__sync_2__DOT__reg_0_q 
	= ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59)) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__sink_valid__DOT__sync_3__DOT__reg_0_q));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync__DOT__source_valid__DOT__sync_3__DOT__reg_0_q 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__sink_valid__DOT__sync_3__DOT__reg_0_q 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59)));
    // ALWAYS at /home/test/RISC-V/rocket-chip/vsrc/AsyncResetReg.v:71
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync__DOT__sink_valid__DOT__sync_3__DOT__reg_0_q 
	= (1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__36(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__36\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_48 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__ready_reg__DOT__reg_0_q) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT__AsyncValidSync_2__DOT__sink_valid__DOT__sync_0__DOT__reg_0_q));
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
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_28 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_48) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1081 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_48) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_1011 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_48) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___T_7958 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53) 
	   & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_48));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_28 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_0__DOT__reg_0_q) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__ridx_bin__DOT__reg_0_q) 
	      + ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSource__DOT___T_48) 
		 & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_53))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__DMSTATUSRdData_allresumeack 
	= (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeReqRegs_0)) 
		 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumereq))));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__valid 
	= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__AsyncValidSync_2__DOT__source_valid__DOT__sync_0__DOT__reg_0_q) 
	   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT___T_28) 
	      != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__AsyncQueueSink__DOT__widx_gray__DOT__sync_0__DOT__reg_0_q)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__pending_interrupts 
	= (0x888U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_322) 
		     & vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mie));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_2498 
	= (((((((((((((((QData)((IData)((((((((((((
						   ((((0x7a1U 
						       == 
						       (0xfffU 
							& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
							   >> 0x14U)))
						       ? 
						      (0x20800040U 
						       | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode) 
							    << 0x1bU) 
							   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action) 
							       << 0xcU) 
							      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch) 
								 << 7U))) 
							  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_x) 
							      << 2U) 
							     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_w) 
								 << 1U) 
								| (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_r)))))
						       : 0U) 
						     | ((0x7a2U 
							 == 
							 (0xfffU 
							  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
							     >> 0x14U)))
							 ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_bp_0_address
							 : 0U)) 
						    | ((0x301U 
							== 
							(0xfffU 
							 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
							    >> 0x14U)))
						        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_misa
						        : 0U)) 
						   | ((0x300U 
						       == 
						       (0xfffU 
							& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
							   >> 0x14U)))
						       ? 
						      ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpp) 
							 << 0xbU) 
							| (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_spp) 
							    << 8U) 
							   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mpie) 
							      << 7U))) 
						       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mstatus_mie) 
							  << 3U))
						       : 0U)) 
						  | ((0x305U 
						      == 
						      (0xfffU 
						       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
							  >> 0x14U)))
						      ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mtvec
						      : 0U)) 
						 | ((0x344U 
						     == 
						     (0xfffU 
						      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
							 >> 0x14U)))
						     ? 
						    (0x888U 
						     & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_322))
						     : 0U)) 
						| ((0x304U 
						    == 
						    (0xfffU 
						     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
							>> 0x14U)))
						    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mie
						    : 0U)) 
					       | ((0x340U 
						   == 
						   (0xfffU 
						    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						       >> 0x14U)))
						   ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mscratch
						   : 0U)) 
					      | ((0x341U 
						  == 
						  (0xfffU 
						   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						      >> 0x14U)))
						  ? 
						 (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_692)
						  : 0U)) 
					     | ((0x343U 
						 == 
						 (0xfffU 
						  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						     >> 0x14U)))
						 ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mbadaddr
						 : 0U)) 
					    | ((0x342U 
						== 
						(0xfffU 
						 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						    >> 0x14U)))
					        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_mcause
					        : 0U)) 
					   | ((0x7b0U 
					       == (0xfffU 
						   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						      >> 0x14U)))
					       ? (0x40000000U 
						  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreakm) 
						      << 0xfU) 
						     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_cause) 
							 << 6U) 
							| (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_step) 
							    << 2U) 
							   | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dcsr_prv)))))
					       : 0U)) 
					  | ((0x7b1U 
					      == (0xfffU 
						  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						     >> 0x14U)))
					      ? (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_712)
					      : 0U)) 
					 | ((0x7b2U 
					     == (0xfffU 
						 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						    >> 0x14U)))
					     ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_dscratch
					     : 0U)))) 
			| ((0xb00U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						 >> 0x14U)))
			    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_296
			    : VL_ULL(0))) | ((0xb02U 
					      == (0xfffU 
						  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						     >> 0x14U)))
					      ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_283
					      : VL_ULL(0))) 
		      | (QData)((IData)(((0xb80U == 
					  (0xfffU & 
					   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					    >> 0x14U)))
					  ? (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_296 
						     >> 0x20U))
					  : 0U)))) 
		     | (QData)((IData)(((0xb82U == 
					 (0xfffU & 
					  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					   >> 0x14U)))
					 ? (IData)(
						   (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT___T_283 
						    >> 0x20U))
					 : 0U)))) | (QData)((IData)(
								    ((0x3a0U 
								      == 
								      (0xfffU 
								       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
									  >> 0x14U)))
								      ? 
								     ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l) 
									  << 0x1fU) 
									 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_a) 
									    << 0x1bU)) 
									| (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_x) 
									    << 0x1aU) 
									   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_w) 
									       << 0x19U) 
									      | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_r) 
										<< 0x18U)))) 
								       | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l) 
									    << 0x17U) 
									   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_a) 
									      << 0x13U)) 
									  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_x) 
									      << 0x12U) 
									     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_w) 
										<< 0x11U) 
										| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_r) 
										<< 0x10U))))) 
								      | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l) 
									    << 0xfU) 
									   | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_a) 
									      << 0xbU)) 
									  | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_x) 
									      << 0xaU) 
									     | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_w) 
										<< 9U) 
										| ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_r) 
										<< 8U)))) 
									 | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l) 
									      << 7U) 
									     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_a) 
										<< 3U)) 
									    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_x) 
										<< 2U) 
									       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_w) 
										<< 1U) 
										| (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_r))))))
								      : 0U)))) 
		   | (QData)((IData)(((0x3a1U == (0xfffU 
						  & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						     >> 0x14U)))
				       ? ((((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l) 
					      << 0x1fU) 
					     | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_a) 
						<< 0x1bU)) 
					    | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_x) 
						<< 0x1aU) 
					       | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_w) 
						   << 0x19U) 
						  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_r) 
						     << 0x18U)))) 
					   | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l) 
						<< 0x17U) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_a) 
						  << 0x13U)) 
					      | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_x) 
						  << 0x12U) 
						 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_w) 
						     << 0x11U) 
						    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_r) 
						       << 0x10U))))) 
					  | (((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l) 
						<< 0xfU) 
					       | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_a) 
						  << 0xbU)) 
					      | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_x) 
						  << 0xaU) 
						 | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_w) 
						     << 9U) 
						    | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_r) 
						       << 8U)))) 
					     | ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l) 
						  << 7U) 
						 | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_a) 
						    << 3U)) 
						| (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_x) 
						    << 2U) 
						   | (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_w) 
						       << 1U) 
						      | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_r))))))
				       : 0U)))) | (QData)((IData)(
								  ((0x3b0U 
								    == 
								    (0xfffU 
								     & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
									>> 0x14U)))
								    ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_0_addr
								    : 0U)))) 
		 | (QData)((IData)(((0x3b1U == (0xfffU 
						& (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						   >> 0x14U)))
				     ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_1_addr
				     : 0U)))) | (QData)((IData)(
								((0x3b2U 
								  == 
								  (0xfffU 
								   & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
								      >> 0x14U)))
								  ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_2_addr
								  : 0U)))) 
	       | (QData)((IData)(((0x3b3U == (0xfffU 
					      & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
						 >> 0x14U)))
				   ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_3_addr
				   : 0U)))) | (QData)((IData)(
							      ((0x3b4U 
								== 
								(0xfffU 
								 & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
								    >> 0x14U)))
							        ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_4_addr
							        : 0U)))) 
	     | (QData)((IData)(((0x3b5U == (0xfffU 
					    & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					       >> 0x14U)))
				 ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_5_addr
				 : 0U)))) | (QData)((IData)(
							    ((0x3b6U 
							      == 
							      (0xfffU 
							       & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
								  >> 0x14U)))
							      ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_6_addr
							      : 0U)))) 
	   | (QData)((IData)(((0x3b7U == (0xfffU & 
					  (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__wb_reg_inst 
					   >> 0x14U)))
			       ? vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__core__DOT__csr__DOT__reg_pmp_7_addr
			       : 0U))));
}

VL_INLINE_OPT void VTestHarness::_combo__TOP__39(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_combo__TOP__39\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1211 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_1_a_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_1_a_valid)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_811 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__da_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_794)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_677 
	= (((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_155) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				& (QData)((IData)((0x3000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_374 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_317) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_155) 
		  | (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				   & (QData)((IData)(
						     (0x60000000U 
						      ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_478 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_317) 
	     | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_155))) 
	    | ((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				& (QData)((IData)((0x60000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_677 
	= (((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_155) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				& (QData)((IData)((0x3000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_374 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_317) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_155) 
		  | (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				   & (QData)((IData)(
						     (0x60000000U 
						      ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_478 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_317) 
	     | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_155))) 
	    | ((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				& (QData)((IData)((0x60000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_677 
	= (((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_155) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				& (QData)((IData)((0x3000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_374 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_317) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_155) 
		  | (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				   & (QData)((IData)(
						     (0x60000000U 
						      ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_478 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_317) 
	     | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_155))) 
	    | ((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				& (QData)((IData)((0x60000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_340 
	= (((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_167)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_553 
	= (((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_167)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT___T_431 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT__full)) 
		  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__fragmenter_1__DOT__Repeater__DOT___T_22_opcode) 
		     >> 2U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_677 
	= (((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_155) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				& (QData)((IData)((0x3000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_374 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_317) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_155) 
		  | (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				   & (QData)((IData)(
						     (0x60000000U 
						      ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_478 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_317) 
	     | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_155))) 
	    | ((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				& (QData)((IData)((0x60000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_677 
	= (((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_155) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				& (QData)((IData)((0x3000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_374 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_317) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_155) 
		  | (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				   & (QData)((IData)(
						     (0x60000000U 
						      ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_478 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_317) 
	     | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_155))) 
	    | ((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				& (QData)((IData)((0x60000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_649 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_632)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_649 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT___T_22_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_632)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_649 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_632)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_448 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode) 
		     >> 2U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_644 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_630)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_448 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode) 
		     >> 2U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_799 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_782)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_799 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_782)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_644 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_630)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_715 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_698)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_448 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT__full)) 
		  | ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode) 
		     >> 2U)) | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_799 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_782)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_799 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_782)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_644 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_630)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_715 
	= (((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_698)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_657 
	= (((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	    & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_135) 
	       | (VL_ULL(0) == (VL_ULL(0x1fffff000) 
				& (QData)((IData)((0x3000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_354 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_297) 
	    | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_135) 
		  | (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				   & (QData)((IData)(
						     (0x60000000U 
						      ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data)))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_458 
	= ((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_297) 
	     | ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
		& (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_135))) 
	    | ((8U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_size___05FT_63_data)) 
	       & (VL_ULL(0) == (VL_ULL(0x1e0000000) 
				& (QData)((IData)((0x60000000U 
						   ^ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_address___05FT_63_data))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT___T_847 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__empty) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue_1__DOT__empty))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_1192 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__empty) 
	    | ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
	       & ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
		  & ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
		     & ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
			& ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
			   & ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
			      & ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
				 & ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
				    & ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
				       & ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
					  & ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data)) 
					     & ((4U 
						 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						 ? 
						(~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__empty))
						 : 
						((3U 
						  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						  ? 
						 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__empty))
						  : 
						 ((2U 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						   ? 
						  (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__empty))
						   : 
						  ((1U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_2__DOT__ram_id___05FT_63_data))
						    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT__maybe_full)
						    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT__maybe_full))))))))))))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT___T_770 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__empty) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__empty))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_388 
	= (((0xfU & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
			     >> 0x20U))) == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_75)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_585 
	= ((0U == (0xfU & ((IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
				    >> 0x20U)) & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor__DOT___T_75))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_997 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__empty) 
	    | ((0xfU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
	       & ((0xeU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		  & ((0xdU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
		     & ((0xcU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
			& ((0xbU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
			   & ((0xaU != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
			      & ((9U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
				 & ((8U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
				    & ((7U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
				       & ((6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
					  & ((5U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data)) 
					     & ((4U 
						 == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						 ? 
						(~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__empty))
						 : 
						((3U 
						  == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						  ? 
						 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__empty))
						  : 
						 ((2U 
						   == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						   ? 
						  (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__empty))
						   : 
						  ((1U 
						    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__Queue_4__DOT__ram_id___05FT_63_data))
						    ? (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__maybe_full)
						    : (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT__maybe_full))))))))))))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlSlaveXbar__DOT___T_747 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__empty) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue__DOT__empty))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__AsyncQueueSink__DOT___T_59 
	= ((IData)(vlTOPp->TestHarness__DOT___T_6) 
	   | (IData)(vlTOPp->reset));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___T_1135 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid)) 
		 | (IData)(vlTOPp->reset)));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_278 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_127)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_367 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_slave_named_Error__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__error__DOT__TLMonitor__DOT___T_127)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_393 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_604 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__front_bus_xbar__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_393 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_604 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_to_sbus__DOT__buffer__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_393 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_604 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__coupler_from_port_named_slave_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_278 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_127)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_367 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_127)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_278 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_127)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_367 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_127)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_826 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_error) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_793))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_826 
	= (1U & (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_error) 
		  | (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_793))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_809 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_786)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_809 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_786)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_554 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_source) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_source) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_source) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_source) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_554 
	= (((((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_source) 
			    >> 3U))) | (1U == (3U & 
					       ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_source) 
						>> 3U)))) 
	     | (9U == (0xfU & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_source) 
			       >> 1U)))) | (8U == (0xfU 
						   & ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_source) 
						      >> 1U)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_814 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_788)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_814 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_source) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_788)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_393 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_604 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__system_bus_xbar__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_393 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_99)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_604 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__fbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__master_splitter__DOT__TLMonitor__DOT___T_99)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_359 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_127)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_502 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_127)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_278 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_127)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_367 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_127)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_278 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_127)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_367 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_127)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_278 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_127)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_367 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT__TLMonitor__DOT___T_127)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_278 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_127)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_367 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__buffer__DOT__TLMonitor__DOT___T_127)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_278 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_127)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_367 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_127)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_278 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_127)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_367 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_127)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_278 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_127)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_367 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_tile_named_tile__DOT__buffer__DOT__TLMonitor__DOT___T_127)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_278 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_127)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_367 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_127)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_654 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_383)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__TLMonitor__DOT___T_634)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_654 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_383)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__TLMonitor_1__DOT___T_634)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_654 
	= (((3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_clint__DOT__fragmenter__DOT___T_383)) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__clint__DOT__TLMonitor__DOT___T_634)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1048 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1034)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1053 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_param) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1036)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1058 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_size) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1038)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_157 
	= ((0U == (0xfffU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_address 
			     & (~ (0x7ffffffU & ((IData)(0xfffU) 
						 << (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_size))))))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1068 
	= ((vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_address 
	    == vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1042) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_359 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_127)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_502 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__atomics__DOT__TLMonitor__DOT___T_127)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_373 
	= (((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
	    == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_79)) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_584 
	= ((0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue__DOT__ram_mask___05FT_63_data) 
		   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__TLMonitor__DOT___T_79)))) 
	   | (IData)(vlTOPp->TestHarness__DOT___T_6));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1356 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1281 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT___T_2649 
	= (1U & ((~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
		     & ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
			| (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))))) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1861 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1633 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1785 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
    vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1709 
	= (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_1_a_valid)) 
		  | (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_1_a_valid)) 
		 | (IData)(vlTOPp->TestHarness__DOT___T_6)));
}
