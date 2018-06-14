# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VTestHarness.mk

default: /home/test/RISC-V/rocket-chip/emulator/emulator-freechips.rocketchip.system-TinyConfig-debug

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /home/test/RISC-V/rocket-chip/emulator/verilator/install/share/verilator
# Path to SystemPerl kit top (from $SYSTEMPERL)
SYSTEMPERL = 
# Path to SystemPerl kit includes (from $SYSTEMPERL_INCLUDE)
SYSTEMPERL_INCLUDE = 
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# SystemPerl output mode?  0/1 (from --sp)
VM_SP = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# SystemPerl or SystemC output mode?  0/1 (from --sp/--sc)
VM_SP_OR_SC = 0
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VTestHarness
# Module prefix (from --prefix)
VM_MODPREFIX = VTestHarness
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-O1 -std=c++11 -I/home/test/RISC-V/rocket-chip/riscv-tools/include -I/home/test/RISC-V/rocket-chip/csrc -DVERILATOR -DTEST_HARNESS=VTestHarness -include /home/test/RISC-V/rocket-chip/csrc/verilator.h -include /home/test/RISC-V/rocket-chip/emulator/generated-src/freechips.rocketchip.system.TinyConfig.plusArgs \
	-I/home/test/RISC-V/rocket-chip/emulator/generated-src-debug -include /home/test/RISC-V/rocket-chip/emulator/generated-src-debug/freechips.rocketchip.system.TinyConfig/VTestHarness.h \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	 -L/home/test/RISC-V/rocket-chip/riscv-tools/lib -Wl,-rpath,/home/test/RISC-V/rocket-chip/riscv-tools/lib -L/home/test/RISC-V/rocket-chip/emulator -lfesvr -lpthread \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	SimDTM \
	SimJTAG \
	emulator \
	remote_bitbang \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/test/RISC-V/rocket-chip/csrc \


### Default rules...
# Include list of all generated classes
include VTestHarness_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

SimDTM.o: /home/test/RISC-V/rocket-chip/csrc/SimDTM.cc
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
SimJTAG.o: /home/test/RISC-V/rocket-chip/csrc/SimJTAG.cc
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
emulator.o: /home/test/RISC-V/rocket-chip/csrc/emulator.cc
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
remote_bitbang.o: /home/test/RISC-V/rocket-chip/csrc/remote_bitbang.cc
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/test/RISC-V/rocket-chip/emulator/emulator-freechips.rocketchip.system-TinyConfig-debug: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) -o $@ $(LIBS) $(SC_LIBS) 2>&1 | c++filt


# Verilated -*- Makefile -*-
