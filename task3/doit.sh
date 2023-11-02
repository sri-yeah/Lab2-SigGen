#!/bin/sh

# cleanup 

rm -rf obj_dir
rm -f sigdelay.vcd
rm -f counter.vcd
rm -f ram2.vcd

# run Verilator to translate Verligo into C++, including C++ testbench 
verilator -Wall --cc --trace sigdelay.sv --exe sigdelay_tb.cpp
verilator -Wall --cc --trace counter.sv --exe sigdelay_tb.cpp
verilator -Wall --cc --trace ram2.sv --exe sigdelay_tb.cpp

# build C++ project via make automatically generated by Verilator 
make -j -C obj_dir/ -f Vsigdelay.mk Vsigdelay

# run executable simulation file 
obj_dir/Vsigdelay
