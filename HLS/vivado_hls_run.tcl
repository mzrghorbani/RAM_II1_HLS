############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
delete_project mem_proj
open_project mem_proj
set_top mem_top
add_files mem_be.cc
add_files mem_be.h
add_files mem_fe.cc
add_files mem_fe.h
add_files mem_top.cc
add_files mem_top.h
add_files null_interface.cc
add_files null_interface.h
add_files -tb mem_tb.cc
open_solution "solution1"
set_part {xcvu095-ffva2104-2-e} -tool vivado
create_clock -period 2.77 -name default
source "./vivado_hls_directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all -rtl vhdl
export_design -format ip_catalog
exit