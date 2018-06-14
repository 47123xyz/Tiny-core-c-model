// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"      // For This
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//--------------------
// Internal Methods

VL_INLINE_OPT void VTestHarness::_sequent__TOP__19(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTestHarness::_sequent__TOP__19\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176108
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176108
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176119
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176122: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176122,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176130
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176141
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176144: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176144,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176152
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176163
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176166: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176166,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176174
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176185
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176188: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176188,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176196
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176207
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176210: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176210,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176218
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176229
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176232: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176232,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176240
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176251
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176254: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176254,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176262
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176273
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176276: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176276,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176284
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176295
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176298: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176298,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176306
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176317
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176320: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176320,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176328
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176339
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176342: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176342,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176350
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176361
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176364: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176364,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176372
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176383
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176386: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176386,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176394
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176405
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176408: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176408,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176416
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176427
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176430: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176430,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176438
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176449
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176452: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176452,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176460
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176471
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176474: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176474,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176482
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176493
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176496: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176496,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176504
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176515
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176518: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176518,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176526
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176537
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176540: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176540,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176548
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176559
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176562: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176562,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176570
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176581
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176584: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176584,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176592
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176603
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176606: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176606,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176614
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176625
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176628: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176628,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176636
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176647
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176650: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176650,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176658
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176669
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176672: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176672,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176680
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176691
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176694: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176694,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176702
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176713
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176716: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176716,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176724
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176735
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176738: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176738,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176746
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_367))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176757
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_367))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176760: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176760,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176768
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_388))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176779
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_388))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176782: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176782,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176790
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176801
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176804: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176804,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176812
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176823
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176826: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176826,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176834
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176845
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176848: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176848,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176856
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176867
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176870: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176870,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176878
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_388))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176889
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_388))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176892: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176892,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176900
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176911
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176914: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176914,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176922
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176933
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176936: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176936,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176944
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176955
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176958: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176958,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176966
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176977
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:176980: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",176980,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176988
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:176999
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177002: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177002,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177010
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177021
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177024: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177024,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177032
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177043
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177046: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177046,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177054
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177065
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177068: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177068,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177076
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			       & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
				     | (IData)(vlTOPp->TestHarness__DOT___T_6))))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177087
done_reset	
    ) {
	if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			       & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data)) 
				     | (IData)(vlTOPp->TestHarness__DOT___T_6))))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177090: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177090,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177098
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_556))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177109
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_556))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177112: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177112,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177142
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177153
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177156: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177156,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177164
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:256 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177175
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177178: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177178,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177186
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_556))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177197
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_556))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177200: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177200,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177230
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177241
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177244: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177244,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177252
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:263 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177263
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177266: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177266,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177274
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_556))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177285
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_556))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177288: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177288,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177318
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177329
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177332: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177332,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177340
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:270 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177351
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177354: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177354,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177362
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_556))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177373
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_556))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177376: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177376,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177406
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:277 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177417
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177420: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177420,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177428
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_556))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177439
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_556))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177442: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177442,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177472
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:284 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177483
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177486: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177486,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177494
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_556))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177505
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_556))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177508: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177508,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177538
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:291 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177549
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177552: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177552,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177626
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_699))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_730))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177637
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_699))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_730))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177640: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177640,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177648
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_699))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_735))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177659
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_699))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_735))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177662: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177662,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177670
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_699))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_740))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177681
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_699))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_740))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177684: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177684,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177692
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_699))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_745))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177703
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_699))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_745))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177706: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177706,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177714
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_699))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_750))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177725
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_3_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_699))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_750))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177728: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177728,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177736
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_767))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_801))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177747
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_767))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_801))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177750: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177750,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177758
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_767))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_806))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177769
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_767))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_806))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177772: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177772,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177780
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_767))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_811))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177791
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_767))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_811))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177794: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177794,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177802
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_767))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_816))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177813
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_767))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_816))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177816: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177816,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177824
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_767))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_821))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177835
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_767))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_821))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177838: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177838,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177846
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_767))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_828))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177857
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_767))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_828))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177860: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177860,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177868
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_685) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_850))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_908))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177879
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_685) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_850))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_908))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177882: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177882,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177890
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_755) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_878))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_929))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177901
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_755) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_878))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__Queue_1__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_929))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177904: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177904,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177912
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_939))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:439 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177923
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_939))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177926: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177926,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177934
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_958))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at PeripheryBus.scala:114:11)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:177945
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__tile__DOT__sync_xing_1__DOT__TLMonitor__DOT___T_958))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:177948: Assertion failed in %NTestHarness.dut.tile.sync_xing_1.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",177948,"");
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54160
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54160
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54171
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54174: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54174,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54182
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54193
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54196: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54196,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54204
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54215
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54218: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54218,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54226
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54237
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54240: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54240,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54248
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54259
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54262: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54262,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54270
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54281
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54284: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54284,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54292
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54303
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54306: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54306,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54314
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54325
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54328: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54328,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54336
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54347
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54350: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54350,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54358
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54369
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54372: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54372,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54380
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54391
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54394: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54394,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54402
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54413
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54416: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54416,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54424
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54435
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54438: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54438,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54446
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54457
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54460: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54460,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54468
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54479
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54482: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54482,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54490
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_340))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54501
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_340))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54504: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54504,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54512
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54523
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54526: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54526,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54534
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54545
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54548: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54548,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54556
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54567
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54570: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54570,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54578
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54589
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54592: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54592,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54600
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_340))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54611
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_340))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54614: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54614,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54622
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54633
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54636: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54636,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54644
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54655
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54658: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54658,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54666
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54677
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54680: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54680,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54688
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54699
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54702: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54702,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54710
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_340))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54721
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_340))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54724: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54724,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54732
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54743
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54746: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54746,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54754
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54765
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54768: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54768,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54776
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54787
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54790: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54790,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54798
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_502))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54809
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_502))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54812: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54812,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54820
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54831
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54834: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54834,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54842
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54853
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54856: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54856,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54864
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54875
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54878: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54878,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54886
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54897
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54900: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54900,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54908
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54919
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54922: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54922,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54930
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54941
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54944: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54944,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54952
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54963
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54966: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54966,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54974
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54985
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:54988: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",54988,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:54996
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55007
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55010: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55010,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55018
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55029
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55032: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55032,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55040
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55051
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55054: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55054,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55062
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_181))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55073
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_181))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55076: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55076,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55084
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_191))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55095
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_191))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55098: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55098,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55106
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_359))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55117
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_359))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55120: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55120,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55128
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			 & (~ ((6U >= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						     >> 0x2cU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55139
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			 & (~ ((6U >= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						     >> 0x2cU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55142: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55142,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55150
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_780))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55161
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_780))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55164: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55164,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55194
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ ((2U <= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						     >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55205
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ ((2U <= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						     >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55208: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55208,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55216
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						     >> 0x2aU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:256 assert (bundle.param === UInt(0), \"'D' channel ReleaseeAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55227
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (6U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						     >> 0x2aU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55230: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55230,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55238
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_780))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55249
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_780))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55252: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55252,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55282
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ ((2U <= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						     >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55293
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ ((2U <= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						     >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55296: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55296,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55304
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						     >> 0x2aU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:263 assert (TLPermissions.isCap(bundle.param), \"'D' channel Grant carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55315
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (4U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						     >> 0x2aU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55318: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55318,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55326
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_780))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55337
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_780))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55340: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55340,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55370
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ ((2U <= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						     >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55381
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ ((2U <= (7U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						     >> 0x27U)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55384: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55384,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55392
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						     >> 0x2aU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:270 assert (TLPermissions.isCap(bundle.param), \"'D' channel GrantData carries invalid cap param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55403
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (5U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ ((2U >= (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						     >> 0x2aU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55406: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55406,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55414
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_780))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55425
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_780))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55428: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55428,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55458
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						     >> 0x2aU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:277 assert (bundle.param === UInt(0), \"'D' channel AccessAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55469
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (0U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						     >> 0x2aU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55472: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55472,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55480
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_780))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55491
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_780))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55494: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55494,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55524
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						     >> 0x2aU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:284 assert (bundle.param === UInt(0), \"'D' channel AccessAckData carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55535
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (1U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						     >> 0x2aU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55538: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55538,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55546
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_780))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55557
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_780))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55560: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55560,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55590
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						     >> 0x2aU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:291 assert (bundle.param === UInt(0), \"'D' channel HintAck carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55601
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (2U == (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ ((0U == (3U & (IData)(
						    (vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						     >> 0x2aU)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55604: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55604,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55678
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_923))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_954))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55689
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_923))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_954))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55692: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55692,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55700
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_923))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_959))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55711
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_923))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_959))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55714: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55714,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55722
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_923))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_964))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55733
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_923))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_964))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55736: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55736,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55744
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_923))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_969))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55755
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_923))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_969))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55758: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55758,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55766
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_923))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_974))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55777
done_reset	
    ) {
	if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__empty)) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_923))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_974))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55780: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55780,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55788
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_991))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1025))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55799
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_991))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1025))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55802: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55802,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55810
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_991))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1030))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55821
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_991))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1030))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55824: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55824,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55832
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_991))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1035))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55843
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_991))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1035))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55846: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55846,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55854
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_991))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1040))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55865
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_991))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1040))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55868: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55868,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55876
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_991))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1045))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55887
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_991))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1045))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55890: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55890,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55898
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_991))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1052))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55909
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__in_0_d_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_991))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1052))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55912: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55912,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55920
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_909) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1074))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1132))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55931
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_909) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1074))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1132))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55934: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55934,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55942
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_979) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1102))) 
			  & (6U != (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1153))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55953
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_979) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1102))) 
			  & (6U != (7U & (IData)((vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT___T_2158 
						  >> 0x2cU))))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1153))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55956: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55956,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55964
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1172))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at PeripheryBus.scala:96:9)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:55975
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__TLMonitor__DOT___T_1172))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:55978: Assertion failed in %NTestHarness.dut.pbus.periphery_bus_xbar.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",55978,"");
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68606
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68606
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68617
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:68620: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",68620,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68628
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68639
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:68642: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",68642,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68650
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68661
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:68664: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",68664,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68672
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68683
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:68686: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",68686,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68694
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68705
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:68708: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",68708,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68716
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68727
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:68730: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",68730,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68738
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68749
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:68752: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",68752,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68760
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68771
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:68774: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",68774,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68782
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68793
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:68796: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",68796,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68804
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68815
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:68818: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",68818,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68826
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68837
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:68840: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",68840,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68848
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68859
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:68862: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",68862,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68870
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68881
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:68884: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",68884,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68892
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68903
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:68906: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",68906,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68914
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68925
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:68928: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",68928,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68936
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68947
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:68950: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",68950,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68958
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68969
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:68972: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",68972,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68980
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:68991
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:68994: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",68994,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69002
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69013
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69016: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69016,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69024
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69035
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69038: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69038,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69046
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69057
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69060: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69060,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69068
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69079
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69082: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69082,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69090
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69101
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69104: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69104,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69112
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69123
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69126: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69126,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69134
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69145
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69148: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69148,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69156
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69167
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69170: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69170,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69178
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69189
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69192: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69192,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69200
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69211
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69214: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69214,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69222
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69233
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69236: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69236,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69244
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_367))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69255
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_367))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69258: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69258,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69266
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69277
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69280: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69280,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69288
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69299
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69302: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69302,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69310
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69321
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69324: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69324,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69332
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69343
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69346: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69346,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69354
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69365
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69368: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69368,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69376
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69387
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69390: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69390,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69398
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69409
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69412: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69412,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69420
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69431
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69434: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69434,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69442
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69453
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69456: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69456,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69464
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69475
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69478: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69478,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69486
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69497
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69500: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69500,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69508
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69519
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69522: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69522,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69530
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69541
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69544: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69544,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69552
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69563
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69566: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69566,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69574
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69585
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69588: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69588,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69596
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69607
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69610: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69610,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69640
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69651
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69654: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69654,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69684
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69695
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69698: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69698,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69728
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69739
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69742: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69742,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69772
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69783
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69786: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69786,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69816
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69827
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69830: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69830,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69860
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69871
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69874: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69874,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69926
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69937
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:69940: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",69940,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:69992
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70003
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:70006: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",70006,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70124
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_728))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70135
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_728))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:70138: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",70138,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70146
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_733))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70157
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_733))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:70160: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",70160,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70168
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_738))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70179
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_738))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:70182: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",70182,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70190
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_743))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70201
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_743))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:70204: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",70204,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70212
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_748))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70223
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_748))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:70226: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",70226,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70234
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_799))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70245
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_799))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:70248: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",70248,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70256
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_784)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70267
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_784)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:70270: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",70270,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70278
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_809))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70289
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_809))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:70292: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",70292,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70300
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_814))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70311
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_814))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:70314: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",70314,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70322
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_790)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70333
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_790)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:70336: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",70336,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70344
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_826))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70355
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_826))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:70358: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",70358,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70366
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_683) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_848))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_906))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70377
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_683) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_848))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_906))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:70380: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",70380,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70388
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_753) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_876))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_927))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70399
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_753) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_876))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_927))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:70402: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",70402,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70410
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_937))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:439 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70421
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_937))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:70424: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",70424,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70432
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_956))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:70443
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT__TLMonitor__DOT___T_956))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:70446: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",70446,"");
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:71970
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:71970
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:71981
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:71984: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",71984,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:71992
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72003
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72006: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72006,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72014
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72025
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72028: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72028,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72036
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72047
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72050: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72050,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72058
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72069
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72072: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72072,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72080
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72091
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72094: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72094,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72102
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72113
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72116: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72116,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72124
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72135
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72138: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72138,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72146
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72157
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72160: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72160,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72168
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72179
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72182: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72182,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72190
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72201
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72204: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72204,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72212
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72223
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72226: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72226,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72234
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72245
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72248: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72248,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72256
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72267
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72270: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72270,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72278
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72289
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72292: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72292,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72300
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72311
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72314: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72314,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72322
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72333
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72336: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72336,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72344
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72355
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72358: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72358,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72366
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72377
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72380: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72380,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72388
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72399
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72402: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72402,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72410
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72421
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72424: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72424,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72432
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72443
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72446: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72446,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72454
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72465
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72468: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72468,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72476
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72487
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72490: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72490,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72498
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72509
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72512: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72512,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72520
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72531
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72534: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72534,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72542
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72553
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72556: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72556,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72564
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72575
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72578: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72578,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72586
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72597
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72600: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72600,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72608
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_367))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72619
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_367))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72622: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72622,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72630
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72641
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72644: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72644,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72652
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72663
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72666: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72666,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72674
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72685
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72688: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72688,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72696
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72707
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72710: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72710,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72718
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72729
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72732: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72732,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72740
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72751
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72754: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72754,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72762
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72773
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72776: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72776,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72784
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72795
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72798: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72798,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72806
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72817
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72820: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72820,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72828
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72839
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72842: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72842,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72850
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72861
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72864: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72864,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72872
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72883
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72886: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72886,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72894
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72905
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72908: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72908,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72916
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72927
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72930: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72930,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72938
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72949
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			 & (~ ((6U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72952: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72952,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72960
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:72971
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:72974: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",72974,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73004
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73015
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73018: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73018,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73048
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73059
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73062: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73062,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73092
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73103
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73106: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73106,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73136
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73147
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73150: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73150,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73180
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73191
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73194: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73194,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73224
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73235
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73238: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73238,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73290
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73301
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data)) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73304: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73304,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73356
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73367
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73370: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73370,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73488
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_728))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73499
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_728))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73502: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73502,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73510
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_733))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73521
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_733))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73524: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73524,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73532
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_738))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73543
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_738))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73546: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73546,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73554
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_743))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73565
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_743))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73568: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73568,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73576
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_748))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73587
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_0_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_748))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73590: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73590,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73598
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_799))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73609
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_799))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73612: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73612,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73620
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_784)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73631
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_784)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73634: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73634,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73642
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_809))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73653
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_809))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73656: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73656,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73664
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_814))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73675
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_814))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73678: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73678,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73686
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_790)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73697
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_790)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73700: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73700,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73708
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_826))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73719
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_826))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73722: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73722,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73730
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_683) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_848))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_906))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73741
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_683) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_848))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_906))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73744: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73744,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73752
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_753) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_876))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_927))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73763
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_753) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_876))) 
			  & (6U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__plic__DOT__Queue__DOT__ram_read___05FT_55_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_927))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73766: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73766,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73774
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_937))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:439 assert(a_set =/= d_clr || !a_set.orR, s\"'A' and 'D' concurrent, despite minlatency ${edge.manager.minLatency}\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73785
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_937))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73788: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73788,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73796
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_956))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:73807
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_plic__DOT__buffer__DOT__TLMonitor__DOT___T_956))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:73810: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_plic.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",73810,"");
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81224
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81224
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81235
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81238: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81238,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81246
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81257
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81260: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81260,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81268
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81279
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81282: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81282,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81290
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81301
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81304: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81304,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81312
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81323
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81326: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81326,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81334
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81345
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81348: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81348,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81356
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81367
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81370: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81370,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81378
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81389
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81392: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81392,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81400
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81411
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81414: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81414,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81422
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81433
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81436: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81436,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81444
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81455
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81458: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81458,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81466
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81477
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81480: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81480,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81488
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81499
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81502: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81502,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81510
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81521
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81524: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81524,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81532
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81543
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81546: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81546,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81554
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81565
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81568: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81568,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81576
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81587
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81590: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81590,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81598
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81609
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81612: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81612,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81620
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81631
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81634: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81634,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81642
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81653
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81656: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81656,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81664
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81675
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81678: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81678,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81686
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81697
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81700: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81700,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81708
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81719
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81722: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81722,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81730
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81741
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81744: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81744,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81752
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81763
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81766: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81766,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81774
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81785
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81788: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81788,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81796
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81807
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81810: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81810,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81818
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81829
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81832: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81832,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81840
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81851
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81854: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81854,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81862
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_367))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81873
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_367))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81876: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81876,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81884
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81895
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81898: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81898,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81906
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81917
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81920: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81920,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81928
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81939
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81942: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81942,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81950
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81961
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81964: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81964,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81972
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81983
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:81986: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",81986,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:81994
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82005
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82008: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82008,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82016
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82027
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82030: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82030,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82038
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82049
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82052: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82052,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82060
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82071
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82074: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82074,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82082
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82093
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82096: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82096,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82104
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82115
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82118: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82118,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82126
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82137
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82140: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82140,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82148
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82159
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82162: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82162,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82170
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82181
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82184: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82184,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82192
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			 & (~ ((6U >= (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82203
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			 & (~ ((6U >= (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82206: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82206,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82214
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (6U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82225
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (6U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82228: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82228,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82258
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (6U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82269
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (6U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82272: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82272,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82302
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (4U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82313
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (4U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82316: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82316,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82346
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (4U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82357
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (4U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82360: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82360,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82390
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (5U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82401
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (5U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82404: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82404,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82434
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (5U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82445
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (5U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82448: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82448,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82478
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82489
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82492: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82492,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82544
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82555
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82558: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82558,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82610
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (2U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82621
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (2U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82624: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82624,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82742
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_728))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82753
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_728))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82756: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82756,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82764
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_733))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82775
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_733))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82778: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82778,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82786
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_738))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82797
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_738))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82800: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82800,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82808
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_743))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82819
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_743))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82822: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82822,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82830
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_748))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82841
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_748))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82844: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82844,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82852
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_799))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82863
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_799))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82866: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82866,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82874
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_784)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82885
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_784)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82888: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82888,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82896
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_809))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82907
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_809))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82910: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82910,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82918
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_814))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82929
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_814))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82932: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82932,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82940
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_790)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82951
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_790)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82954: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82954,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82962
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_826))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82973
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_826))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82976: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82976,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82984
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_683) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_848))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_906))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:82995
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_683) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_848))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_906))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:82998: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",82998,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:83006
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_753) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_876))) 
			  & (6U != (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_927))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:83017
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_753) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_876))) 
			  & (6U != (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_927))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:83020: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",83020,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:83028
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_946))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:45:41)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:83039
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__TLMonitor__DOT___T_946))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:83042: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.fragmenter.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",83042,"");
	}
    }
    // ALWAYS at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84552
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84552
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:41 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquireBlock type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84563
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:84566: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",84566,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84574
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:42 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquireBlock from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84585
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:84588: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",84588,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84596
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:43 assert (source_ok, \"'A' channel AcquireBlock carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84607
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:84610: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",84610,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84618
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:44 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquireBlock smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84629
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:84632: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",84632,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84640
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:45 assert (is_aligned, \"'A' channel AcquireBlock address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84651
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:84654: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",84654,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84662
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:46 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquireBlock carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84673
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:84676: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",84676,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84684
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:47 assert (~bundle.mask === UInt(0), \"'A' channel AcquireBlock contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84695
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (6U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:84698: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",84698,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84706
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:51 assert (edge.manager.supportsAcquireBSafe(edge.address(bundle), bundle.size), \"'A' channel carries AcquirePerm type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84717
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:84720: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",84720,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84728
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:52 assert (edge.client.supportsProbe(edge.source(bundle), bundle.size), \"'A' channel carries AcquirePerm from a client which does not support Probe\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84739
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:84742: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",84742,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84750
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:53 assert (source_ok, \"'A' channel AcquirePerm carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84761
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:84764: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",84764,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84772
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:54 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'A' channel AcquirePerm smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84783
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_size___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:84786: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",84786,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84794
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:55 assert (is_aligned, \"'A' channel AcquirePerm address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84805
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:84808: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",84808,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84816
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:56 assert (TLPermissions.isGrow(bundle.param), \"'A' channel AcquirePerm carries invalid grow param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84827
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((2U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:84830: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",84830,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84838
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:57 assert (bundle.param =/= TLPermissions.NtoB, \"'A' channel AcquirePerm requests NtoB\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84849
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:84852: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",84852,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84860
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:58 assert (~bundle.mask === UInt(0), \"'A' channel AcquirePerm contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84871
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (7U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (0xfU & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_mask___05FT_63_data)))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:84874: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",84874,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84882
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:62 assert (edge.manager.supportsGetSafe(edge.address(bundle), bundle.size), \"'A' channel carries Get type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84893
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:84896: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",84896,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84904
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:63 assert (source_ok, \"'A' channel Get carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84915
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:84918: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",84918,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84926
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:64 assert (is_aligned, \"'A' channel Get address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84937
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:84940: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",84940,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84948
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:65 assert (bundle.param === UInt(0), \"'A' channel Get carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84959
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:84962: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",84962,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84970
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:66 assert (bundle.mask === mask, \"'A' channel Get contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84981
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:84984: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",84984,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:84992
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:70 assert (edge.manager.supportsPutFullSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutFull type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85003
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85006: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85006,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85014
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:71 assert (source_ok, \"'A' channel PutFull carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85025
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85028: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85028,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85036
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:72 assert (is_aligned, \"'A' channel PutFull address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85047
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85050: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85050,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85058
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:73 assert (bundle.param === UInt(0), \"'A' channel PutFull carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85069
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85072: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85072,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85080
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:74 assert (bundle.mask === mask, \"'A' channel PutFull contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85091
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85094: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85094,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85102
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:78 assert (edge.manager.supportsPutPartialSafe(edge.address(bundle), bundle.size), \"'A' channel carries PutPartial type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85113
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_259))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85116: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85116,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85124
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:79 assert (source_ok, \"'A' channel PutPartial carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85135
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85138: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85138,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85146
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:80 assert (is_aligned, \"'A' channel PutPartial address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85157
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85160: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85160,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85168
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:81 assert (bundle.param === UInt(0), \"'A' channel PutPartial carries invalid param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85179
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85182: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85182,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85190
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_367))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:82 assert ((bundle.mask & ~mask) === UInt(0), \"'A' channel PutPartial contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85201
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (1U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_367))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85204: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85204,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85212
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:86 assert (edge.manager.supportsArithmeticSafe(edge.address(bundle), bundle.size), \"'A' channel carries Arithmetic type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85223
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85226: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85226,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85234
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:87 assert (source_ok, \"'A' channel Arithmetic carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85245
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85248: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85248,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85256
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:88 assert (is_aligned, \"'A' channel Arithmetic address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85267
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85270: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85270,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85278
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:89 assert (TLAtomics.isArithmetic(bundle.param), \"'A' channel Arithmetic carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85289
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((4U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85292: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85292,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85300
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:90 assert (bundle.mask === mask, \"'A' channel Arithmetic contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85311
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (2U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85314: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85314,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85322
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:94 assert (edge.manager.supportsLogicalSafe(edge.address(bundle), bundle.size), \"'A' channel carries Logical type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85333
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85336: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85336,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85344
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:95 assert (source_ok, \"'A' channel Logical carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85355
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85358: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85358,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85366
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:96 assert (is_aligned, \"'A' channel Logical address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85377
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85380: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85380,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85388
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:97 assert (TLAtomics.isLogical(bundle.param), \"'A' channel Logical carries invalid opcode param\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85399
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ ((3U >= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_param___05FT_63_data)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85402: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85402,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85410
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:98 assert (bundle.mask === mask, \"'A' channel Logical contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85421
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (3U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85424: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85424,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85432
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type unsupported by manager (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:102 assert (edge.manager.supportsHintSafe(edge.address(bundle), bundle.size), \"'A' channel carries Hint type unsupported by manager\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85443
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT___T_6))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85446: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85446,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85454
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:103 assert (source_ok, \"'A' channel Hint carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85465
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_154))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85468: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85468,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85476
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:104 assert (is_aligned, \"'A' channel Hint address not aligned to size\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85487
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_164))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85490: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85490,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85498
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:105 assert (bundle.mask === mask, \"'A' channel Hint contains invalid mask\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85509
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (5U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_from_sbus__DOT__buffer__DOT__Queue__DOT__ram_opcode___05FT_63_data))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_278))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85512: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85512,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85520
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			 & (~ ((6U >= (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:247 assert (TLMessages.isD(bundle.opcode), \"'D' channel has invalid opcode\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85531
done_reset	
    ) {
	if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			 & (~ ((6U >= (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85534: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85534,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85542
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (6U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:253 assert (source_ok, \"'D' channel ReleaseAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85553
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (6U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85556: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85556,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85586
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (6U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:255 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel ReleaseAck smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85597
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (6U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85600: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85600,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85630
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (4U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:260 assert (source_ok, \"'D' channel Grant carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85641
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (4U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85644: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85644,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85674
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (4U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:262 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel Grant smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85685
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (4U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85688: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85688,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85718
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (5U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:267 assert (source_ok, \"'D' channel GrantData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85729
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (5U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85732: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85732,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85762
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (5U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:269 assert (bundle.size >= UInt(log2Ceil(edge.manager.beatBytes)), \"'D' channel GrantData smaller than a beat\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85773
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (5U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ ((2U <= (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___GEN_0)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85776: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85776,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85806
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:274 assert (source_ok, \"'D' channel AccessAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85817
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (4U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85820: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85820,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85872
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:281 assert (source_ok, \"'D' channel AccessAckData carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85883
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85886: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85886,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85938
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (2U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:288 assert (source_ok, \"'D' channel HintAck carries invalid source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:85949
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (2U == (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_554))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:85952: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",85952,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86070
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_728))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:322 assert (a.bits.opcode === opcode, \"'A' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86081
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_728))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:86084: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",86084,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86092
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_733))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:323 assert (a.bits.param  === param,  \"'A' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86103
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_733))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:86106: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",86106,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86114
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_738))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:324 assert (a.bits.size   === size,   \"'A' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86125
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_738))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:86128: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",86128,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86136
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_743))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:325 assert (a.bits.source === source, \"'A' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86147
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_743))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:86150: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",86150,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86158
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_748))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:326 assert (a.bits.address=== address,\"'A' channel address changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86169
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__periphery_bus_xbar__DOT__out_2_a_valid) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_697))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_748))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:86172: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",86172,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86180
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_799))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:394 assert (d.bits.opcode === opcode, \"'D' channel opcode changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86191
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_799))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:86194: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",86194,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86202
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_784)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:395 assert (d.bits.param  === param,  \"'D' channel param changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86213
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_784)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:86216: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",86216,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86224
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_809))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:396 assert (d.bits.size   === size,   \"'D' channel size changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86235
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_809))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:86238: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",86238,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86246
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_814))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:397 assert (d.bits.source === source, \"'D' channel source changed within multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86257
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_814))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:86260: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",86260,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86268
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_790)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:398 assert (d.bits.sink   === sink,   \"'D' channel sink changed with multibeat operation\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86279
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_790)) 
			       | (IData)(vlTOPp->TestHarness__DOT___T_6)))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:86282: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",86282,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86290
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_826))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel burst lowered error (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:399 assert (d.bits.error || !error,   \"'D' channel burst lowered error\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86301
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT___T_322) 
			  & (0U != (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_765))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_826))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:86304: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",86304,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86312
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_683) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_848))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_906))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:428 assert(!inflight(bundle.a.bits.source), \"'A' channel re-used a source ID\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86323
done_reset	
    ) {
	if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_683) 
			  & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_848))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_906))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:86326: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",86326,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86334
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_753) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_876))) 
			  & (6U != (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_927))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:435 assert((a_set | inflight)(bundle.d.bits.source), \"'D' channel acknowledged for nothing inflight\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86345
done_reset	
    ) {
	if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_753) 
			   & (0U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_876))) 
			  & (6U != (4U == (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__fragmenter__DOT__Repeater__DOT___T_22_opcode)))) 
			 & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_927))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:86348: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",86348,"");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86356
verbose&&done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_946))))) {
	    VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:39:22)\n    at Monitor.scala:447 assert (!inflight.orR || limit === UInt(0) || watchdog < limit, \"TileLink timeout expired\" + extra)\n");
	}
    }
    if (
	// $c function at /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v:86367
done_reset	
    ) {
	if (VL_UNLIKELY((1U & (~ (IData)(vlTOPp->TestHarness__DOT__dut__DOT__pbus__DOT__coupler_to_slave_named_debug__DOT__buffer__DOT__TLMonitor__DOT___T_946))))) {
	    VL_WRITEF("[%0t] %%Error: freechips.rocketchip.system.TinyConfig.v:86370: Assertion failed in %NTestHarness.dut.pbus.coupler_to_slave_named_debug.buffer.TLMonitor\n",
		      64,VL_TIME_Q(),vlSymsp->name());
	    vl_stop("/home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.v",86370,"");
	}
    }
}
