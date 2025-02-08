/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(c) 2024 ZTE Corporation
 */

#ifndef _ZSDA_QP_COMMON_H_
#define _ZSDA_QP_COMMON_H_

#include <rte_bus_pci.h>
#include <rte_io.h>
#include <rte_cycles.h>
#include <rte_memzone.h>
#include <rte_malloc.h>
#include <rte_mempool.h>
#include <rte_mbuf.h>

#include "bus_pci_driver.h"

#define ZSDA_MAX_DEV				RTE_PMD_ZSDA_MAX_PCI_DEVICES

#define ZSDA_SUCCESS			0
#define ZSDA_FAILED				(-1)

enum zsda_service_type {
	ZSDA_SERVICE_INVALID,
};
#define ZSDA_MAX_SERVICES (0)

#endif /* _ZSDA_QP_COMMON_H_ */
