#include "config.h"
#include <asm/regdef.h>
#include <asm/mipsregs.h>
#include <asm/addrspace.h>
#include "955x.h"
/*
 * Helper macros.
 * These Clobber t7, t8 and t9
 */
#define reg_write(_reg, _val)			\
	li	t7,	KSEG1ADDR(_reg);	\
	li	t8,	_val;			\
	sw	t8,	0(t7);

#define reg_rmw_set(_reg, _mask, _val)		\
	li	t7,	KSEG1ADDR(_reg);	\
	lw	t8,	0(t7);			\
	li	t9,	~(_mask);		\
	and	t8,	t8,	t9;		\
	li	t9,	_val;			\
	or	t8,	t8,	t9;		\
	sw	t8,	0(t7)

#define cpu_pll_set(_mask, _val)	\
	reg_rmw_set(CPU_PLL_CONFIG_ADDRESS, _mask, _val)

#define ddr_pll_set(_mask, _val)	\
	reg_rmw_set(DDR_PLL_CONFIG_ADDRESS, _mask, _val)

#define cpu_ddr_control_set(_mask, _val)	\
	reg_rmw_set(CPU_DDR_CLOCK_CONTROL_ADDRESS, _mask, _val)


/******************************************************************************
 * first level initialization:
 *
 * 0) If clock cntrl reset switch is already set, we're recovering from
 *    "divider reset"; goto 3.
 * 1) Setup divide ratios.
 * 2) Reset.
 * 3) Setup pll's, wait for lock.
 *
 *****************************************************************************/

.globl qca955x_lowlevel_init
	.type	qca955x_lowlevel_init, @function
	.text
	.align 4

qca955x_lowlevel_init:

#if !defined(CONFIG_ATH_EMULATION)
#if !defined(CONFIG_ATH_NAND_BR)

	reg_write(BB_DPLL2_ADDRESS, BB_DPLL2_KI_SET(4) | \
				BB_DPLL2_KD_SET(0x60) | \
				BB_DPLL2_PLL_PWD_SET(1) | \
				BB_DPLL2_DELTA_SET(0x1e));
	reg_write(PCIe_DPLL2_ADDRESS, PCIe_DPLL2_KI_SET(4) | \
				PCIe_DPLL2_KD_SET(0x60) | \
				PCIe_DPLL2_PLL_PWD_SET(1) | \
				PCIe_DPLL2_DELTA_SET(0x1e));
	reg_write(DDR_DPLL2_ADDRESS, DDR_DPLL2_KI_SET(4) | \
				DDR_DPLL2_KD_SET(0x60) | \
				DDR_DPLL2_PLL_PWD_SET(1) | \
				DDR_DPLL2_DELTA_SET(0x1e));
	reg_write(CPU_DPLL2_ADDRESS, CPU_DPLL2_KI_SET(4) | \
				CPU_DPLL2_KD_SET(0x60) | \
				CPU_DPLL2_PLL_PWD_SET(1) | \
				CPU_DPLL2_DELTA_SET(0x1e));

	li	t5,	CPU_PLL_CONFIG_NINT_VAL
	li	t6,	DDR_PLL_CONFIG_NINT_VAL
	li	t4,	CPU_PLL_DITHER_VAL
	li	t3,	DDR_PLL_DITHER_VAL

#if 0
	li	t7,	PLL_CONFIG_VAL_F
	lw	t8,	0(t7)
	li	t7,	PLL_MAGIC
	beq	t7,	t8,	read_from_flash
	nop
	j	pll_bypass_set
	nop
read_from_flash:
	li	t7,	PLL_CONFIG_VAL_F + 4
	lw	t5,	0(t7)
	lw	t4,	4(t7)
	lw	t6,	8(t7)
	lw	t3,	12(t7)
#endif

pll_bypass_set:
	cpu_ddr_control_set (CPU_DDR_CLOCK_CONTROL_CPU_PLL_BYPASS_MASK, CPU_DDR_CLOCK_CONTROL_CPU_PLL_BYPASS_SET(1));
	cpu_ddr_control_set (CPU_DDR_CLOCK_CONTROL_DDR_PLL_BYPASS_MASK, CPU_DDR_CLOCK_CONTROL_DDR_PLL_BYPASS_SET(1));
	cpu_ddr_control_set (CPU_DDR_CLOCK_CONTROL_AHB_PLL_BYPASS_MASK, CPU_DDR_CLOCK_CONTROL_AHB_PLL_BYPASS_SET(1));

init_cpu_pll:
	li	t7,	KSEG1ADDR(CPU_PLL_CONFIG_ADDRESS);
	li	t8,	(CPU_PLL_CONFIG_PLLPWD_SET(1) | \
			CPU_PLL_CONFIG_REF_DIV_VAL | \
			CPU_PLL_CONFIG_RANGE_VAL | \
			CPU_PLL_CONFIG_OUT_DIV_VAL1);
	or	t8,	t8,	t5
	sw	t8,	0(t7);

init_ddr_pll:
	li	t7,	KSEG1ADDR(DDR_PLL_CONFIG_ADDRESS);
	li	t8,	(DDR_PLL_CONFIG_PLLPWD_SET(1) | \
			DDR_PLL_CONFIG_REF_DIV_VAL | \
			DDR_PLL_CONFIG_RANGE_VAL | \
			DDR_PLL_CONFIG_OUT_DIV_VAL1);
	or	t8,	t8,	t6
	sw	t8,	0(t7);

init_ahb_pll:
	reg_write(CPU_DDR_CLOCK_CONTROL_ADDRESS,
			CPU_DDR_CLOCK_CONTROL_AHB_DIV_VAL |
			AHB_CLK_FROM_DDR |
			CPU_AND_DDR_CLK_FROM_DDR |
			CPU_AND_DDR_CLK_FROM_CPU |
			CPU_DDR_CLOCK_CONTROL_DDR_POST_DIV |
			CPU_DDR_CLOCK_CONTROL_CPU_POST_DIV |
			CPU_DDR_CLOCK_CONTROL_CPU_PLL_BYPASS_SET(1) |
			CPU_DDR_CLOCK_CONTROL_DDR_PLL_BYPASS_SET(1) |
			CPU_DDR_CLOCK_CONTROL_AHB_PLL_BYPASS_SET(1));

pll_pwd_unset:
	cpu_pll_set(CPU_PLL_CONFIG_PLLPWD_MASK, CPU_PLL_CONFIG_PLLPWD_SET(0));
	ddr_pll_set(DDR_PLL_CONFIG_PLLPWD_MASK, DDR_PLL_CONFIG_PLLPWD_SET(0));

outdiv_unset:
	cpu_pll_set(CPU_PLL_CONFIG_OUTDIV_MASK, CPU_PLL_CONFIG_OUT_DIV_VAL2);
	ddr_pll_set(DDR_PLL_CONFIG_OUTDIV_MASK, DDR_PLL_CONFIG_OUT_DIV_VAL2);

pll_bypass_unset:
	cpu_ddr_control_set(CPU_DDR_CLOCK_CONTROL_CPU_PLL_BYPASS_MASK, CPU_DDR_CLOCK_CONTROL_CPU_PLL_BYPASS_SET(0));
	cpu_ddr_control_set(CPU_DDR_CLOCK_CONTROL_DDR_PLL_BYPASS_MASK, CPU_DDR_CLOCK_CONTROL_DDR_PLL_BYPASS_SET(0));
	cpu_ddr_control_set(CPU_DDR_CLOCK_CONTROL_AHB_PLL_BYPASS_MASK, CPU_DDR_CLOCK_CONTROL_AHB_PLL_BYPASS_SET(0));

ddr_pll_dither_unset:
	li	t7,	KSEG1ADDR(DDR_PLL_DITHER_ADDRESS);
	sw	t3,	0(t7);

cpu_pll_dither_unset:
	li	t7,	KSEG1ADDR(CPU_PLL_DITHER_ADDRESS);
	sw	t4,	0(t7);

#endif /* !defined(CONFIG_ATH_NAND_BR) */
#endif /* !defined(CONFIG_ATH_EMULATION) */
	jr ra
	nop
