/**
 * SPDX-FileCopyrightText: 2025 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#include "modem/reg_base.h"
#ifdef __cplusplus
extern "C" {
#endif

/** MODEM_SYSCON_TEST_CONF_REG register
 *  No description
 */
#define MODEM_SYSCON_TEST_CONF_REG (DR_REG_MODEM_SYSCON_BASE + 0x0)
/** MODEM_SYSCON_CLK_EN : R/W; bitpos: [0]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_EN    (BIT(0))
#define MODEM_SYSCON_CLK_EN_M  (MODEM_SYSCON_CLK_EN_V << MODEM_SYSCON_CLK_EN_S)
#define MODEM_SYSCON_CLK_EN_V  0x00000001U
#define MODEM_SYSCON_CLK_EN_S  0

/** MODEM_SYSCON_CLK_CONF_REG register
 *  No description
 */
#define MODEM_SYSCON_CLK_CONF_REG (DR_REG_MODEM_SYSCON_BASE + 0x4)
/** MODEM_SYSCON_CLK_ETM_EN : R/W; bitpos: [21]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_ETM_EN    (BIT(21))
#define MODEM_SYSCON_CLK_ETM_EN_M  (MODEM_SYSCON_CLK_ETM_EN_V << MODEM_SYSCON_CLK_ETM_EN_S)
#define MODEM_SYSCON_CLK_ETM_EN_V  0x00000001U
#define MODEM_SYSCON_CLK_ETM_EN_S  21
/** MODEM_SYSCON_CLK_ZB_APB_EN : R/W; bitpos: [22]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_ZB_APB_EN    (BIT(22))
#define MODEM_SYSCON_CLK_ZB_APB_EN_M  (MODEM_SYSCON_CLK_ZB_APB_EN_V << MODEM_SYSCON_CLK_ZB_APB_EN_S)
#define MODEM_SYSCON_CLK_ZB_APB_EN_V  0x00000001U
#define MODEM_SYSCON_CLK_ZB_APB_EN_S  22
/** MODEM_SYSCON_CLK_ZB_MAC_EN : R/W; bitpos: [23]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_ZB_MAC_EN    (BIT(23))
#define MODEM_SYSCON_CLK_ZB_MAC_EN_M  (MODEM_SYSCON_CLK_ZB_MAC_EN_V << MODEM_SYSCON_CLK_ZB_MAC_EN_S)
#define MODEM_SYSCON_CLK_ZB_MAC_EN_V  0x00000001U
#define MODEM_SYSCON_CLK_ZB_MAC_EN_S  23
/** MODEM_SYSCON_CLK_MODEM_SEC_ECB_EN : R/W; bitpos: [24]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_MODEM_SEC_ECB_EN    (BIT(24))
#define MODEM_SYSCON_CLK_MODEM_SEC_ECB_EN_M  (MODEM_SYSCON_CLK_MODEM_SEC_ECB_EN_V << MODEM_SYSCON_CLK_MODEM_SEC_ECB_EN_S)
#define MODEM_SYSCON_CLK_MODEM_SEC_ECB_EN_V  0x00000001U
#define MODEM_SYSCON_CLK_MODEM_SEC_ECB_EN_S  24
/** MODEM_SYSCON_CLK_MODEM_SEC_CCM_EN : R/W; bitpos: [25]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_MODEM_SEC_CCM_EN    (BIT(25))
#define MODEM_SYSCON_CLK_MODEM_SEC_CCM_EN_M  (MODEM_SYSCON_CLK_MODEM_SEC_CCM_EN_V << MODEM_SYSCON_CLK_MODEM_SEC_CCM_EN_S)
#define MODEM_SYSCON_CLK_MODEM_SEC_CCM_EN_V  0x00000001U
#define MODEM_SYSCON_CLK_MODEM_SEC_CCM_EN_S  25
/** MODEM_SYSCON_CLK_MODEM_SEC_BAH_EN : R/W; bitpos: [26]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_MODEM_SEC_BAH_EN    (BIT(26))
#define MODEM_SYSCON_CLK_MODEM_SEC_BAH_EN_M  (MODEM_SYSCON_CLK_MODEM_SEC_BAH_EN_V << MODEM_SYSCON_CLK_MODEM_SEC_BAH_EN_S)
#define MODEM_SYSCON_CLK_MODEM_SEC_BAH_EN_V  0x00000001U
#define MODEM_SYSCON_CLK_MODEM_SEC_BAH_EN_S  26
/** MODEM_SYSCON_CLK_MODEM_SEC_APB_EN : R/W; bitpos: [27]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_MODEM_SEC_APB_EN    (BIT(27))
#define MODEM_SYSCON_CLK_MODEM_SEC_APB_EN_M  (MODEM_SYSCON_CLK_MODEM_SEC_APB_EN_V << MODEM_SYSCON_CLK_MODEM_SEC_APB_EN_S)
#define MODEM_SYSCON_CLK_MODEM_SEC_APB_EN_V  0x00000001U
#define MODEM_SYSCON_CLK_MODEM_SEC_APB_EN_S  27
/** MODEM_SYSCON_CLK_MODEM_SEC_EN : R/W; bitpos: [28]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_MODEM_SEC_EN    (BIT(28))
#define MODEM_SYSCON_CLK_MODEM_SEC_EN_M  (MODEM_SYSCON_CLK_MODEM_SEC_EN_V << MODEM_SYSCON_CLK_MODEM_SEC_EN_S)
#define MODEM_SYSCON_CLK_MODEM_SEC_EN_V  0x00000001U
#define MODEM_SYSCON_CLK_MODEM_SEC_EN_S  28
/** MODEM_SYSCON_CLK_BLE_TIMER_APB_EN : R/W; bitpos: [29]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_BLE_TIMER_APB_EN    (BIT(29))
#define MODEM_SYSCON_CLK_BLE_TIMER_APB_EN_M  (MODEM_SYSCON_CLK_BLE_TIMER_APB_EN_V << MODEM_SYSCON_CLK_BLE_TIMER_APB_EN_S)
#define MODEM_SYSCON_CLK_BLE_TIMER_APB_EN_V  0x00000001U
#define MODEM_SYSCON_CLK_BLE_TIMER_APB_EN_S  29
/** MODEM_SYSCON_CLK_BLE_TIMER_EN : R/W; bitpos: [30]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_BLE_TIMER_EN    (BIT(30))
#define MODEM_SYSCON_CLK_BLE_TIMER_EN_M  (MODEM_SYSCON_CLK_BLE_TIMER_EN_V << MODEM_SYSCON_CLK_BLE_TIMER_EN_S)
#define MODEM_SYSCON_CLK_BLE_TIMER_EN_V  0x00000001U
#define MODEM_SYSCON_CLK_BLE_TIMER_EN_S  30
/** MODEM_SYSCON_CLK_DATA_DUMP_EN : R/W; bitpos: [31]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_DATA_DUMP_EN    (BIT(31))
#define MODEM_SYSCON_CLK_DATA_DUMP_EN_M  (MODEM_SYSCON_CLK_DATA_DUMP_EN_V << MODEM_SYSCON_CLK_DATA_DUMP_EN_S)
#define MODEM_SYSCON_CLK_DATA_DUMP_EN_V  0x00000001U
#define MODEM_SYSCON_CLK_DATA_DUMP_EN_S  31

/** MODEM_SYSCON_CLK_CONF_FORCE_ON_REG register
 *  No description
 */
#define MODEM_SYSCON_CLK_CONF_FORCE_ON_REG (DR_REG_MODEM_SYSCON_BASE + 0x8)
/** MODEM_SYSCON_CLK_ETM_FO : R/W; bitpos: [22]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_ETM_FO    (BIT(22))
#define MODEM_SYSCON_CLK_ETM_FO_M  (MODEM_SYSCON_CLK_ETM_FO_V << MODEM_SYSCON_CLK_ETM_FO_S)
#define MODEM_SYSCON_CLK_ETM_FO_V  0x00000001U
#define MODEM_SYSCON_CLK_ETM_FO_S  22
/** MODEM_SYSCON_CLK_ZB_FO : R/W; bitpos: [24]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_ZB_FO    (BIT(24))
#define MODEM_SYSCON_CLK_ZB_FO_M  (MODEM_SYSCON_CLK_ZB_FO_V << MODEM_SYSCON_CLK_ZB_FO_S)
#define MODEM_SYSCON_CLK_ZB_FO_V  0x00000001U
#define MODEM_SYSCON_CLK_ZB_FO_S  24
/** MODEM_SYSCON_CLK_MODEM_SEC_FO : R/W; bitpos: [29]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_MODEM_SEC_FO    (BIT(29))
#define MODEM_SYSCON_CLK_MODEM_SEC_FO_M  (MODEM_SYSCON_CLK_MODEM_SEC_FO_V << MODEM_SYSCON_CLK_MODEM_SEC_FO_S)
#define MODEM_SYSCON_CLK_MODEM_SEC_FO_V  0x00000001U
#define MODEM_SYSCON_CLK_MODEM_SEC_FO_S  29
/** MODEM_SYSCON_CLK_BLE_TIMER_FO : R/W; bitpos: [30]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_BLE_TIMER_FO    (BIT(30))
#define MODEM_SYSCON_CLK_BLE_TIMER_FO_M  (MODEM_SYSCON_CLK_BLE_TIMER_FO_V << MODEM_SYSCON_CLK_BLE_TIMER_FO_S)
#define MODEM_SYSCON_CLK_BLE_TIMER_FO_V  0x00000001U
#define MODEM_SYSCON_CLK_BLE_TIMER_FO_S  30
/** MODEM_SYSCON_CLK_DATA_DUMP_FO : R/W; bitpos: [31]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_DATA_DUMP_FO    (BIT(31))
#define MODEM_SYSCON_CLK_DATA_DUMP_FO_M  (MODEM_SYSCON_CLK_DATA_DUMP_FO_V << MODEM_SYSCON_CLK_DATA_DUMP_FO_S)
#define MODEM_SYSCON_CLK_DATA_DUMP_FO_V  0x00000001U
#define MODEM_SYSCON_CLK_DATA_DUMP_FO_S  31

/** MODEM_SYSCON_MODEM_RST_CONF_REG register
 *  No description
 */
#define MODEM_SYSCON_MODEM_RST_CONF_REG (DR_REG_MODEM_SYSCON_BASE + 0xc)
/** MODEM_SYSCON_RST_FE : R/W; bitpos: [14]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_RST_FE    (BIT(14))
#define MODEM_SYSCON_RST_FE_M  (MODEM_SYSCON_RST_FE_V << MODEM_SYSCON_RST_FE_S)
#define MODEM_SYSCON_RST_FE_V  0x00000001U
#define MODEM_SYSCON_RST_FE_S  14
/** MODEM_SYSCON_RST_BTMAC_APB : R/W; bitpos: [15]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_RST_BTMAC_APB    (BIT(15))
#define MODEM_SYSCON_RST_BTMAC_APB_M  (MODEM_SYSCON_RST_BTMAC_APB_V << MODEM_SYSCON_RST_BTMAC_APB_S)
#define MODEM_SYSCON_RST_BTMAC_APB_V  0x00000001U
#define MODEM_SYSCON_RST_BTMAC_APB_S  15
/** MODEM_SYSCON_RST_BTMAC : R/W; bitpos: [16]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_RST_BTMAC    (BIT(16))
#define MODEM_SYSCON_RST_BTMAC_M  (MODEM_SYSCON_RST_BTMAC_V << MODEM_SYSCON_RST_BTMAC_S)
#define MODEM_SYSCON_RST_BTMAC_V  0x00000001U
#define MODEM_SYSCON_RST_BTMAC_S  16
/** MODEM_SYSCON_RST_BTBB_APB : R/W; bitpos: [17]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_RST_BTBB_APB    (BIT(17))
#define MODEM_SYSCON_RST_BTBB_APB_M  (MODEM_SYSCON_RST_BTBB_APB_V << MODEM_SYSCON_RST_BTBB_APB_S)
#define MODEM_SYSCON_RST_BTBB_APB_V  0x00000001U
#define MODEM_SYSCON_RST_BTBB_APB_S  17
/** MODEM_SYSCON_RST_BTBB : R/W; bitpos: [18]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_RST_BTBB    (BIT(18))
#define MODEM_SYSCON_RST_BTBB_M  (MODEM_SYSCON_RST_BTBB_V << MODEM_SYSCON_RST_BTBB_S)
#define MODEM_SYSCON_RST_BTBB_V  0x00000001U
#define MODEM_SYSCON_RST_BTBB_S  18
/** MODEM_SYSCON_RST_ETM : R/W; bitpos: [22]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_RST_ETM    (BIT(22))
#define MODEM_SYSCON_RST_ETM_M  (MODEM_SYSCON_RST_ETM_V << MODEM_SYSCON_RST_ETM_S)
#define MODEM_SYSCON_RST_ETM_V  0x00000001U
#define MODEM_SYSCON_RST_ETM_S  22
/** MODEM_SYSCON_RST_ZBMAC_APB : R/W; bitpos: [23]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_RST_ZBMAC_APB    (BIT(23))
#define MODEM_SYSCON_RST_ZBMAC_APB_M  (MODEM_SYSCON_RST_ZBMAC_APB_V << MODEM_SYSCON_RST_ZBMAC_APB_S)
#define MODEM_SYSCON_RST_ZBMAC_APB_V  0x00000001U
#define MODEM_SYSCON_RST_ZBMAC_APB_S  23
/** MODEM_SYSCON_RST_ZBMAC : R/W; bitpos: [24]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_RST_ZBMAC    (BIT(24))
#define MODEM_SYSCON_RST_ZBMAC_M  (MODEM_SYSCON_RST_ZBMAC_V << MODEM_SYSCON_RST_ZBMAC_S)
#define MODEM_SYSCON_RST_ZBMAC_V  0x00000001U
#define MODEM_SYSCON_RST_ZBMAC_S  24
/** MODEM_SYSCON_RST_MODEM_ECB : R/W; bitpos: [25]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_RST_MODEM_ECB    (BIT(25))
#define MODEM_SYSCON_RST_MODEM_ECB_M  (MODEM_SYSCON_RST_MODEM_ECB_V << MODEM_SYSCON_RST_MODEM_ECB_S)
#define MODEM_SYSCON_RST_MODEM_ECB_V  0x00000001U
#define MODEM_SYSCON_RST_MODEM_ECB_S  25
/** MODEM_SYSCON_RST_MODEM_CCM : R/W; bitpos: [26]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_RST_MODEM_CCM    (BIT(26))
#define MODEM_SYSCON_RST_MODEM_CCM_M  (MODEM_SYSCON_RST_MODEM_CCM_V << MODEM_SYSCON_RST_MODEM_CCM_S)
#define MODEM_SYSCON_RST_MODEM_CCM_V  0x00000001U
#define MODEM_SYSCON_RST_MODEM_CCM_S  26
/** MODEM_SYSCON_RST_MODEM_BAH : R/W; bitpos: [27]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_RST_MODEM_BAH    (BIT(27))
#define MODEM_SYSCON_RST_MODEM_BAH_M  (MODEM_SYSCON_RST_MODEM_BAH_V << MODEM_SYSCON_RST_MODEM_BAH_S)
#define MODEM_SYSCON_RST_MODEM_BAH_V  0x00000001U
#define MODEM_SYSCON_RST_MODEM_BAH_S  27
/** MODEM_SYSCON_RST_MODEM_SEC : R/W; bitpos: [29]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_RST_MODEM_SEC    (BIT(29))
#define MODEM_SYSCON_RST_MODEM_SEC_M  (MODEM_SYSCON_RST_MODEM_SEC_V << MODEM_SYSCON_RST_MODEM_SEC_S)
#define MODEM_SYSCON_RST_MODEM_SEC_V  0x00000001U
#define MODEM_SYSCON_RST_MODEM_SEC_S  29
/** MODEM_SYSCON_RST_BLE_TIMER : R/W; bitpos: [30]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_RST_BLE_TIMER    (BIT(30))
#define MODEM_SYSCON_RST_BLE_TIMER_M  (MODEM_SYSCON_RST_BLE_TIMER_V << MODEM_SYSCON_RST_BLE_TIMER_S)
#define MODEM_SYSCON_RST_BLE_TIMER_V  0x00000001U
#define MODEM_SYSCON_RST_BLE_TIMER_S  30
/** MODEM_SYSCON_RST_DATA_DUMP : R/W; bitpos: [31]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_RST_DATA_DUMP    (BIT(31))
#define MODEM_SYSCON_RST_DATA_DUMP_M  (MODEM_SYSCON_RST_DATA_DUMP_V << MODEM_SYSCON_RST_DATA_DUMP_S)
#define MODEM_SYSCON_RST_DATA_DUMP_V  0x00000001U
#define MODEM_SYSCON_RST_DATA_DUMP_S  31

/** MODEM_SYSCON_CLK_CONF1_REG register
 *  No description
 */
#define MODEM_SYSCON_CLK_CONF1_REG (DR_REG_MODEM_SYSCON_BASE + 0x10)
/** MODEM_SYSCON_CLK_FE_TXLOGAIN_EN : R/W; bitpos: [11]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_FE_TXLOGAIN_EN    (BIT(11))
#define MODEM_SYSCON_CLK_FE_TXLOGAIN_EN_M  (MODEM_SYSCON_CLK_FE_TXLOGAIN_EN_V << MODEM_SYSCON_CLK_FE_TXLOGAIN_EN_S)
#define MODEM_SYSCON_CLK_FE_TXLOGAIN_EN_V  0x00000001U
#define MODEM_SYSCON_CLK_FE_TXLOGAIN_EN_S  11
/** MODEM_SYSCON_CLK_FE_16M_EN : R/W; bitpos: [12]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_FE_16M_EN    (BIT(12))
#define MODEM_SYSCON_CLK_FE_16M_EN_M  (MODEM_SYSCON_CLK_FE_16M_EN_V << MODEM_SYSCON_CLK_FE_16M_EN_S)
#define MODEM_SYSCON_CLK_FE_16M_EN_V  0x00000001U
#define MODEM_SYSCON_CLK_FE_16M_EN_S  12
/** MODEM_SYSCON_CLK_FE_32M_EN : R/W; bitpos: [13]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_FE_32M_EN    (BIT(13))
#define MODEM_SYSCON_CLK_FE_32M_EN_M  (MODEM_SYSCON_CLK_FE_32M_EN_V << MODEM_SYSCON_CLK_FE_32M_EN_S)
#define MODEM_SYSCON_CLK_FE_32M_EN_V  0x00000001U
#define MODEM_SYSCON_CLK_FE_32M_EN_S  13
/** MODEM_SYSCON_CLK_FE_SDM_EN : R/W; bitpos: [14]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_FE_SDM_EN    (BIT(14))
#define MODEM_SYSCON_CLK_FE_SDM_EN_M  (MODEM_SYSCON_CLK_FE_SDM_EN_V << MODEM_SYSCON_CLK_FE_SDM_EN_S)
#define MODEM_SYSCON_CLK_FE_SDM_EN_V  0x00000001U
#define MODEM_SYSCON_CLK_FE_SDM_EN_S  14
/** MODEM_SYSCON_CLK_FE_ADC_EN : R/W; bitpos: [15]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_FE_ADC_EN    (BIT(15))
#define MODEM_SYSCON_CLK_FE_ADC_EN_M  (MODEM_SYSCON_CLK_FE_ADC_EN_V << MODEM_SYSCON_CLK_FE_ADC_EN_S)
#define MODEM_SYSCON_CLK_FE_ADC_EN_V  0x00000001U
#define MODEM_SYSCON_CLK_FE_ADC_EN_S  15
/** MODEM_SYSCON_CLK_FE_APB_EN : R/W; bitpos: [16]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_FE_APB_EN    (BIT(16))
#define MODEM_SYSCON_CLK_FE_APB_EN_M  (MODEM_SYSCON_CLK_FE_APB_EN_V << MODEM_SYSCON_CLK_FE_APB_EN_S)
#define MODEM_SYSCON_CLK_FE_APB_EN_V  0x00000001U
#define MODEM_SYSCON_CLK_FE_APB_EN_S  16
/** MODEM_SYSCON_CLK_BT_APB_EN : R/W; bitpos: [17]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_BT_APB_EN    (BIT(17))
#define MODEM_SYSCON_CLK_BT_APB_EN_M  (MODEM_SYSCON_CLK_BT_APB_EN_V << MODEM_SYSCON_CLK_BT_APB_EN_S)
#define MODEM_SYSCON_CLK_BT_APB_EN_V  0x00000001U
#define MODEM_SYSCON_CLK_BT_APB_EN_S  17
/** MODEM_SYSCON_CLK_BT_EN : R/W; bitpos: [18]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_BT_EN    (BIT(18))
#define MODEM_SYSCON_CLK_BT_EN_M  (MODEM_SYSCON_CLK_BT_EN_V << MODEM_SYSCON_CLK_BT_EN_S)
#define MODEM_SYSCON_CLK_BT_EN_V  0x00000001U
#define MODEM_SYSCON_CLK_BT_EN_S  18

/** MODEM_SYSCON_CLK_CONF1_FORCE_ON_REG register
 *  No description
 */
#define MODEM_SYSCON_CLK_CONF1_FORCE_ON_REG (DR_REG_MODEM_SYSCON_BASE + 0x14)
/** MODEM_SYSCON_CLK_FE_FO : R/W; bitpos: [16]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_FE_FO    (BIT(16))
#define MODEM_SYSCON_CLK_FE_FO_M  (MODEM_SYSCON_CLK_FE_FO_V << MODEM_SYSCON_CLK_FE_FO_S)
#define MODEM_SYSCON_CLK_FE_FO_V  0x00000001U
#define MODEM_SYSCON_CLK_FE_FO_S  16
/** MODEM_SYSCON_CLK_BT_FO : R/W; bitpos: [18]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_CLK_BT_FO    (BIT(18))
#define MODEM_SYSCON_CLK_BT_FO_M  (MODEM_SYSCON_CLK_BT_FO_V << MODEM_SYSCON_CLK_BT_FO_S)
#define MODEM_SYSCON_CLK_BT_FO_V  0x00000001U
#define MODEM_SYSCON_CLK_BT_FO_S  18

/** MODEM_SYSCON_MEM_CONF_REG register
 *  No description
 */
#define MODEM_SYSCON_MEM_CONF_REG (DR_REG_MODEM_SYSCON_BASE + 0x18)
/** MODEM_SYSCON_MODEM_MEM_WP : R/W; bitpos: [2:0]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_MODEM_MEM_WP    0x00000007U
#define MODEM_SYSCON_MODEM_MEM_WP_M  (MODEM_SYSCON_MODEM_MEM_WP_V << MODEM_SYSCON_MODEM_MEM_WP_S)
#define MODEM_SYSCON_MODEM_MEM_WP_V  0x00000007U
#define MODEM_SYSCON_MODEM_MEM_WP_S  0
/** MODEM_SYSCON_MODEM_MEM_WA : R/W; bitpos: [5:3]; default: 5;
 *  No description
 */
#define MODEM_SYSCON_MODEM_MEM_WA    0x00000007U
#define MODEM_SYSCON_MODEM_MEM_WA_M  (MODEM_SYSCON_MODEM_MEM_WA_V << MODEM_SYSCON_MODEM_MEM_WA_S)
#define MODEM_SYSCON_MODEM_MEM_WA_V  0x00000007U
#define MODEM_SYSCON_MODEM_MEM_WA_S  3
/** MODEM_SYSCON_MODEM_MEM_RA : R/W; bitpos: [7:6]; default: 0;
 *  No description
 */
#define MODEM_SYSCON_MODEM_MEM_RA    0x00000003U
#define MODEM_SYSCON_MODEM_MEM_RA_M  (MODEM_SYSCON_MODEM_MEM_RA_V << MODEM_SYSCON_MODEM_MEM_RA_S)
#define MODEM_SYSCON_MODEM_MEM_RA_V  0x00000003U
#define MODEM_SYSCON_MODEM_MEM_RA_S  6
/** MODEM_SYSCON_MODEM_MEM_RM : R/W; bitpos: [11:8]; default: 2;
 *  No description
 */
#define MODEM_SYSCON_MODEM_MEM_RM    0x0000000FU
#define MODEM_SYSCON_MODEM_MEM_RM_M  (MODEM_SYSCON_MODEM_MEM_RM_V << MODEM_SYSCON_MODEM_MEM_RM_S)
#define MODEM_SYSCON_MODEM_MEM_RM_V  0x0000000FU
#define MODEM_SYSCON_MODEM_MEM_RM_S  8

/** MODEM_SYSCON_DATE_REG register
 *  No description
 */
#define MODEM_SYSCON_DATE_REG (DR_REG_MODEM_SYSCON_BASE + 0x1c)
/** MODEM_SYSCON_DATE : R/W; bitpos: [27:0]; default: 37785904;
 *  No description
 */
#define MODEM_SYSCON_DATE    0x0FFFFFFFU
#define MODEM_SYSCON_DATE_M  (MODEM_SYSCON_DATE_V << MODEM_SYSCON_DATE_S)
#define MODEM_SYSCON_DATE_V  0x0FFFFFFFU
#define MODEM_SYSCON_DATE_S  0

#ifdef __cplusplus
}
#endif
