# Tiny-core-c-model

CPU configuration:

one tiny core
ITIM start address 0x8000000L

Icache -> ITIM : Load code to 0x8000000;
ITIM -> Icache: set the first byte of 0x8000000 to zero.

How to run the emulator:
Please check the Rocket-chip project in GITHUB:
https://github.com/freechipsproject/rocket-chip

Section: Debugging with GDB
