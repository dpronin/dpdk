# SPDX-License-Identifier: BSD-3-Clause
# Copyright(c) 2018 Intel Corporation

if not has_libfdt
    build = false
    reason = 'missing dependency, "libfdt"'
    subdir_done()
endif

subdir('base')
objs = [base_objs]

deps += ['ethdev', 'rawdev', 'pci', 'bus_pci', 'kvargs',
    'bus_vdev', 'bus_ifpga', 'net', 'net_i40e', 'net_ipn3ke']

sources = files('ifpga_rawdev.c', 'rte_pmd_ifpga.c', 'afu_pmd_core.c',
    'afu_pmd_n3000.c', 'afu_pmd_he_lpbk.c', 'afu_pmd_he_mem.c',
    'afu_pmd_he_hssi.c')

includes += include_directories('base')

headers = files('rte_pmd_ifpga.h')
