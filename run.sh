#!/bin/bash

./build/X86/gem5.opt \
		--debug-flags=MyDebug \
		configs/example/se.py -n 1\
		--cpu-type=DerivO3CPU -c "./tests/test-progs/hello/bin/x86/linux/hello" \
		--caches --l1d_size=256kB --l1i_size=256kB --l2_size=512kB --l3_size=1024kB \
