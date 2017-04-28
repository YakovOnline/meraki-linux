/*
 * Copyright (C) 2013, Broadcom Corporation. All Rights Reserved.
 * 
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */


#ifndef __SOCREGS_NSP_OPEN_H
#define __SOCREGS_NSP_OPEN_H

#define ChipcommonA_ChipID 0x18000000
#define PCU_MDIO_MGT 0x1803f000
#define ChipcommonB_PWMCTL 0x18031000
#define ChipcommonB_WDT_WDOGLOAD 0x18039000
#define USB3_CAPLENGTH 0x18029000
#define USB30_BASE USB3_CAPLENGTH	
#define SATA_AHCI_GHC_HBA_CAP 0x18041000
#define SATA_M0_IDM_IO_CONTROL_DIRECT 0x1811e408
#define SATA_M0_IDM_IDM_RESET_CONTROL 0x1811e800
#define SATA3_PCB_UPPER_REG1 0x18040304
#define SATA3_PCB_UPPER_REG0 0x18040300
#define SATA3_PCB_UPPER_REG1 0x18040304
#define SATA3_PCB_UPPER_REG11 0x1804032c
#define SATA3_PCB_UPPER_REG5 0x18040314
#define SATA3_PCB_UPPER_REG15 0x1804033c
#define SATA_TOP_CTRL_BUS_CTRL 0x18040024
#define ChipcommonB_GP_DATA_IN 0x18030000
#define ChipcommonB_GP_AUX_SEL_BASE 0x028
#define ChipcommonB_SMBus_Config 0x18038000
#define QSPI_mspi_SPCR0_LSB 0x18027200
#define QSPI_mspi_DISABLE_FLUSH_GEN 0x18027384
#define QSPI_bspi_registers_REVISION_ID 0x18027000
#define QSPI_bspi_registers_BSPI_PIO_DATA 0x1802704c
#define QSPI_raf_START_ADDR 0x18027100
#define QSPI_raf_interrupt_LR_fullness_reached 0x180273a0
#define QSPI_mspi_interrupt_MSPI_halt_set_transaction_done 0x180273b8
#define QSPI_IDM_IDM_IO_CONTROL_DIRECT 0x1811c408
#define QSPI_raf_CURR_ADDR 0x18027120
#define CRU_control 0x1803e000
#define GMAC0_DEVCONTROL 0x18022000
#define GMAC1_DEVCONTROL 0x18023000
#define FA_GMAC0_DEVCONTROL 0x18024000
#define FA_GMAC1_DEVCONTROL 0x18025000
#define CRU_CLKSET_KEY_OFFSET 0x1803f180
#define CRU_LCPLL2_CONTROL0 0x1803f548
#define CRU_LCPLL2_CONTROL0__PWRDWN 12
#define CRU_LCPLL2_CONTROL0__RESETB 11
#define CRU_LCPLL2_STATUS__LOCK 12
#define CRU_LCPLL2_CONTROL0__PWRDWN 12
#define CRU_LCPLL2_CONTROL0__RESETB 11
#define CRU_RESET__SGMII_RESET_N 8
#define CRU_RESET 0x1803f184
#define SGMII_CONFIG 0x1803f410
#define SGMII_CONFIG__RSTB_PLL 17
#define SGMII_CONFIG__RSTB_MDIOREGS 16
#define SGMII_CONFIG__TXD1G_FIFO_RSTB_WIDTH 4
#define SGMII_CONFIG__TXD1G_FIFO_RSTB_R 11
#define P5_MUX_CONFIG__P5_MODE_WIDTH 3
#define CRU_LCPLL2_CONTROL0__POST_RESETB 10
#define P5_MUX_CONFIG 0x1803f308
#define P5_MUX_CONFIG__P5_MODE_R 0
#define P5_MUX_CONFIG__P5_MODE_SGMII 0x0
#define P5_MUX_CONFIG__P5_MODE_GPHY3 0x4
#define P4_MUX_CONFIG 0x1803f30c
#define P4_MUX_CONFIG__P4_MODE_R 0
#define P4_MUX_CONFIG__P4_MODE_WIDTH 3
#define P4_MUX_CONFIG__P4_MODE_SGMII 0x0
#define ChipcommonA_GPIOEvent_BASE 0x078
#define ChipcommonA_GPIOInput_BASE 0x060
#define ChipcommonB_GP_INT_CLR_BASE 0x024
#define ChipcommonA_GPIOEventIntMask_BASE 0x07c
#define ChipcommonA_GPIOInput_BASE 0x060
#define ChipcommonB_GP_INT_MSK_BASE 0x018
#define ChipcommonA_GPIOIntMask_BASE 0x074
#define ChipcommonB_GP_INT_MSK_BASE 0x018
#define ChipcommonA_GPIOEventIntMask_BASE 0x07c
#define ChipcommonB_GP_INT_MSTAT_BASE 0x020
#define ChipcommonA_GPIOEventIntPolarity_BASE 0x084
#define ChipcommonA_IntStatus_BASE 0x020
#define ChipcommonA_GPIOIntPolarity_BASE 0x070
#define ChipcommonA_IntStatus_BASE 0x020
#define ChipcommonB_GP_INT_DE_BASE 0x010
#define ChipcommonB_GP_INT_EDGE_BASE 0x014
#define ChipcommonB_GP_INT_TYPE_BASE 0x00c
#define ChipcommonA_GPIOIntPolarity_BASE 0x070
#define CRU_GPIO_CONTROL0_BASE 0x1f1c0
#define ChipcommonB_GP_AUX_SEL_BASE 0x028
#define CRU_GPIO_CONTROL7_BASE 0x1f1dc
#define CRU_GPIO_CONTROL8_BASE 0x1f1e0
#define ChipcommonB_GP_PAD_RES_BASE 0x034
#define ChipcommonB_GP_RES_EN_BASE 0x038
#define ChipcommonA_ChipID 0x18000000
#define DMAC_pl330_DS 0x18020000
#define ChipcommonA_GPIOInput 0x18000060
#define ChipcommonB_GP_DATA_IN 0x18030000
#define PAXB_0_CLK_CONTROL 0x18012000
#define PAXB_0_CONFIG_IND_ADDR_BASE 0x120
#define ChipcommonB_MII_Management_Control 0x18032000
#define NAND_nand_flash_REVISION 0x18026000
#define NAND_direct_read_rd_miss 0x18026f00
#define NAND_IDM_IDM_IO_CONTROL_DIRECT 0x1811b408
#define ChipcommonB_PWM_PERIOD_COUNT0_BASE 0x004
#define ChipcommonB_PWM_PRESCALE_BASE 0x024
#define ChipcommonB_PWM_PERIOD_COUNT1_BASE 0x00c
#define ChipcommonB_PWM_PERIOD_COUNT2_BASE 0x014
#define ChipcommonB_PWM_PERIOD_COUNT3_BASE 0x01c
#define ChipcommonB_PWM_DUTYHI_COUNT0_BASE 0x008
#define ChipcommonB_PWM_DUTYHI_COUNT1_BASE 0x010
#define ChipcommonB_PWM_DUTYHI_COUNT2_BASE 0x018
#define ChipcommonB_PWM_DUTYHI_COUNT3_BASE 0x020
#define ChipcommonB_PWMCTL_BASE 0x000
#define ChipcommonB_rng_CTRL 0x18033000
#define USB2_IDM_IDM_IO_CONTROL_DIRECT 0x18115408
#define USB3_IDM_IDM_RESET_CONTROL 0x18104800
#define CRU_WATCHDOG_PCIE_RESET_STATUS 0x1803f564
#define CRU_WATCHDOG_PCIE_RESET_STATUS__CCB_WATCHDOG_RESET_EVENT 0
#define SDIO_eMMCSDXC_SYSADDR 0x18021000
#define IHOST_M0_IO_CONTROL_DIRECT 0x18100408
#define ChipcommonA_IntMask_BASE 0x024
#define ChipcommonA_OTPProg 0x18000018
#define ChipcommonA_OTPLayout 0x1800001c
#define ChipcommonA_CoreCapabilities 0x18000004
#define ChipcommonA_OTPStatus 0x18000010
#define SDIO_IDM_IO_CONTROL_DIRECT 0x18117408
#define SDIO_IDM_IO_CONTROL_DIRECT__CMD_COMFLICT_DISABLE 22


/* IDM registers */

#define IHOST_S1_IDM_ERROR_LOG_CONTROL 0x18107900
#define IHOST_S1_IDM_ERROR_LOG_COMPLETE 0x18107904
#define IHOST_S1_IDM_ERROR_LOG_STATUS 0x18107908
#define IHOST_S1_IDM_ERROR_LOG_ADDR_LSB 0x1810790c
#define IHOST_S1_IDM_ERROR_LOG_ID 0x18107914
#define IHOST_S1_IDM_ERROR_LOG_FLAGS 0x1810791c
#define IHOST_S1_IDM_INTERRUPT_STATUS 0x18107a00
#define IHOST_S0_IDM_ERROR_LOG_CONTROL 0x18108900
#define IHOST_S0_IDM_ERROR_LOG_COMPLETE 0x18108904
#define IHOST_S0_IDM_ERROR_LOG_STATUS 0x18108908
#define IHOST_S0_IDM_ERROR_LOG_ADDR_LSB 0x1810890c
#define IHOST_S0_IDM_ERROR_LOG_ID 0x18108914
#define IHOST_S0_IDM_ERROR_LOG_FLAGS 0x1810891c
#define IHOST_S0_IDM_INTERRUPT_STATUS 0x18108a00
#define DDR_S1_IDM_ERROR_LOG_CONTROL 0x18109900
#define DDR_S1_IDM_ERROR_LOG_COMPLETE 0x18109904
#define DDR_S1_IDM_ERROR_LOG_STATUS 0x18109908
#define DDR_S1_IDM_ERROR_LOG_ADDR_LSB 0x1810990c
#define DDR_S1_IDM_ERROR_LOG_ID 0x18109914
#define DDR_S1_IDM_ERROR_LOG_FLAGS 0x1810991c
#define DDR_S1_IDM_INTERRUPT_STATUS 0x18109a00
#define DDR_S2_IDM_ERROR_LOG_CONTROL 0x1810a900
#define DDR_S2_IDM_ERROR_LOG_COMPLETE 0x1810a904
#define DDR_S2_IDM_ERROR_LOG_STATUS 0x1810a908
#define DDR_S2_IDM_ERROR_LOG_ADDR_LSB 0x1810a90c
#define DDR_S2_IDM_ERROR_LOG_ID 0x1810a914
#define DDR_S2_IDM_ERROR_LOG_FLAGS 0x1810a91c
#define DDR_S2_IDM_INTERRUPT_STATUS 0x1810aa00
#define AXI_PCIE_S0_IDM_IDM_ERROR_LOG_CONTROL 0x1810b900
#define AXI_PCIE_S0_IDM_IDM_ERROR_LOG_COMPLETE 0x1810b904
#define AXI_PCIE_S0_IDM_IDM_ERROR_LOG_STATUS 0x1810b908
#define AXI_PCIE_S0_IDM_IDM_ERROR_LOG_ADDR_LSB 0x1810b90c
#define AXI_PCIE_S0_IDM_IDM_ERROR_LOG_ID 0x1810b914
#define AXI_PCIE_S0_IDM_IDM_ERROR_LOG_FLAGS 0x1810b91c
#define AXI_PCIE_S0_IDM_IDM_INTERRUPT_STATUS 0x1810ba00
#define AXI_PCIE_S1_IDM_IDM_ERROR_LOG_CONTROL 0x1810c900
#define AXI_PCIE_S1_IDM_IDM_ERROR_LOG_COMPLETE 0x1810c904
#define AXI_PCIE_S1_IDM_IDM_ERROR_LOG_STATUS 0x1810c908
#define AXI_PCIE_S1_IDM_IDM_ERROR_LOG_ADDR_LSB 0x1810c90c
#define AXI_PCIE_S1_IDM_IDM_ERROR_LOG_ID 0x1810c914
#define AXI_PCIE_S1_IDM_IDM_ERROR_LOG_FLAGS 0x1810c91c
#define AXI_PCIE_S1_IDM_IDM_INTERRUPT_STATUS 0x1810ca00
#define AXI_PCIE_S2_IDM_IDM_ERROR_LOG_CONTROL 0x1810d900
#define AXI_PCIE_S2_IDM_IDM_ERROR_LOG_COMPLETE 0x1810d904
#define AXI_PCIE_S2_IDM_IDM_ERROR_LOG_STATUS 0x1810d908
#define AXI_PCIE_S2_IDM_IDM_ERROR_LOG_ADDR_LSB 0x1810d90c
#define AXI_PCIE_S2_IDM_IDM_ERROR_LOG_ID 0x1810d914
#define AXI_PCIE_S2_IDM_IDM_ERROR_LOG_FLAGS 0x1810d91c
#define AXI_PCIE_S2_IDM_IDM_INTERRUPT_STATUS 0x1810da00
#define APBY_S0_IDM_IDM_ERROR_LOG_CONTROL 0x1810f900
#define APBY_S0_IDM_IDM_ERROR_LOG_COMPLETE 0x1810f904
#define APBY_S0_IDM_IDM_ERROR_LOG_STATUS 0x1810f908
#define APBY_S0_IDM_IDM_ERROR_LOG_ADDR_LSB 0x1810f90c
#define APBY_S0_IDM_IDM_ERROR_LOG_ID 0x1810f914
#define APBY_S0_IDM_IDM_ERROR_LOG_FLAGS 0x1810f91c
#define APBY_S0_IDM_IDM_INTERRUPT_STATUS 0x1810fa00
#define ROM_S0_IDM_ERROR_LOG_CONTROL 0x1811a900
#define ROM_S0_IDM_ERROR_LOG_COMPLETE 0x1811a904
#define ROM_S0_IDM_ERROR_LOG_STATUS 0x1811a908
#define ROM_S0_IDM_ERROR_LOG_ADDR_LSB 0x1811a90c
#define ROM_S0_IDM_ERROR_LOG_ID 0x1811a914
#define ROM_S0_IDM_ERROR_LOG_FLAGS 0x1811a91c
#define ROM_S0_IDM_INTERRUPT_STATUS 0x1811aa00
#define NAND_IDM_IDM_ERROR_LOG_CONTROL 0x1811b900
#define NAND_IDM_IDM_ERROR_LOG_COMPLETE 0x1811b904
#define NAND_IDM_IDM_ERROR_LOG_STATUS 0x1811b908
#define NAND_IDM_IDM_ERROR_LOG_ADDR_LSB 0x1811b90c
#define NAND_IDM_IDM_ERROR_LOG_ID 0x1811b914
#define NAND_IDM_IDM_ERROR_LOG_FLAGS 0x1811b91c
#define NAND_IDM_IDM_INTERRUPT_STATUS 0x1811ba00
#define QSPI_IDM_IDM_ERROR_LOG_CONTROL 0x1811c900
#define QSPI_IDM_IDM_ERROR_LOG_COMPLETE 0x1811c904
#define QSPI_IDM_IDM_ERROR_LOG_STATUS 0x1811c908
#define QSPI_IDM_IDM_ERROR_LOG_ADDR_LSB 0x1811c90c
#define QSPI_IDM_IDM_ERROR_LOG_ID 0x1811c914
#define QSPI_IDM_IDM_ERROR_LOG_FLAGS 0x1811c91c
#define QSPI_IDM_IDM_INTERRUPT_STATUS 0x1811ca00
#define A9JTAG_S0_IDM_IDM_ERROR_LOG_CONTROL 0x1811d900
#define A9JTAG_S0_IDM_IDM_ERROR_LOG_COMPLETE 0x1811d904
#define A9JTAG_S0_IDM_IDM_ERROR_LOG_STATUS 0x1811d908
#define A9JTAG_S0_IDM_IDM_ERROR_LOG_ADDR_LSB 0x1811d90c
#define A9JTAG_S0_IDM_IDM_ERROR_LOG_ID 0x1811d914
#define A9JTAG_S0_IDM_IDM_ERROR_LOG_FLAGS 0x1811d91c
#define A9JTAG_S0_IDM_IDM_INTERRUPT_STATUS 0x1811da00
#define SRAM_S0_IDM_ERROR_LOG_CONTROL 0x18120900
#define SRAM_S0_IDM_ERROR_LOG_COMPLETE 0x18120904
#define SRAM_S0_IDM_ERROR_LOG_STATUS 0x18120908
#define SRAM_S0_IDM_ERROR_LOG_ADDR_LSB 0x1812090c
#define SRAM_S0_IDM_ERROR_LOG_ID 0x18120914
#define SRAM_S0_IDM_ERROR_LOG_FLAGS 0x1812091c
#define SRAM_S0_IDM_INTERRUPT_STATUS 0x18120a00
#define APBZ_S0_IDM_IDM_ERROR_LOG_CONTROL 0x18121900
#define APBZ_S0_IDM_IDM_ERROR_LOG_COMPLETE 0x18121904
#define APBZ_S0_IDM_IDM_ERROR_LOG_STATUS 0x18121908
#define APBZ_S0_IDM_IDM_ERROR_LOG_ADDR_LSB 0x1812190c
#define APBZ_S0_IDM_IDM_ERROR_LOG_ID 0x18121914
#define APBZ_S0_IDM_IDM_ERROR_LOG_FLAGS 0x1812191c
#define APBZ_S0_IDM_IDM_INTERRUPT_STATUS 0x18121a00
#define APBV_S0_IDM_IDM_ERROR_LOG_CONTROL 0x18122900
#define APBV_S0_IDM_IDM_ERROR_LOG_COMPLETE 0x18122904
#define APBV_S0_IDM_IDM_ERROR_LOG_STATUS 0x18122908
#define APBV_S0_IDM_IDM_ERROR_LOG_ADDR_LSB 0x1812290c
#define APBV_S0_IDM_IDM_ERROR_LOG_ID 0x18122914
#define APBV_S0_IDM_IDM_ERROR_LOG_FLAGS 0x1812291c
#define APBV_S0_IDM_IDM_INTERRUPT_STATUS 0x18122a00
#define AXIIC_DS_3_IDM_ERROR_LOG_CONTROL 0x18123900
#define AXIIC_DS_3_IDM_ERROR_LOG_COMPLETE 0x18123904
#define AXIIC_DS_3_IDM_ERROR_LOG_STATUS 0x18123908
#define AXIIC_DS_3_IDM_ERROR_LOG_ADDR_LSB 0x1812390c
#define AXIIC_DS_3_IDM_ERROR_LOG_ID 0x18123914
#define AXIIC_DS_3_IDM_ERROR_LOG_FLAGS 0x1812391c
#define AXIIC_DS_3_IDM_INTERRUPT_STATUS 0x18123a00
#define AXIIC_DS_4_IDM_ERROR_LOG_CONTROL 0x18124900
#define AXIIC_DS_4_IDM_ERROR_LOG_COMPLETE 0x18124904
#define AXIIC_DS_4_IDM_ERROR_LOG_STATUS 0x18124908
#define AXIIC_DS_4_IDM_ERROR_LOG_ADDR_LSB 0x1812490c
#define AXIIC_DS_4_IDM_ERROR_LOG_ID 0x18124914
#define AXIIC_DS_4_IDM_ERROR_LOG_FLAGS 0x1812491c
#define AXIIC_DS_4_IDM_INTERRUPT_STATUS 0x18124a00
#define APBW_IDM_IDM_ERROR_LOG_CONTROL 0x18131900
#define APBW_IDM_IDM_ERROR_LOG_COMPLETE 0x18131904
#define APBW_IDM_IDM_ERROR_LOG_STATUS 0x18131908
#define APBW_IDM_IDM_ERROR_LOG_ADDR_LSB 0x1813190c
#define APBW_IDM_IDM_ERROR_LOG_ID 0x18131914
#define APBW_IDM_IDM_ERROR_LOG_FLAGS 0x1813191c
#define APBW_IDM_IDM_INTERRUPT_STATUS 0x18131a00
#define APBX_IDM_IDM_ERROR_LOG_CONTROL 0x18132900
#define APBX_IDM_IDM_ERROR_LOG_COMPLETE 0x18132904
#define APBX_IDM_IDM_ERROR_LOG_STATUS 0x18132908
#define APBX_IDM_IDM_ERROR_LOG_ADDR_LSB 0x1813290c
#define APBX_IDM_IDM_ERROR_LOG_ID 0x18132914
#define APBX_IDM_IDM_ERROR_LOG_FLAGS 0x1813291c
#define APBX_IDM_IDM_INTERRUPT_STATUS 0x18132a00
#define AXIIC_DS_0_IDM_ERROR_LOG_CONTROL 0x18141900
#define AXIIC_DS_0_IDM_ERROR_LOG_COMPLETE 0x18141904
#define AXIIC_DS_0_IDM_ERROR_LOG_STATUS 0x18141908
#define AXIIC_DS_0_IDM_ERROR_LOG_ADDR_LSB 0x1814190c
#define AXIIC_DS_0_IDM_ERROR_LOG_ID 0x18141914
#define AXIIC_DS_0_IDM_ERROR_LOG_FLAGS 0x1814191c
#define AXIIC_DS_0_IDM_INTERRUPT_STATUS 0x18141a00
#define AXIIC_DS_1_IDM_ERROR_LOG_CONTROL 0x18142900
#define AXIIC_DS_1_IDM_ERROR_LOG_COMPLETE 0x18142904
#define AXIIC_DS_1_IDM_ERROR_LOG_STATUS 0x18142908
#define AXIIC_DS_1_IDM_ERROR_LOG_ADDR_LSB 0x1814290c
#define AXIIC_DS_1_IDM_ERROR_LOG_ID 0x18142914
#define AXIIC_DS_1_IDM_ERROR_LOG_FLAGS 0x1814291c
#define AXIIC_DS_1_IDM_INTERRUPT_STATUS 0x18142a00
#define CTF_CONTROL_REG 0x18025c00
#define CTF_CONTROL_BASE 0x5c00
#define CTF_FLOW_TIMER_CONFIG0__TCP_FINISHED_TIMEBASE_TWO_EXP37 0x0
#define CTF_FLOW_TIMER_CONFIG0__TCP_FINISHED_TIMEBASE_TWO_EXP31 0x1
#define CTF_FLOW_TIMER_CONFIG0__TCP_FINISHED_TIMEBASE_TWO_EXP26 0x2
#define CTF_FLOW_TIMER_CONFIG0__TCP_ESTABLISHED_TIMEBASE_R 2
#define CTF_FLOW_TIMER_CONFIG0__TCP_FINISHED_TIMEBASE_R 0
#define CTF_FLOW_TIMER_CONFIG1__TCP_ESTABLISHED_TIMEOUT_R 8
#define CTF_FLOW_TIMER_CONFIG1__UDP_ESTABLISHED_TIMEOUT_R 16
#define CTF_FLOW_TIMER_CONFIG1__TCP_FINISHED_TIMEOUT_R 0
#define CTF_FLOW_TIMER_CONFIG0__UDP_ESTABLISHED_TIMEBASE_R 4
#define CTF_FLOW_TIMER_CONFIG0__UDP_ESTABLISHED_TIMEBASE_R 4
#define CTF_FLOW_TIMER_CONFIG0__UDP_ESTABLISHED_TIMEBASE_TWO_EXP31 0x1
#define CTF_FLOW_TIMER_CONFIG0__TCP_ESTABLISHED_TIMEBASE_TWO_EXP31 0x1
#define CTF_FLOW_TIMEOUT_CONTROL__FLOW_ENTRY_POINTER_R 5

#define CTF_DRR_CONFIG__MAC_WEIGHT_R 7
#define CTF_MEM_ACC_CONTROL__RD_WR_N 15
#define CTF_MEM_ACC_CONTROL__TABLE_SELECT_R 12
#define CTF_MEM_ACC_CONTROL__ALL_R 0

#define PAE_M0_IDM_IDM_RESET_CONTROL 0x1811f800
#define PAE_S0_IDM_IDM_RESET_CONTROL 0x18125800
#define CTF_CONTROL__MEM_INIT 1
#define AMAC_IDM0_IO_CONTROL_DIRECT 0x18110408
#define AMAC_IDM0_IO_CONTROL_DIRECT__CLK_250_SEL 6
#define AMAC_IDM1_IO_CONTROL_DIRECT 0x18111408
#define AMAC_IDM1_IO_CONTROL_DIRECT__CLK_250_SEL 6
#define CTF_CONTROL__CTF_MODE 0
#define CTF_CONTROL__FRAGMENTATION_ENABLE 2
#define CTF_CONTROL__DISABLE_MAC_DA_CHECK 3
#define CTF_CONTROL__PAE_ENABLED 5
#define CTF_CONTROL__SPU_ENABLE 6
#define CTF_BRCM_HDR_CONTROL 0x18025c08
#define CTF_BRCM_HDR_CONTROL__BRCM_HDR_REASON_CODE_MASK_WIDTH 8
#define CTF_BRCM_HDR_CONTROL__BRCM_HDR_REASON_CODE_MASK_R 0
#define SPU_CONTROL 0x1802f000
#define SPU_CONTROL__OUT_ENDIAN 12
#define SPU_CONTROL__IN_ENDIAN 11
#define SPU_CONTROL__SOFT_RST 1
#define R5_CONFIG0 0x180490d8
#define R5_CONFIG0__TE_INIT 31
#define R5_CONFIG0__SYS_PORESET 30
#define R5_CONFIG0__RESET_N 29
#define R5_CONFIG0__PARITY_ODD 28
#define R5_CONFIG0__PADDR_DEBUG31 27
#define R5_CONFIG0__LOC_ZERO_RAMA 26
#define R5_CONFIG0__INTERRUPT_ASYNC 25
#define R5_CONFIG0__INITRAMB 24
#define R5_CONFIG0__INITRAMA 23
#define R5_CONFIG0__DEBUG_RESTART 22
#define R5_CONFIG0__DEBUG_RESET_N 21
#define R5_CONFIG0__DEBUG_RESET 20
#define R5_CONFIG0__DEBUG_RESET 20
#define R5_CONFIG0__DEBUG_NO_CLK_STOP 19
#define R5_CONFIG0__DEBUG_NIDEN 18
#define R5_CONFIG0__DEBUG_ENTCM1IF 17
#define R5_CONFIG0__DEBUG_EN 16
#define R5_CONFIG0__DEBUG_EDBGRQ 15
#define R5_CONFIG0__DAP_DAP_TO_DEBUG_APB_EN 14
#define R5_CONFIG0__CPU_HALT 13
#define R5_CONFIG0__CFG_ENDIAN 12
#define R5_CONFIG0__CFG_EE 11
#define R5_CONFIG0__BTCM_SPLIT 10
#define R5_CONFIG0__BTCM_SIZE_R 6
#define R5_CONFIG0__BTCM_SIZE_WIDTH 4
#define R5_CONFIG0__ATCM_SIZE_R 2
#define R5_CONFIG0__ATCM_SIZE_WIDTH 4
#define R5_CONFIG0__RMW_RAM_R 0
#define R5_CONFIG0__RMW_RAM_WIDTH 2

#define PAE_ECC_DEBUG 0x180490cc
#define PAE_ECC_DEBUG__ECC_DISABLE 10
#define PAE_BUFFER_CONFIG 0x18049010
#define PAE_BUFFER_CONFIG__PAE_MEM_INIT 1
#define PAE_BUFFER_CONFIG__PAE_SYS_INIT 0
#define PAE_BUFFER_CONFIG__PAE_MEM_INIT_DONE 2
#define PAE_BUFFER_ALLOCATION0 0x18049018
#define PAE_BUFFER_ALLOCATION0 0x18049018
#define PAE_BUFFER_ALLOCATION__INTERCEPT_PT_END_ADDR_R 16
#define PAE_BUFFER_ALLOCATION__INTERCEPT_PT_END_ADDR_WIDTH 12
#define PAE_BUFFER_ALLOCATION__INTERCEPT_PT_START_ADDR_R 0
#define PAE_BUFFER_ALLOCATION__INTERCEPT_PT_START_ADDR_WIDTH 12

#define PAE_BUFFER_ALLOCATION1 0x1804901c
#define PAE_BUFFER_BACKPRESSURE_CONFIG0 0x18049020
#define PAE_BUFFER_BACKPRESSURE_CONFIG__WATERMARK_DEPTH_XOFF_R 16
#define PAE_BUFFER_BACKPRESSURE_CONFIG__WATERMARK_DEPTH_XOFF_WIDTH 12
#define PAE_BUFFER_BACKPRESSURE_CONFIG__WATERMARK_DEPTH_XON_R 0
#define PAE_BUFFER_BACKPRESSURE_CONFIG__WATERMARK_DEPTH_XON_WIDTH 12
#define PAE_BUFFER_BACKPRESSURE_CONFIG1 0x18049024
#define PAE_BUFFER_CONGESTION_CONFIG 0x18049028
#define PAE_BUFFER_CONGESTION_CONFIG__ENQ0_STOP_LEVEL_R 0
#define PAE_BUFFER_CONGESTION_CONFIG__ENQ0_STOP_LEVEL_WIDTH 12
#define PAE_BUFFER_BACKPRESSURE_MAP0 0x1804902c
#define PAE_BUFFER_BACKPRESSURE_MAP__INTERCEPT_PT_BACKPRESSURE_CONTRIBUTOR_MASK_R 0
#define PAE_BUFFER_BACKPRESSURE_MAP__INTERCEPT_PT_BACKPRESSURE_CONTRIBUTOR_MASK_WIDTH 2
#define PAE_BUFFER_BACKPRESSURE_MAP1 0x18049030
#define PAE_SCRATCHPAD_ALLOCATION 0x18049014
#define PAE_SCRATCHPAD_ALLOCATION__SCRATCHPAD_END_ADDR_R 16
#define PAE_SCRATCHPAD_ALLOCATION__SCRATCHPAD_END_ADDR_WIDTH 12
#define PAE_SCRATCHPAD_ALLOCATION__SCRATCHPAD_START_ADDR_R 0
#define PAE_SCRATCHPAD_ALLOCATION__SCRATCHPAD_START_ADDR_WIDTH 12
#define CTF_DEBUG_CONTROL 0x18025ca0
#define CTF_DEBUG_CONTROL__DM_FIFO_BP_LEVEL_R 10
#define CTF_DEBUG_CONTROL__DM_FIFO_BP_LEVEL_WIDTH 8

#endif /* __SOCREGS_NSP_OPEN_H */
