############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_pipeline -II 1 "mem_top"
set_directive_interface -mode ap_ctrl_hs "mem_top"
set_directive_pipeline -II 1 "mem_fe"
set_directive_interface -mode ap_ctrl_hs "mem_fe"
set_directive_resource -core RAM_2P_URAM "mem_fe" buffer_fe
set_directive_dependence -variable buffer_fe -type inter -direction WAR -dependent false "mem_fe"
set_directive_pipeline -II 1 "mem_be"
set_directive_interface -mode ap_ctrl_hs "mem_be"
set_directive_dependence -variable buffer_be -type inter -direction WAR -dependent false "mem_be"
set_directive_resource -core RAM_2P_URAM "mem_be" buffer_be
set_directive_interface -mode ap_ctrl_none -register "null_interface"
