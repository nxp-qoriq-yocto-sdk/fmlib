/*
 * Copyright 2008-2012 Freescale Semiconductor, Inc
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *      * Redistributions of source code must retain the above copyright
 *        notice, this list of conditions and the following disclaimer.
 *      * Redistributions in binary form must reproduce the above copyright
 *        notice, this list of conditions and the following disclaimer in the
 *        documentation and/or other materials provided with the distribution.
 *      * Neither the name of Freescale Semiconductor nor the
 *        names of its contributors may be used to endorse or promote products
 *        derived from this software without specific prior written permission.
 *
 *
 * ALTERNATIVELY, this software may be distributed under the terms of the
 * GNU General Public License ("GPL") as published by the Free Software
 * Foundation, either version 2 of that License or (at your option) any
 * later version.
 *
 * This software is provided by Freescale Semiconductor "as is" and any
 * express or implied warranties, including, but not limited to, the implied
 * warranties of merchantability and fitness for a particular purpose are
 * disclaimed. In no event shall Freescale Semiconductor be liable for any
 * direct, indirect, incidental, special, exemplary, or consequential damages
 * (including, but not limited to, procurement of substitute goods or services;
 * loss of use, data, or profits; or business interruption) however caused and
 * on any theory of liability, whether in contract, strict liability, or tort
 * (including negligence or otherwise) arising in any way out of the use of
 * this software, even if advised of the possibility of such damage.
 */

/**************************************************************************//**
 @File          part_integration_P3_P4_P5.h

 @Description   P4080/P5020/P3041 external definitions and structures.
*//***************************************************************************/
#ifndef __PART_INTEGRATION_P3_P4_P5_H
#define __PART_INTEGRATION_P3_P4_P5_H

#include "std_ext.h"
#include "dpaa_integration_ext.h"

#ifndef P1023

/**************************************************************************//**
 @Group         P3040/P4080/P5020_chip_id P5020 Application Programming Interface

 @Description   P3040/P4080/P5020 Chip functions,definitions and enums.

 @{
*//***************************************************************************/

#define CORE_E500MC

#define INTG_MAX_NUM_OF_CORES   1
#define CORE_GetId()            0
#define CORE_IS_BIG_ENDIAN
#define SYS_ANY_CORE    ((uint32_t)-1)  /**< Assignment to any valid core */
#define SYS_IS_MASTER_CORE()    TRUE


/**************************************************************************//**
 @Description   Module types.
*//***************************************************************************/
typedef enum e_ModuleId
{
    e_MODULE_ID_DUART_1 = 0,
    e_MODULE_ID_DUART_2,
    e_MODULE_ID_DUART_3,
    e_MODULE_ID_DUART_4,
    e_MODULE_ID_LAW,
    e_MODULE_ID_LBC,
    e_MODULE_ID_PAMU,
    e_MODULE_ID_QM,                 /**< Queue manager module */
    e_MODULE_ID_BM,                 /**< Buffer manager module */
    e_MODULE_ID_QM_CE_PORTAL_0,
    e_MODULE_ID_QM_CI_PORTAL_0,
    e_MODULE_ID_QM_CE_PORTAL_1,
    e_MODULE_ID_QM_CI_PORTAL_1,
    e_MODULE_ID_QM_CE_PORTAL_2,
    e_MODULE_ID_QM_CI_PORTAL_2,
    e_MODULE_ID_QM_CE_PORTAL_3,
    e_MODULE_ID_QM_CI_PORTAL_3,
    e_MODULE_ID_QM_CE_PORTAL_4,
    e_MODULE_ID_QM_CI_PORTAL_4,
    e_MODULE_ID_QM_CE_PORTAL_5,
    e_MODULE_ID_QM_CI_PORTAL_5,
    e_MODULE_ID_QM_CE_PORTAL_6,
    e_MODULE_ID_QM_CI_PORTAL_6,
    e_MODULE_ID_QM_CE_PORTAL_7,
    e_MODULE_ID_QM_CI_PORTAL_7,
    e_MODULE_ID_QM_CE_PORTAL_8,
    e_MODULE_ID_QM_CI_PORTAL_8,
    e_MODULE_ID_QM_CE_PORTAL_9,
    e_MODULE_ID_QM_CI_PORTAL_9,
    e_MODULE_ID_BM_CE_PORTAL_0,
    e_MODULE_ID_BM_CI_PORTAL_0,
    e_MODULE_ID_BM_CE_PORTAL_1,
    e_MODULE_ID_BM_CI_PORTAL_1,
    e_MODULE_ID_BM_CE_PORTAL_2,
    e_MODULE_ID_BM_CI_PORTAL_2,
    e_MODULE_ID_BM_CE_PORTAL_3,
    e_MODULE_ID_BM_CI_PORTAL_3,
    e_MODULE_ID_BM_CE_PORTAL_4,
    e_MODULE_ID_BM_CI_PORTAL_4,
    e_MODULE_ID_BM_CE_PORTAL_5,
    e_MODULE_ID_BM_CI_PORTAL_5,
    e_MODULE_ID_BM_CE_PORTAL_6,
    e_MODULE_ID_BM_CI_PORTAL_6,
    e_MODULE_ID_BM_CE_PORTAL_7,
    e_MODULE_ID_BM_CI_PORTAL_7,
    e_MODULE_ID_BM_CE_PORTAL_8,
    e_MODULE_ID_BM_CI_PORTAL_8,
    e_MODULE_ID_BM_CE_PORTAL_9,
    e_MODULE_ID_BM_CI_PORTAL_9,
    e_MODULE_ID_FM1,                /**< Frame manager #1 module */
    e_MODULE_ID_FM1_RTC,            /**< FM Real-Time-Clock */
    e_MODULE_ID_FM1_MURAM,          /**< FM Multi-User-RAM */
    e_MODULE_ID_FM1_BMI,            /**< FM BMI block */
    e_MODULE_ID_FM1_QMI,            /**< FM QMI block */
    e_MODULE_ID_FM1_PRS,            /**< FM parser block */
    e_MODULE_ID_FM1_PORT_HO0,       /**< FM Host-command/offline-parsing port block */
    e_MODULE_ID_FM1_PORT_HO1,       /**< FM Host-command/offline-parsing port block */
    e_MODULE_ID_FM1_PORT_HO2,       /**< FM Host-command/offline-parsing port block */
    e_MODULE_ID_FM1_PORT_HO3,       /**< FM Host-command/offline-parsing port block */
    e_MODULE_ID_FM1_PORT_HO4,       /**< FM Host-command/offline-parsing port block */
    e_MODULE_ID_FM1_PORT_HO5,       /**< FM Host-command/offline-parsing port block */
    e_MODULE_ID_FM1_PORT_HO6,       /**< FM Host-command/offline-parsing port block */
    e_MODULE_ID_FM1_PORT_1GRx0,     /**< FM Rx 1G MAC port block */
    e_MODULE_ID_FM1_PORT_1GRx1,     /**< FM Rx 1G MAC port block */
    e_MODULE_ID_FM1_PORT_1GRx2,     /**< FM Rx 1G MAC port block */
    e_MODULE_ID_FM1_PORT_1GRx3,     /**< FM Rx 1G MAC port block */
    e_MODULE_ID_FM1_PORT_1GRx4,     /**< FM Rx 1G MAC port block */
    e_MODULE_ID_FM1_PORT_10GRx0,    /**< FM Rx 10G MAC port block */
    e_MODULE_ID_FM1_PORT_1GTx0,     /**< FM Tx 1G MAC port block */
    e_MODULE_ID_FM1_PORT_1GTx1,     /**< FM Tx 1G MAC port block */
    e_MODULE_ID_FM1_PORT_1GTx2,     /**< FM Tx 1G MAC port block */
    e_MODULE_ID_FM1_PORT_1GTx3,     /**< FM Tx 1G MAC port block */
    e_MODULE_ID_FM1_PORT_1GTx4,     /**< FM Tx 1G MAC port block */
    e_MODULE_ID_FM1_PORT_10GTx0,    /**< FM Tx 10G MAC port block */
    e_MODULE_ID_FM1_PLCR,           /**< FM Policer */
    e_MODULE_ID_FM1_KG,             /**< FM Keygen */
    e_MODULE_ID_FM1_DMA,            /**< FM DMA */
    e_MODULE_ID_FM1_FPM,            /**< FM FPM */
    e_MODULE_ID_FM1_IRAM,           /**< FM Instruction-RAM */
    e_MODULE_ID_FM1_1GMDIO0,        /**< FM 1G MDIO MAC 0*/
    e_MODULE_ID_FM1_1GMDIO1,        /**< FM 1G MDIO MAC 1*/
    e_MODULE_ID_FM1_1GMDIO2,        /**< FM 1G MDIO MAC 2*/
    e_MODULE_ID_FM1_1GMDIO3,        /**< FM 1G MDIO MAC 3*/
    e_MODULE_ID_FM1_10GMDIO,        /**< FM 10G MDIO */
    e_MODULE_ID_FM1_PRS_IRAM,       /**< FM SW-parser Instruction-RAM */
    e_MODULE_ID_FM1_1GMAC0,         /**< FM 1G MAC #0 */
    e_MODULE_ID_FM1_1GMAC1,         /**< FM 1G MAC #1 */
    e_MODULE_ID_FM1_1GMAC2,         /**< FM 1G MAC #2 */
    e_MODULE_ID_FM1_1GMAC3,         /**< FM 1G MAC #3 */
    e_MODULE_ID_FM1_10GMAC0,        /**< FM 10G MAC #0 */

    e_MODULE_ID_FM2,                /**< Frame manager #2 module */
    e_MODULE_ID_FM2_RTC,            /**< FM Real-Time-Clock */
    e_MODULE_ID_FM2_MURAM,          /**< FM Multi-User-RAM */
    e_MODULE_ID_FM2_BMI,            /**< FM BMI block */
    e_MODULE_ID_FM2_QMI,            /**< FM QMI block */
    e_MODULE_ID_FM2_PRS,            /**< FM parser block */
    e_MODULE_ID_FM2_PORT_HO0,       /**< FM Host-command/offline-parsing port block */
    e_MODULE_ID_FM2_PORT_HO1,       /**< FM Host-command/offline-parsing port block */
    e_MODULE_ID_FM2_PORT_HO2,       /**< FM Host-command/offline-parsing port block */
    e_MODULE_ID_FM2_PORT_HO3,       /**< FM Host-command/offline-parsing port block */
    e_MODULE_ID_FM2_PORT_HO4,       /**< FM Host-command/offline-parsing port block */
    e_MODULE_ID_FM2_PORT_HO5,       /**< FM Host-command/offline-parsing port block */
    e_MODULE_ID_FM2_PORT_HO6,       /**< FM Host-command/offline-parsing port block */
    e_MODULE_ID_FM2_PORT_1GRx0,     /**< FM Rx 1G MAC port block */
    e_MODULE_ID_FM2_PORT_1GRx1,     /**< FM Rx 1G MAC port block */
    e_MODULE_ID_FM2_PORT_1GRx2,     /**< FM Rx 1G MAC port block */
    e_MODULE_ID_FM2_PORT_1GRx3,     /**< FM Rx 1G MAC port block */
    e_MODULE_ID_FM2_PORT_10GRx0,    /**< FM Rx 10G MAC port block */
    e_MODULE_ID_FM2_PORT_1GTx0,     /**< FM Tx 1G MAC port block */
    e_MODULE_ID_FM2_PORT_1GTx1,     /**< FM Tx 1G MAC port block */
    e_MODULE_ID_FM2_PORT_1GTx2,     /**< FM Tx 1G MAC port block */
    e_MODULE_ID_FM2_PORT_1GTx3,     /**< FM Tx 1G MAC port block */
    e_MODULE_ID_FM2_PORT_10GTx0,    /**< FM Tx 10G MAC port block */
    e_MODULE_ID_FM2_PLCR,           /**< FM Policer */
    e_MODULE_ID_FM2_KG,             /**< FM Keygen */
    e_MODULE_ID_FM2_DMA,            /**< FM DMA */
    e_MODULE_ID_FM2_FPM,            /**< FM FPM */
    e_MODULE_ID_FM2_IRAM,           /**< FM Instruction-RAM */
    e_MODULE_ID_FM2_1GMDIO0,        /**< FM 1G MDIO MAC 0*/
    e_MODULE_ID_FM2_1GMDIO1,        /**< FM 1G MDIO MAC 1*/
    e_MODULE_ID_FM2_1GMDIO2,        /**< FM 1G MDIO MAC 2*/
    e_MODULE_ID_FM2_1GMDIO3,        /**< FM 1G MDIO MAC 3*/
    e_MODULE_ID_FM2_10GMDIO,        /**< FM 10G MDIO */
    e_MODULE_ID_FM2_PRS_IRAM,       /**< FM SW-parser Instruction-RAM */
    e_MODULE_ID_FM2_1GMAC0,         /**< FM 1G MAC #0 */
    e_MODULE_ID_FM2_1GMAC1,         /**< FM 1G MAC #1 */
    e_MODULE_ID_FM2_1GMAC2,         /**< FM 1G MAC #2 */
    e_MODULE_ID_FM2_1GMAC3,         /**< FM 1G MAC #3 */
    e_MODULE_ID_FM2_10GMAC0,        /**< FM 10G MAC #0 */

    e_MODULE_ID_SEC_GEN,            /**< SEC 4.0 General registers      */
    e_MODULE_ID_SEC_QI,             /**< SEC 4.0 QI registers           */
    e_MODULE_ID_SEC_JQ0,            /**< SEC 4.0 JQ-0 registers         */
    e_MODULE_ID_SEC_JQ1,            /**< SEC 4.0 JQ-1 registers         */
    e_MODULE_ID_SEC_JQ2,            /**< SEC 4.0 JQ-2 registers         */
    e_MODULE_ID_SEC_JQ3,            /**< SEC 4.0 JQ-3 registers         */
    e_MODULE_ID_SEC_RTIC,           /**< SEC 4.0 RTIC registers         */
    e_MODULE_ID_SEC_DECO0_CCB0,     /**< SEC 4.0 DECO-0/CCB-0 registers */
    e_MODULE_ID_SEC_DECO1_CCB1,     /**< SEC 4.0 DECO-1/CCB-1 registers */
    e_MODULE_ID_SEC_DECO2_CCB2,     /**< SEC 4.0 DECO-2/CCB-2 registers */
    e_MODULE_ID_SEC_DECO3_CCB3,     /**< SEC 4.0 DECO-3/CCB-3 registers */
    e_MODULE_ID_SEC_DECO4_CCB4,     /**< SEC 4.0 DECO-4/CCB-4 registers */

    e_MODULE_ID_MPIC,               /**< MPIC */
    e_MODULE_ID_GPIO,               /**< GPIO */
    e_MODULE_ID_SERDES,             /**< SERDES */
    e_MODULE_ID_CPC_1,              /**< CoreNet-Platform-Cache 1 */
    e_MODULE_ID_CPC_2,              /**< CoreNet-Platform-Cache 2 */

    e_MODULE_ID_SRIO_PORTS,     	/**< RapidIO controller */
    e_MODULE_ID_SRIO_MU,        	/**< RapidIO messaging unit module */

    e_MODULE_ID_DUMMY_LAST
} e_ModuleId;

#define NUM_OF_MODULES  e_MODULE_ID_DUMMY_LAST


/*****************************************************************************
 PAMU INTEGRATION-SPECIFIC DEFINITIONS
******************************************************************************/
#define PAMU_NUM_OF_PARTITIONS  5

#define PAMU_PICS_AVICS_ERRATA_PAMU3

/*****************************************************************************
 LAW INTEGRATION-SPECIFIC DEFINITIONS
******************************************************************************/
#define LAW_NUM_OF_WINDOWS      32
#define LAW_MIN_WINDOW_SIZE     0x0000000000001000LL    /**< 4KB */
#define LAW_MAX_WINDOW_SIZE     0x0000002000000000LL    /**< 64GB */


/*****************************************************************************
 LBC INTEGRATION-SPECIFIC DEFINITIONS
******************************************************************************/
/**************************************************************************//**
 @Group         lbc_exception_grp LBC Exception Unit

 @Description   LBC Exception unit API functions, definitions and enums

 @{
*//***************************************************************************/

/**************************************************************************//**
 @Anchor        lbc_exbm

 @Collection    LBC Errors Bit Mask

                These errors are reported through the exceptions callback..
                The values can be or'ed in any combination in the errors mask
                parameter of the errors report structure.

                These errors can also be passed as a bit-mask to
                LBC_EnableErrorChecking() or LBC_DisableErrorChecking(),
                for enabling or disabling error checking.
 @{
*//***************************************************************************/
#define LBC_ERR_BUS_MONITOR     0x80000000  /**< Bus monitor error */
#define LBC_ERR_PARITY_ECC      0x20000000  /**< Parity error for GPCM/UPM */
#define LBC_ERR_WRITE_PROTECT   0x04000000  /**< Write protection error */
#define LBC_ERR_ATOMIC_WRITE    0x00800000  /**< Atomic write error */
#define LBC_ERR_ATOMIC_READ     0x00400000  /**< Atomic read error */
#define LBC_ERR_CHIP_SELECT     0x00080000  /**< Unrecognized chip select */

#define LBC_ERR_ALL             (LBC_ERR_BUS_MONITOR | LBC_ERR_PARITY_ECC | \
                                 LBC_ERR_WRITE_PROTECT | LBC_ERR_ATOMIC_WRITE | \
                                 LBC_ERR_ATOMIC_READ | LBC_ERR_CHIP_SELECT)
                                            /**< All possible errors */
/* @} */
/** @} */ /* end of lbc_exception_grp group */

#define LBC_INCORRECT_ERROR_REPORT_ERRATA

#define LBC_NUM_OF_BANKS            8
#define LBC_MAX_CS_SIZE             0x0000000100000000LL
#define LBC_ATOMIC_OPERATION_SUPPORT
#define LBC_PARITY_SUPPORT
#define LBC_ADDRESS_HOLD_TIME_CTRL
#define LBC_HIGH_CLK_DIVIDERS
#define LBC_FCM_AVAILABLE

/*****************************************************************************
 GPIO INTEGRATION-SPECIFIC DEFINITIONS
******************************************************************************/
#define GPIO_NUM_OF_PORTS   1   /**< Number of ports in GPIO module;
                                     Each port contains up to 32 i/O pins. */

#define GPIO_VALID_PIN_MASKS  \
    { /* Port A */ 0xFFFFFFFF }

#define GPIO_VALID_INTR_MASKS \
    { /* Port A */ 0xFFFFFFFF }

#endif /* P1023 */

#endif /* __PART_INTEGRATION_P3_P4_P5_H */
