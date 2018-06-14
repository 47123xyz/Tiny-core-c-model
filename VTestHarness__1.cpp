// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"      // For This
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__15(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__15\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_error__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue_1__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_from_tile_named_tile__DOT__cork__DOT__Queue_1__DOT__ram_error__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_source__v0 = 0U;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:164022
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:164022
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1135))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:66 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:164033
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1135))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:164036: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",164036,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:164044
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1144))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:164055
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1144))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:164058: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",164058,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:164088
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1281))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:164099
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1281))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:164102: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",164102,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:164132
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1356))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:164143
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1356))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:164146: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",164146,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_error__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size__v0 = 0U;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172906
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172906
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172917
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:172920: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",172920,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172928
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172939
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:172942: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",172942,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172950
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172961
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:172964: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",172964,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172972
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((2U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					       >> 5U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172983
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((2U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					       >> 5U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:172986: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",172986,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:172994
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173005
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173008: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173008,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173016
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173027
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173030: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173030,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173038
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173049
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (6U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173052: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173052,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173060
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173071
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173074: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173074,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173082
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173093
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173096: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173096,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173104
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173115
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173118: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173118,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173126
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((2U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					       >> 5U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173137
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((2U <= (0xfU & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					       >> 5U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173140: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173140,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173148
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173159
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173162: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173162,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173170
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173181
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((2U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173184: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173184,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173192
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173203
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((0U != (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173206: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173206,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173214
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173225
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (7U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((0U == (0xfU & (~ vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[1U]))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173228: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173228,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173236
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_354))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173247
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_354))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173250: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173250,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173258
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173269
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173272: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173272,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173280
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173291
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173294: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173294,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173302
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173313
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173316: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173316,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173324
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_373))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173335
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (4U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_373))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173338: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173338,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173346
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_458))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173357
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_458))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173360: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173360,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173368
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173379
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173382: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173382,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173390
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173401
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173404: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173404,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173412
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173423
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173426: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173426,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173434
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_373))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173445
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_373))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173448: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173448,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173456
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_458))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173467
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_458))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173470: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173470,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173478
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173489
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173492: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173492,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173500
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173511
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173514: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173514,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173522
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173533
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((0U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173536: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173536,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173544
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_584))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173555
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (1U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_584))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173558: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173558,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173566
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_657))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173577
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_657))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173580: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173580,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173588
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173599
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173602: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173602,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173610
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173621
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173624: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173624,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173632
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173643
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((4U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173646: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173646,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173654
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_373))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173665
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (2U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_373))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173668: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173668,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173676
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_657))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173687
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_657))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173690: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173690,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173698
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173709
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173712: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173712,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173720
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173731
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173734: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173734,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173742
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173753
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((3U >= (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					     >> 9U))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173756: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173756,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173764
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_373))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173775
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (3U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_373))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173778: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173778,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173786
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_297) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173797
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_297) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173800: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173800,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173808
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_151))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173819
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_151))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173822: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173822,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173830
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_161))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173841
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_161))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173844: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173844,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173852
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_373))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173863
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (5U == (7U & (vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT___T_1230[2U] 
					  >> 0xcU)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_373))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173866: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173866,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173874
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			       & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
				     | (IData)(vlTOPp->TestHarness__DOT___T_6))))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173885
done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			       & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
				     | (IData)(vlTOPp->TestHarness__DOT___T_6))))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173888: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173888,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173896
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_882))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173907
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_882))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173910: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173910,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173918
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid sink ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:254 assert (sink_ok, \"'D' channel ReleaseAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173929
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173932: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173932,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173940
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173951
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173954: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173954,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173962
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:256 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173973
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173976: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173976,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173984
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_882))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:173995
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_882))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:173998: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",173998,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174006
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:261 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174017
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174020: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174020,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174028
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174039
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174042: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174042,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174050
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:263 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174061
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174064: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174064,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174072
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_882))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174083
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_882))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174086: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174086,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174094
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:268 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174105
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174108: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174108,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174116
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174127
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174130: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174130,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174138
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:270 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174149
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174152: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174152,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174160
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_882))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174171
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_882))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174174: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174174,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174182
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid sink ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:275 assert (sink_ok, \"'D' channel AccessAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174193
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174196: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174196,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174204
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:277 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174215
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174218: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174218,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174226
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_882))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174237
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_882))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174240: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174240,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174248
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid sink ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:282 assert (sink_ok, \"'D' channel AccessAckData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174259
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174262: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174262,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174270
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:284 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174281
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174284: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174284,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174292
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_882))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174303
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_882))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174306: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174306,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174314
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid sink ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:289 assert (sink_ok, \"'D' channel HintAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174325
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174328: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174328,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174336
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:291 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174347
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174350: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174350,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174424
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1025))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1056))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174435
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1025))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1056))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174438: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174438,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174446
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1025))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1061))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174457
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1025))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1061))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174460: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174460,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174468
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1025))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1066))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174479
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1025))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1066))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174482: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174482,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174490
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1025))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1071))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174501
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1025))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1071))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174504: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174504,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174512
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1025))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1076))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174523
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1025))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1076))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174526: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174526,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174534
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1127))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174545
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1127))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174548: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174548,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174556
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1132))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174567
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1132))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174570: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174570,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174578
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1137))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174589
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1137))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174592: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174592,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174600
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1142))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174611
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1142))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174614: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174614,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174622
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1147))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174633
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1147))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174636: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174636,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174644
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174655
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1093))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174658: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174658,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174666
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1011) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1176))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1234))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174677
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1011) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1176))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1234))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174680: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174680,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174688
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1081) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1204))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1255))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174699
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1081) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1204))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1255))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174702: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174702,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174710
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1265))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 5 (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:439 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174721
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1265))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174724: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174724,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174732
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1284))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at RocketSubsystem.scala:88:7)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:174743
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__TLMonitor__DOT___T_1284))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:174746: Assertion failed in %NTestHarness.dut.tile.sync_xing.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",174746,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode__v0 = 0U;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:36846
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:36846
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_609))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:69 assert (!dec || count =/= UInt(0))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:36857
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_609))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:36860: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.axi4deint\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",36860,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:36868
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_618))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:70 assert (!inc || count =/= UInt(beats))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:36879
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_618))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:36882: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.axi4deint\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",36882,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:36890
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_646))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:69 assert (!dec || count =/= UInt(0))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:36901
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_646))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:36904: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.axi4deint\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",36904,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:36912
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_655))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:70 assert (!inc || count =/= UInt(beats))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:36923
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_655))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:36926: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.axi4deint\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",36926,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:36934
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_683))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:69 assert (!dec || count =/= UInt(0))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:36945
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_683))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:36948: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.axi4deint\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",36948,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:36956
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_692))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:70 assert (!inc || count =/= UInt(beats))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:36967
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_692))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:36970: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.axi4deint\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",36970,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:36978
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_720))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:69 assert (!dec || count =/= UInt(0))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:36989
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_720))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:36992: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.axi4deint\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",36992,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:37000
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_729))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:70 assert (!inc || count =/= UInt(beats))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:37011
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_729))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:37014: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.axi4deint\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",37014,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:37022
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_757))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:69 assert (!dec || count =/= UInt(0))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:37033
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_757))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:37036: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.axi4deint\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",37036,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:37044
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_766))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:70 assert (!inc || count =/= UInt(beats))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:37055
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___T_766))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:37058: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.axi4deint\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",37058,"");
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:56726
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:56726
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1633))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:56737
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1633))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:56740: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",56740,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:56770
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1709))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:56781
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1709))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:56784: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",56784,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:56814
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1785))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:56825
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1785))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:56828: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",56828,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:56858
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1861))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:56869
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_1861))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:56872: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",56872,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:56902
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2003))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:66 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:56913
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2003))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:56916: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",56916,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:56924
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2016))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:68 assert (!valids.reduce(_||_) || winner.reduce(_||_))\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:56935
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2016))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:56938: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",56938,"");
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38004
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38004
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at SystemBus.scala:86:33)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38015
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38018: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38018,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38026
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SystemBus.scala:86:33)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38037
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38040: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38040,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38048
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SystemBus.scala:86:33)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38059
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38062: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38062,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38070
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SystemBus.scala:86:33)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38081
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38084: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38084,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38092
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SystemBus.scala:86:33)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38103
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38106: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38106,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38114
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SystemBus.scala:86:33)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38125
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38128: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38128,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38136
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SystemBus.scala:86:33)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38147
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38150: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38150,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38158
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at SystemBus.scala:86:33)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38169
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38172: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38172,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38180
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SystemBus.scala:86:33)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38191
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38194: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38194,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38202
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SystemBus.scala:86:33)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38213
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38216: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38216,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38224
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SystemBus.scala:86:33)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38235
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38238: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38238,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38246
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SystemBus.scala:86:33)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38257
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38260: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38260,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38268
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SystemBus.scala:86:33)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38279
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38282: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38282,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38290
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SystemBus.scala:86:33)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38301
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38304: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38304,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38312
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SystemBus.scala:86:33)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38323
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38326: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38326,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38334
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at SystemBus.scala:86:33)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38345
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38348: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38348,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38356
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SystemBus.scala:86:33)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38367
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38370: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38370,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38378
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SystemBus.scala:86:33)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38389
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38392: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38392,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38400
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SystemBus.scala:86:33)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38411
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38414: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38414,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38422
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SystemBus.scala:86:33)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38433
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38436: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38436,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38444
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_302))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at SystemBus.scala:86:33)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38455
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_302))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38458: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38458,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38466
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SystemBus.scala:86:33)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38477
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38480: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38480,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38488
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SystemBus.scala:86:33)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38499
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38502: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38502,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38510
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SystemBus.scala:86:33)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38521
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38524: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38524,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38532
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SystemBus.scala:86:33)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38543
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38546: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38546,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38554
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_302))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at SystemBus.scala:86:33)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38565
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_302))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38568: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38568,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38576
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SystemBus.scala:86:33)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38587
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38590: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38590,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38598
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SystemBus.scala:86:33)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38609
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38612: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38612,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38620
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SystemBus.scala:86:33)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38631
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38634: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38634,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38642
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_367))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SystemBus.scala:86:33)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38653
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_367))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38656: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38656,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38664
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at SystemBus.scala:86:33)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38675
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38678: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38678,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38686
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SystemBus.scala:86:33)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38697
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38700: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38700,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38708
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SystemBus.scala:86:33)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38719
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38722: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38722,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38730
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SystemBus.scala:86:33)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38741
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38744: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38744,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38752
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SystemBus.scala:86:33)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38763
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38766: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38766,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38774
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at SystemBus.scala:86:33)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38785
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38788: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38788,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38796
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SystemBus.scala:86:33)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38807
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38810: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38810,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38818
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SystemBus.scala:86:33)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38829
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38832: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38832,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38840
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SystemBus.scala:86:33)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38851
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38854: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38854,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38862
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SystemBus.scala:86:33)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38873
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38876: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38876,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38884
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at SystemBus.scala:86:33)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38895
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38898: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38898,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38906
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SystemBus.scala:86:33)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38917
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38920: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38920,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38928
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SystemBus.scala:86:33)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38939
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38942: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38942,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38950
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SystemBus.scala:86:33)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38961
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38964: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38964,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38972
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			 & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				        ? 1U : 0U)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SystemBus.scala:86:33)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38983
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			 & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				        ? 1U : 0U)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:38986: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",38986,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:38994
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SystemBus.scala:86:33)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39005
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39008: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39008,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39038
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SystemBus.scala:86:33)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39049
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39052: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39052,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39082
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SystemBus.scala:86:33)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39093
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39096: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39096,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39126
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SystemBus.scala:86:33)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39137
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39140: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39140,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39170
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SystemBus.scala:86:33)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39181
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39184: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39184,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39214
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SystemBus.scala:86:33)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39225
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39228: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39228,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39258
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SystemBus.scala:86:33)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39269
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39272: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39272,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39324
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:86:33)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39335
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39338: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39338,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39390
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (2U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SystemBus.scala:86:33)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39401
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (2U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39404: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39404,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39522
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_728))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SystemBus.scala:86:33)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39533
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_728))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39536: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39536,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39544
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_733))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SystemBus.scala:86:33)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39555
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_733))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39558: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39558,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39566
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_738))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SystemBus.scala:86:33)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39577
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_738))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39580: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39580,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39588
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_743))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SystemBus.scala:86:33)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39599
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_743))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39602: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39602,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39610
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_748))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SystemBus.scala:86:33)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39621
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_748))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39624: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39624,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39632
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_799))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SystemBus.scala:86:33)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39643
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_799))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39646: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39646,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39654
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_784)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SystemBus.scala:86:33)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39665
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_784)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39668: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39668,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39676
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_809))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SystemBus.scala:86:33)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39687
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_809))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39690: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39690,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39698
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_814))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SystemBus.scala:86:33)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39709
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_814))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39712: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39712,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39720
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_790)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SystemBus.scala:86:33)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39731
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_790)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39734: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39734,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39742
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_826))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at SystemBus.scala:86:33)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39753
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_826))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39756: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39756,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39764
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_683) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_848))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_906))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SystemBus.scala:86:33)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39775
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_683) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_848))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_906))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39778: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39778,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39786
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_753) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_876))) 
			  & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_927))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SystemBus.scala:86:33)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39797
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_753) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_876))) 
			  & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_927))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39800: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39800,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39808
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_937))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at SystemBus.scala:86:33)\n    at Monitor.scala:439 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39819
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_937))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39822: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39822,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39830
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_956))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SystemBus.scala:86:33)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:39841
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__TLMonitor__DOT___T_956))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:39844: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",39844,"");
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42327
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42327
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42338
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42341: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42341,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42349
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42360
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42363: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42363,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42371
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42382
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42385: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42385,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42393
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42404
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42407: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42407,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42415
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42426
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42429: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42429,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42437
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42448
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42451: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42451,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42459
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42470
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42473: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42473,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42481
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42492
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42495: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42495,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42503
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42514
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42517: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42517,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42525
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42536
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42539: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42539,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42547
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42558
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42561: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42561,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42569
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42580
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42583: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42583,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42591
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42602
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42605: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42605,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42613
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42624
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42627: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42627,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42635
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42646
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42649: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42649,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42657
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42668
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42671: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42671,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42679
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42690
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42693: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42693,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42701
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42712
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42715: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42715,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42723
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42734
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42737: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42737,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42745
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42756
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42759: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42759,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42767
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_302))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42778
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_302))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42781: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42781,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42789
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42800
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42803: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42803,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42811
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42822
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42825: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42825,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42833
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42844
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42847: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42847,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42855
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42866
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42869: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42869,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42877
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_302))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42888
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_302))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42891: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42891,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42899
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42910
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42913: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42913,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42921
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42932
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42935: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42935,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42943
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42954
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42957: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42957,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42965
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_367))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42976
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_367))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:42979: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",42979,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42987
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:42998
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43001: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43001,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43009
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43020
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43023: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43023,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43031
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43042
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43045: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43045,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43053
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43064
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43067: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43067,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43075
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43086
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43089: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43089,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43097
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43108
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43111: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43111,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43119
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43130
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43133: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43133,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43141
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43152
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43155: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43155,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43163
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43174
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43177: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43177,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43185
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43196
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43199: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43199,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43207
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43218
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43221: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43221,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43229
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43240
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43243: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43243,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43251
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43262
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43265: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43265,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43273
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43284
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43287: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43287,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43295
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			 & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				        ? 1U : 0U)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43306
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			 & (~ ((6U >= ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				        ? 1U : 0U)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43309: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43309,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43317
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43328
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43331: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43331,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43361
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43372
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (6U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43375: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43375,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43405
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43416
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43419: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43419,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43449
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43460
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (4U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43463: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43463,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43493
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43504
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43507: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43507,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43537
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43548
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (5U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_526_size)) 
			     | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43551: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43551,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43581
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43592
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43595: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43595,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43647
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43658
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (1U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43661: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43661,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43713
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (2U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43724
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (2U == ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43727: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43727,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43845
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_728))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43856
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_728))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43859: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43859,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43867
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_733))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43878
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_733))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43881: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43881,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43889
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_738))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43900
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_738))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43903: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43903,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43911
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_743))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43922
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_743))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43925: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43925,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43933
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_748))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43944
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_748))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43947: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43947,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43955
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_799))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43966
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_799))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43969: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43969,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43977
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_784)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43988
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_784)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:43991: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",43991,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:43999
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_809))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:44010
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_809))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:44013: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",44013,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:44021
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_814))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:44032
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_814))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:44035: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",44035,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:44043
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_790)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:44054
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_790)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:44057: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",44057,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:44065
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_826))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:44076
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_500) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_826))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:44079: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",44079,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:44087
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_683) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_848))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_906))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:44098
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_683) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_848))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_906))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:44101: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",44101,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:44109
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_753) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_876))) 
			  & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_927))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:44120
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_753) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_876))) 
			  & (6U != ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_496)
				     ? 1U : 0U))) & 
			 (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_927))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:44123: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",44123,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:44131
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_937))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:439 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:44142
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_937))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:44145: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",44145,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:44153
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_956))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:42:30)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:44164
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__widget__DOT__TLMonitor__DOT___T_956))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:44167: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.widget.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",44167,"");
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41303
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41303
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_571))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:227 assert (!dec || count =/= UInt(0))        // underflow\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41314
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_571))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:41317: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",41317,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41325
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_580))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:228 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41336
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_580))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:41339: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",41339,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41347
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_613))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:227 assert (!dec || count =/= UInt(0))        // underflow\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41358
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_613))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:41361: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",41361,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41369
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_622))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:228 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41380
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_622))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:41383: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",41383,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41391
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_655))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:227 assert (!dec || count =/= UInt(0))        // underflow\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41402
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_655))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:41405: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",41405,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41413
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_664))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:228 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41424
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_664))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:41427: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",41427,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41435
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_697))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:227 assert (!dec || count =/= UInt(0))        // underflow\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41446
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_697))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:41449: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",41449,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41457
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_706))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:228 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41468
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_706))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:41471: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",41471,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41479
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_739))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:227 assert (!dec || count =/= UInt(0))        // underflow\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41490
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_739))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:41493: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",41493,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41501
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_748))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:228 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:41512
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___T_748))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:41515: Assertion failed in %NTestHarness.dut.sbus.coupler_to_port_named_mmio_port_axi4.tl2axi4\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",41515,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode__v0 = 0U;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:128966
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:128966
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at Debug.scala:402:46)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:128977
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:128980: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",128980,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:128988
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Debug.scala:402:46)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:128999
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129002: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129002,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129054
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Debug.scala:402:46)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129065
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129068: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129068,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129098
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_mask)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at Debug.scala:402:46)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129109
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_mask)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129112: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129112,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129120
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at Debug.scala:402:46)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129131
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129134: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129134,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129142
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Debug.scala:402:46)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129153
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129156: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129156,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129208
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Debug.scala:402:46)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129219
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129222: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129222,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129252
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Debug.scala:402:46)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129263
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129266: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129266,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129274
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_mask)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at Debug.scala:402:46)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129285
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_mask)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129288: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129288,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129296
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_369))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at Debug.scala:402:46)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129307
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_369))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129310: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129310,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129340
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at Debug.scala:402:46)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129351
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129354: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129354,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129384
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_mask)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at Debug.scala:402:46)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129395
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_mask)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129398: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129398,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129406
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_369))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at Debug.scala:402:46)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129417
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_369))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129420: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129420,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129450
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at Debug.scala:402:46)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129461
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129464: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129464,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129494
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_mask)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at Debug.scala:402:46)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129505
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_mask)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129508: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129508,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129516
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_369))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at Debug.scala:402:46)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129527
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_369))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129530: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129530,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129560
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Debug.scala:402:46)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129571
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129574: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129574,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129626
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at Debug.scala:402:46)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129637
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129640: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129640,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129670
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Debug.scala:402:46)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129681
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129684: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129684,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129714
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_mask)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Debug.scala:402:46)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129725
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_mask)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129728: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129728,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129736
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at Debug.scala:402:46)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129747
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129750: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129750,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129780
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at Debug.scala:402:46)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129791
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129794: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129794,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129824
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_mask)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at Debug.scala:402:46)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129835
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_mask)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129838: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129838,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129846
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at Debug.scala:402:46)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129857
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->reset))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129860: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129860,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129890
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at Debug.scala:402:46)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129901
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_address))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129904: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129904,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129912
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_mask)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at Debug.scala:402:46)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129923
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_opcode))) 
			 & (~ ((0xfU == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT__tl_a_bits_mask)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129926: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129926,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129934
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			 & (~ ((6U >= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at Debug.scala:402:46)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129945
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			 & (~ ((6U >= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x27U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129948: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129948,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129956
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x22U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at Debug.scala:402:46)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:129967
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x22U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:129970: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",129970,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130000
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x23U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at Debug.scala:402:46)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130011
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x23U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130014: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130014,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130022
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x25U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at Debug.scala:402:46)\n    at Monitor.scala:256 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130033
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x25U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130036: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130036,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130044
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x22U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at Debug.scala:402:46)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130055
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x22U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130058: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130058,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130088
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x23U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at Debug.scala:402:46)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130099
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x23U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130102: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130102,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130110
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x25U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at Debug.scala:402:46)\n    at Monitor.scala:263 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130121
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x25U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130124: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130124,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130132
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x22U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at Debug.scala:402:46)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130143
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x22U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130146: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130146,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130176
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x23U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at Debug.scala:402:46)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130187
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((2U <= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x23U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130190: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130190,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130198
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x25U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at Debug.scala:402:46)\n    at Monitor.scala:270 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130209
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x25U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130212: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130212,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130220
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x22U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at Debug.scala:402:46)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130231
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x22U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130234: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130234,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130264
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x25U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at Debug.scala:402:46)\n    at Monitor.scala:277 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130275
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x25U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130278: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130278,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130286
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x22U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at Debug.scala:402:46)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130297
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x22U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130300: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130300,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130330
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x25U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at Debug.scala:402:46)\n    at Monitor.scala:284 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130341
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x25U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130344: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130344,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130352
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x22U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at Debug.scala:402:46)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130363
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((~ (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
					   >> 0x22U))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130366: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130366,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130396
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x25U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at Debug.scala:402:46)\n    at Monitor.scala:291 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130407
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						     >> 0x25U)))) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130410: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130410,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130484
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1025)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1056))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Debug.scala:402:46)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130495
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1025)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1056))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130498: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130498,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130506
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1025)) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1044)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at Debug.scala:402:46)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130517
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1025)) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1044)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130520: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130520,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130528
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1025)) 
			 & (~ ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1046)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at Debug.scala:402:46)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130539
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1025)) 
			 & (~ ((2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1046)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130542: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130542,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130550
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1025)) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1048)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at Debug.scala:402:46)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130561
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1025)) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1048)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130564: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130564,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130572
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1025)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1076))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at Debug.scala:402:46)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130583
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__out_0_a_valid) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1025)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1076))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130586: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130586,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130594
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1127))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Debug.scala:402:46)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130605
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1127))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130608: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130608,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130616
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1132))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at Debug.scala:402:46)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130627
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1132))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130630: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130630,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130638
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1137))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at Debug.scala:402:46)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130649
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1137))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130652: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130652,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130660
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1142))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at Debug.scala:402:46)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130671
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1142))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130674: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130674,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130682
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1147))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at Debug.scala:402:46)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130693
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1147))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130696: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130696,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130704
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at Debug.scala:402:46)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130715
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT___T_53) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1093)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130718: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130718,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130726
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1224) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1161)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at Debug.scala:402:46)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130737
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1224) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1161)) 
			       | (IData)(vlTOPp->reset)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130740: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130740,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130748
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1081) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1204))) 
			  & (6U != (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1255))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Debug.scala:402:46)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130759
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1081) 
			   & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1204))) 
			  & (6U != (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__AsyncQueueSink__DOT__deq_bits_reg__DOT__sync_0 
						  >> 0x27U))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1255))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130762: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130762,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130770
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1265))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 4 (connected at Debug.scala:402:46)\n    at Monitor.scala:439 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130781
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1265))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130784: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130784,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130792
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1284))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Debug.scala:402:46)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:130803
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__TLMonitor__DOT___T_1284))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:130806: Assertion failed in %NTestHarness.dut.debug_1.dmOuter.asource.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",130806,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_source__v0 = 0U;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162045
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162045
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tl_out_a_valid) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_350))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at Frontend.scala:313:21)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162056
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tl_out_a_valid) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_350))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:162059: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",162059,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162089
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tl_out_a_valid) 
			 & (~ (1U | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at Frontend.scala:313:21)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162100
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tl_out_a_valid) 
			 & (~ (1U | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:162103: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",162103,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162683
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at Frontend.scala:313:21)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162694
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:162697: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",162697,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162727
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid sink ID (connected at Frontend.scala:313:21)\n    at Monitor.scala:254 assert (sink_ok, \"'D' channel ReleaseAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162738
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:162741: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",162741,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162749
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at Frontend.scala:313:21)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162760
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:162763: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",162763,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162771
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at Frontend.scala:313:21)\n    at Monitor.scala:256 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162782
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:162785: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",162785,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162815
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at Frontend.scala:313:21)\n    at Monitor.scala:261 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162826
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:162829: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",162829,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162837
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at Frontend.scala:313:21)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162848
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:162851: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",162851,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162859
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at Frontend.scala:313:21)\n    at Monitor.scala:263 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162870
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:162873: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",162873,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162903
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at Frontend.scala:313:21)\n    at Monitor.scala:268 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162914
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:162917: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",162917,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162925
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at Frontend.scala:313:21)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162936
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:162939: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",162939,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162947
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at Frontend.scala:313:21)\n    at Monitor.scala:270 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162958
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:162961: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",162961,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:162991
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid sink ID (connected at Frontend.scala:313:21)\n    at Monitor.scala:275 assert (sink_ok, \"'D' channel AccessAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163002
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163005: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163005,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163013
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at Frontend.scala:313:21)\n    at Monitor.scala:277 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163024
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163027: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163027,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163057
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid sink ID (connected at Frontend.scala:313:21)\n    at Monitor.scala:282 assert (sink_ok, \"'D' channel AccessAckData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163068
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163071: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163071,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163079
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at Frontend.scala:313:21)\n    at Monitor.scala:284 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163090
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163093: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163093,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163123
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid sink ID (connected at Frontend.scala:313:21)\n    at Monitor.scala:289 assert (sink_ok, \"'D' channel HintAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163134
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163137: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163137,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163145
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at Frontend.scala:313:21)\n    at Monitor.scala:291 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163156
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163159: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163159,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163233
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tl_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1017))) 
			 & (~ ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1034)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Frontend.scala:313:21)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163244
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tl_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1017))) 
			 & (~ ((4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1034)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163247: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163247,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163255
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tl_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1017))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1036)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at Frontend.scala:313:21)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163266
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tl_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1017))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1036)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163269: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163269,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163277
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tl_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1017))) 
			 & (~ ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1038)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at Frontend.scala:313:21)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163288
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tl_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1017))) 
			 & (~ ((6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1038)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163291: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163291,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163299
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tl_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1017))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1040)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at Frontend.scala:313:21)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163310
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tl_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1017))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1040)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163313: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163313,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163321
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tl_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1017))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1068))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at Frontend.scala:313:21)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163332
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__frontend__DOT__icache__DOT__tl_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1017))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1068))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163335: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163335,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163343
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1085))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1119))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Frontend.scala:313:21)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163354
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1085))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1119))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163357: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163357,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163365
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1085))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1124))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at Frontend.scala:313:21)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163376
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1085))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1124))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163379: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163379,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163387
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1085))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1129))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at Frontend.scala:313:21)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163398
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1085))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1129))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163401: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163401,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163409
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1085))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1108)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at Frontend.scala:313:21)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163420
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1085))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1108)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163423: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163423,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163431
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1085))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1139))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at Frontend.scala:313:21)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163442
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1085))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1139))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163445: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163445,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163453
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1085))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1146))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at Frontend.scala:313:21)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163464
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_1_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1085))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1146))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163467: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163467,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163475
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1216) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1153)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at Frontend.scala:313:21)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163486
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1216) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1153)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163489: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163489,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163497
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1240) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1247))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Frontend.scala:313:21)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163508
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1240) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1247))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163511: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163511,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163519
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1257))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 5 (connected at Frontend.scala:313:21)\n    at Monitor.scala:439 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163530
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1257))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163533: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163533,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163541
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1276))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Frontend.scala:313:21)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:163552
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor_1__DOT___T_1276))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:163555: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor_1\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",163555,"");
	}
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__dut__DOT__pbus__DOT__sync_xing__DOT__Queue__DOT__ram_opcode__v0 = 0U;
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159226
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159226
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at HellaCache.scala:217:21)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159237
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159240: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159240,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159248
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at HellaCache.scala:217:21)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159259
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159262: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159262,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159292
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_size)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at HellaCache.scala:217:21)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159303
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_size)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159306: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159306,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159314
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_157))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at HellaCache.scala:217:21)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159325
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_157))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159328: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159328,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159336
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at HellaCache.scala:217:21)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159347
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159350: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159350,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159358
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_mask)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at HellaCache.scala:217:21)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159369
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_mask)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159372: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159372,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159380
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at HellaCache.scala:217:21)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159391
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159394: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159394,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159402
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at HellaCache.scala:217:21)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159413
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159416: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159416,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159446
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_size)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at HellaCache.scala:217:21)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159457
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_size)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159460: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159460,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159468
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_157))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at HellaCache.scala:217:21)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159479
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_157))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159482: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159482,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159490
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at HellaCache.scala:217:21)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159501
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159504: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159504,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159512
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at HellaCache.scala:217:21)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159523
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159526: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159526,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159534
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_mask)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at HellaCache.scala:217:21)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159545
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_mask)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159548: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159548,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159556
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_350))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at HellaCache.scala:217:21)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159567
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_350))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159570: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159570,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159600
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_157))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at HellaCache.scala:217:21)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159611
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_157))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159614: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159614,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159622
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at HellaCache.scala:217:21)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159633
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159636: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159636,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159644
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_369))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at HellaCache.scala:217:21)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159655
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_369))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159658: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159658,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159666
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_454))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at HellaCache.scala:217:21)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159677
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_454))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159680: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159680,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159710
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_157))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at HellaCache.scala:217:21)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159721
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_157))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159724: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159724,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159732
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at HellaCache.scala:217:21)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159743
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159746: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159746,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159754
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_369))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at HellaCache.scala:217:21)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159765
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_369))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159768: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159768,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159776
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_454))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at HellaCache.scala:217:21)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159787
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_454))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159790: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159790,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159820
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_157))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at HellaCache.scala:217:21)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159831
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_157))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159834: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159834,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159842
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at HellaCache.scala:217:21)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159853
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159856: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159856,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159864
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_580))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at HellaCache.scala:217:21)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159875
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_580))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159878: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159878,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159886
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_653))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at HellaCache.scala:217:21)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159897
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_653))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159900: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159900,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159930
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_157))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at HellaCache.scala:217:21)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159941
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_157))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159944: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159944,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159952
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at HellaCache.scala:217:21)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159963
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159966: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159966,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159974
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_369))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at HellaCache.scala:217:21)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159985
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_369))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:159988: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",159988,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:159996
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_653))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at HellaCache.scala:217:21)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160007
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_653))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160010: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160010,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160040
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_157))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at HellaCache.scala:217:21)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160051
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_157))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160054: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160054,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160062
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at HellaCache.scala:217:21)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160073
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_param)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160076: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160076,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160084
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_369))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at HellaCache.scala:217:21)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160095
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_369))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160098: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160098,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160106
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_293) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at HellaCache.scala:217:21)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160117
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ ((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_293) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160120: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160120,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160150
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_157))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at HellaCache.scala:217:21)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160161
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_157))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160164: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160164,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160172
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_369))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at HellaCache.scala:217:21)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160183
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_bits_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_369))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160186: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160186,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160194
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at HellaCache.scala:217:21)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160205
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160208: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160208,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160238
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid sink ID (connected at HellaCache.scala:217:21)\n    at Monitor.scala:254 assert (sink_ok, \"'D' channel ReleaseAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160249
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160252: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160252,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160260
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at HellaCache.scala:217:21)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160271
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160274: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160274,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160282
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at HellaCache.scala:217:21)\n    at Monitor.scala:256 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160293
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160296: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160296,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160326
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at HellaCache.scala:217:21)\n    at Monitor.scala:261 assert (sink_ok, \"'D' channel Grant carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160337
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160340: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160340,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160348
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at HellaCache.scala:217:21)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160359
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160362: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160362,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160370
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at HellaCache.scala:217:21)\n    at Monitor.scala:263 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160381
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160384: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160384,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160414
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at HellaCache.scala:217:21)\n    at Monitor.scala:268 assert (sink_ok, \"'D' channel GrantData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160425
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160428: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160428,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160436
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at HellaCache.scala:217:21)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160447
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160450: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160450,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160458
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at HellaCache.scala:217:21)\n    at Monitor.scala:270 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160469
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160472: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160472,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160502
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid sink ID (connected at HellaCache.scala:217:21)\n    at Monitor.scala:275 assert (sink_ok, \"'D' channel AccessAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160513
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160516: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160516,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160524
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at HellaCache.scala:217:21)\n    at Monitor.scala:277 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160535
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160538: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160538,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160568
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid sink ID (connected at HellaCache.scala:217:21)\n    at Monitor.scala:282 assert (sink_ok, \"'D' channel AccessAckData carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160579
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160582: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160582,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160590
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at HellaCache.scala:217:21)\n    at Monitor.scala:284 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160601
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160604: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160604,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160634
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid sink ID (connected at HellaCache.scala:217:21)\n    at Monitor.scala:289 assert (sink_ok, \"'D' channel HintAck carries invalid sink ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160645
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((1U > (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_sink___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160648: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160648,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160656
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at HellaCache.scala:217:21)\n    at Monitor.scala:291 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160667
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160670: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160670,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160700
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_release_data_valid)) 
				  | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel valid and not TL-C (connected at HellaCache.scala:217:21)\n    at Monitor.scala:309 assert (!bundle.c.valid, \"'C' channel valid and not TL-C\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160711
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__s2_release_data_valid)) 
				  | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160714: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160714,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160744
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1017))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1048))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at HellaCache.scala:217:21)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160755
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1017))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1048))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160758: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160758,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160766
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1017))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1053))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at HellaCache.scala:217:21)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160777
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1017))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1053))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160780: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160780,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160788
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1017))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1058))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at HellaCache.scala:217:21)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160799
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1017))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1058))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160802: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160802,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160810
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1017))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1040)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at HellaCache.scala:217:21)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160821
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1017))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1040)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160824: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160824,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160832
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1017))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1068))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at HellaCache.scala:217:21)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160843
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__dcache__DOT__tl_out_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1017))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1068))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160846: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160846,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160854
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1085))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1119))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at HellaCache.scala:217:21)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160865
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1085))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1119))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160868: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160868,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160876
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1085))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1124))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at HellaCache.scala:217:21)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160887
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1085))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1124))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160890: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160890,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160898
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1085))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1129))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at HellaCache.scala:217:21)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160909
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1085))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1129))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160912: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160912,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160920
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1085))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1108)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at HellaCache.scala:217:21)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160931
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1085))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1108)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160934: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160934,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160942
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1085))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1139))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at HellaCache.scala:217:21)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160953
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1085))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1139))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160956: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160956,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160964
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1085))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1146))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at HellaCache.scala:217:21)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160975
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1085))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1146))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:160978: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",160978,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160986
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1216) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1153)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at HellaCache.scala:217:21)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:160997
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1216) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1153)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:161000: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",161000,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:161008
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1240) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1247))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at HellaCache.scala:217:21)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:161019
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1240) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1247))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:161022: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",161022,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:161030
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1257))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 5 (connected at HellaCache.scala:217:21)\n    at Monitor.scala:439 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:161041
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1257))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:161044: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",161044,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:161052
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1276))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at HellaCache.scala:217:21)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:161063
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__tlMasterXbar__DOT__TLMonitor__DOT___T_1276))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:161066: Assertion failed in %NTestHarness.dut.tile.tlMasterXbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",161066,"");
	}
    }
}
