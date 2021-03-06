/*
 * imx5xregs.h - i.MX5x registers definition
 *
 * Copyright (C) 2010-2012 armadeus systems
 * Derivated from pxaregs (c) Copyright 2002 by M&N Logistik-Loesungen Online GmbH
 * Author: Julien Boibessot
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#include "definitions.h"

#ifdef IMX51
#define IMX_TYPE "i.MX51"
#define IPU_BASE(x)	(0x5e000000 + x)
#define CSI0_BASE(x)	(0x5e030000 + x)
#define CSI1_BASE(x)	(0x5e038000 + x)
#define VDI_BASE(x)	(0x5e068000 + x)
#else
#define IMX_TYPE "i.MX53"
#define IPU_BASE(x)	(0x1e000000 + x)
#define CSI0_BASE(x)	(0x1e030000 + x)
#define CSI1_BASE(x)	(0x1e038000 + x)
#define VDI_BASE(x)	(0x1e068000 + x)
#endif

static struct reg_info regs[] =
{
/* IPU */
{ "IPU_CONF",		IPU_BASE(0x00), 0, 0xffffffff, 'x', "Configuration Register" },
{ "IPU_FS_PROC_FLOW1",	IPU_BASE(0xa8), 0, 0xffffffff, 'x', "FSU Processing Flow 1 Register" },
{ "IPU_FS_PROC_FLOW2",	IPU_BASE(0xac), 0, 0xffffffff, 'x', "FSU Processing Flow 1 Register" },
{ "IPU_FS_PROC_FLOW3",	IPU_BASE(0xb0), 0, 0xffffffff, 'x', "FSU Processing Flow 1 Register" },
{ "IPU_SKIP",		IPU_BASE(0xbc), 0, 0xffffffff, 'x', "Skip Register" },
{ "IPU_CH_DB_MODE_SEL0",IPU_BASE(0x150), 0, 0xffffffff, 'x', "Channel Double Buffer Mode Select 0 Register" },
{ "IPU_CH_DB_MODE_SEL1",IPU_BASE(0x154), 0, 0xffffffff, 'x', "Channel Double Buffer Mode Select 0 Register" },
{ "IPU_INT_STAT_1",	IPU_BASE(0x200), 0, 0xffffffff, 'x', "Interrupt Status Register 1" },
{ "IPU_INT_STAT_2",	IPU_BASE(0x204), 0, 0xffffffff, 'x', "Interrupt Status Register 2" },
{ "IPU_INT_STAT_3",	IPU_BASE(0x208), 0, 0xffffffff, 'x', "Interrupt Status Register 3" },
{ "IPU_INT_STAT_5",	IPU_BASE(0x210), 0, 0xffffffff, 'x', "Interrupt Status Register 5" },
{ "IPU_INT_STAT_6",	IPU_BASE(0x214), 0, 0xffffffff, 'x', "Interrupt Status Register 6" },
{ "IPU_INT_STAT_7",	IPU_BASE(0x218), 0, 0xffffffff, 'x', "Interrupt Status Register 7" },
{ "IPU_INT_STAT_8",	IPU_BASE(0x21c), 0, 0xffffffff, 'x', "Interrupt Status Register 8" },
{ "IPU_INT_STAT_9",	IPU_BASE(0x220), 0, 0xffffffff, 'x', "Interrupt Status Register 9" },
{ "IPU_INT_STAT_10",	IPU_BASE(0x224), 0, 0xffffffff, 'x', "Interrupt Status Register 10" },
{ "IPU_INT_STAT_11",	IPU_BASE(0x228), 0, 0xffffffff, 'x', "Interrupt Status Register 11" },
{ "IPU_INT_STAT_12",	IPU_BASE(0x22c), 0, 0xffffffff, 'x', "Interrupt Status Register 12" },
{ "IPU_INT_STAT_13",	IPU_BASE(0x230), 0, 0xffffffff, 'x', "Interrupt Status Register 13" },
{ "IPU_INT_STAT_14",	IPU_BASE(0x234), 0, 0xffffffff, 'x', "Interrupt Status Register 14" },
{ "IPU_INT_STAT_15",	IPU_BASE(0x238), 0, 0xffffffff, 'x', "Interrupt Status Register 15" },
{ "IPU_CUR_BUF_0",	IPU_BASE(0x23c), 0, 0xffffffff, 'x', "Current Buffer Register 0" },
{ "IPU_CUR_BUF_1",	IPU_BASE(0x240), 0, 0xffffffff, 'x', "Current Buffer Register 1" },
{ "IPU_ALT_CUR_0",	IPU_BASE(0x244), 0, 0xffffffff, 'x', "Alternate Current Buffer Register 0" },
{ "IPU_ALT_CUR_1",	IPU_BASE(0x248), 0, 0xffffffff, 'x', "Alternate Current Buffer Register 1" },
{ "IPU_CH_BUF0_RDY0",	IPU_BASE(0x268), 0, 0xffffffff, 'x', "Channels Buffer 0 Ready Register 0" },
{ "IPU_CH_BUF0_RDY1",	IPU_BASE(0x26c), 0, 0xffffffff, 'x', "Channels Buffer 0 Ready Register 1" },
{ "IPU_CH_BUF1_RDY0",	IPU_BASE(0x270), 0, 0xffffffff, 'x', "Channels Buffer 1 Ready Register 0" },
{ "IPU_CH_BUF1_RDY1",	IPU_BASE(0x274), 0, 0xffffffff, 'x', "Channels Buffer 1 Ready Register 1" },
{ "CSI0_SENS_CONF",	CSI0_BASE(0x00), 0, 0xffffffff, 'x', "CSI0 Sensor Configuration Register" },
{ "CSI0_SENS_FRM_SIZE",	CSI0_BASE(0x04), 0, 0xffffffff, 'x', "CSI0 Sensor Frame Size Register" },
{ "CSI0_ACT_FRM_SIZE",	CSI0_BASE(0x08), 0, 0xffffffff, 'x', "CSI0 Actual Frame Size Register" },
{ "CSI0_OUT_FRM_CTRL",	CSI0_BASE(0x0c), 0, 0xffffffff, 'x', "CSI0 Output Control Register" },
{ "CSI0_TST_CTRL",	CSI0_BASE(0x10), 0, 0xffffffff, 'x', "CSI0 Test Control Register" },
{ "CSI0_CCIR_CODE_1",	CSI0_BASE(0x14), 0, 0xffffffff, 'x', "CSI0 CCIR Code Register 1" },
{ "CSI0_CCIR_CODE_2",	CSI0_BASE(0x18), 0, 0xffffffff, 'x', "CSI0 CCIR Code Register 2" },
{ "CSI0_CCIR_CODE_3",	CSI0_BASE(0x1c), 0, 0xffffffff, 'x', "CSI0 CCIR Code Register 3" },
{ "CSI0_DI",		CSI0_BASE(0x20), 0, 0xffffffff, 'x', "CSI0 Data Identifier Register" },
{ "CSI0_SKIP",		CSI0_BASE(0x24), 0, 0xffffffff, 'x', "CSI0 Skip Register" },
{ "CSI0_CPD_CTRL",	CSI0_BASE(0x28), 0, 0xffffffff, 'x', "CSI0 Compander Control Register" },
{ "CSI1_SENS_CONF",	CSI1_BASE(0x00), 0, 0xffffffff, 'x', "CSI1 Sensor Configuration Register" },
{ "CSI1_SENS_FRM_SIZE",	CSI1_BASE(0x04), 0, 0xffffffff, 'x', "CSI1 Sensor Frame Size Register" },
{ "CSI1_ACT_FRM_SIZE",	CSI1_BASE(0x08), 0, 0xffffffff, 'x', "CSI1 Actual Frame Size Register" },
{ "CSI1_OUT_FRM_CTRL",	CSI1_BASE(0x0c), 0, 0xffffffff, 'x', "CSI1 Output Control Register" },
{ "CSI1_TST_CTRL",	CSI1_BASE(0x10), 0, 0xffffffff, 'x', "CSI1 Test Control Register" },
{ "CSI1_CCIR_CODE_1",	CSI1_BASE(0x14), 0, 0xffffffff, 'x', "CSI1 CCIR Code Register 1" },
{ "CSI1_CCIR_CODE_2",	CSI1_BASE(0x18), 0, 0xffffffff, 'x', "CSI1 CCIR Code Register 2" },
{ "CSI1_CCIR_CODE_3",	CSI1_BASE(0x1c), 0, 0xffffffff, 'x', "CSI1 CCIR Code Register 3" },
{ "CSI1_DI",		CSI1_BASE(0x20), 0, 0xffffffff, 'x', "CSI1 Data Identifier Register" },
{ "CSI1_SKIP",		CSI1_BASE(0x24), 0, 0xffffffff, 'x', "CSI1 Skip Register" },
{ "CSI1_CPD_CTRL",	CSI1_BASE(0x28), 0, 0xffffffff, 'x', "CSI1 Compander Control Register" },
{ "IPU_VDI_SIZE",	VDI_BASE(0x00),  0, 0xffffffff, 'x', "VDI Field Size Register" },
{ "IPU_VDI_C",		VDI_BASE(0x04),  0, 0xffffffff, 'x', "VDI Control Register" },
{ "IPU_VDI_C2",		VDI_BASE(0x08),  0, 0xffffffff, 'x', "VDI Control Register 2" },
/* CCM */
{ "CCR",	0x73fd4000, 0, 0xffffffff, 'x', "CCM Control Register" },
{ "CCDR",	0x73fd4004, 0, 0xffffffff, 'x', "CCM Control Divider Register" },
{ "CSR",	0x73fd4008, 0, 0xffffffff, 'x', "CCM Status Register" },
{ "CCSR",	0x73fd400c, 0, 0xffffffff, 'x', "CCM Clock Switcher Register" },
{ "CACRR",	0x73fd4010, 0, 0xffffffff, 'x', "CCM Arm Clock Root Register" },
{ "CBCDR",	0x73fd4014, 0, 0xffffffff, 'x', "CCM Bus Clock Divider Register" },
{ "CBCMR",	0x73fd4018, 0, 0xffffffff, 'x', "CCM Bus Clock Multiplexer Register" },
{ "CSCMR1",	0x73fd401c, 0, 0xffffffff, 'x', "CCM Serial Clock Multiplexer Register 1" },
{ "CSCMR2",	0x73fd4020, 0, 0xffffffff, 'x', "CCM Serial Clock Multiplexer Register 2" },
{ "CSCDR1",	0x73fd4024, 0, 0xffffffff, 'x', "CCM Serial Clock Divider Register" },
{ "CS1CDR",	0x73fd4028, 0, 0xffffffff, 'x', "CCM SSI1 Clock Divider Register" },
{ "CS2CDR",	0x73fd402c, 0, 0xffffffff, 'x', "CCM SSI2 Clock Divider Register" },
{ "CDCDR",	0x73fd4030, 0, 0xffffffff, 'x', "CCM DI Clock Divider Register" },
{ "CSCDR2",	0x73fd4038, 0, 0xffffffff, 'x', "CCM Serial Clock Divider Register" },
{ "CSCDR3",	0x73fd403c, 0, 0xffffffff, 'x', "CCM Serial Clock Divider Register" },
{ "CSCDR4",	0x73fd4040, 0, 0xffffffff, 'x', "CCM Serial Clock Divider Register" },
{ "CWDR",	0x73fd4044, 0, 0xffffffff, 'x', "CCM Wakeup Detector Register" },
{ "CDHIPR",	0x73fd4048, 0, 0xffffffff, 'x', "CCM Divider Handshake In-Process Register" },
{ "CDCR",	0x73fd404c, 0, 0xffffffff, 'x', "CCM DVFS Control Register" },
{ "CTOR",	0x73fd4050, 0, 0xffffffff, 'x', "CCM Testing Observability Register" },
{ "CLPCR",	0x73fd4054, 0, 0xffffffff, 'x', "CCM Low Power Control Register" },
{ "CISR",	0x73fd4058, 0, 0xffffffff, 'x', "CCM Interrupt Status Register" },
{ "CIMR",	0x73fd405c, 0, 0xffffffff, 'x', "CCM Interrupt Mask Register" },
{ "CCOSR",	0x73fd4060, 0, 0xffffffff, 'x', "CCM Clock Output Source Register" },
{ "CGPR",	0x73fd4064, 0, 0xffffffff, 'x', "CCM General Purpose Register" },
{ "CCGR0",	0x73fd4068, 0, 0xffffffff, 'x', "CCM Clock Gating Register 0" },
{ "CCGR1",	0x73fd406c, 0, 0xffffffff, 'x', "CCM Clock Gating Register 1" },
{ "CCGR2",	0x73fd4070, 0, 0xffffffff, 'x', "CCM Clock Gating Register 2" },
{ "CCGR3",	0x73fd4074, 0, 0xffffffff, 'x', "CCM Clock Gating Register 3" },
{ "CCGR4",	0x73fd4078, 0, 0xffffffff, 'x', "CCM Clock Gating Register 4" },
{ "CCGR5",	0x73fd407c, 0, 0xffffffff, 'x', "CCM Clock Gating Register 5" },
{ "CCGR6",	0x73fd4080, 0, 0xffffffff, 'x', "CCM Clock Gating Register 6" },
{ "CMEOR",	0x73fd4084, 0, 0xffffffff, 'x', "CCM Module Enable Override Register" },
/* GPIO */
{ "GPIO1_DR",   0x73f84000, 0, 0xffffffff, 'x', "GPIO Bank1 Data Register" },
{ "GPIO1_DIR",	0x73f84004, 0, 0xffffffff, 'x', "GPIO Bank1 Direction Register" },
{ "GPIO1_PSR",	0x73f84008, 0, 0xffffffff, 'x', "GPIO Bank1 Pad Status Register" },
{ "GPIO1_ICR1",	0x73f8400c, 0, 0xffffffff, 'x', "GPIO Bank1 Interrupt Configuration Register 1" },
{ "GPIO1_ICR2",	0x73f84010, 0, 0xffffffff, 'x', "GPIO Bank1 Interrupt Configuration Register 2" },
{ "GPIO1_IMR",	0x73f84014, 0, 0xffffffff, 'x', "GPIO Bank1 Interrupt Mask Register" },
{ "GPIO1_ISR",	0x73f84018, 0, 0xffffffff, 'x', "GPIO Bank1 Interrupt Status Register" },
{ "GPIO1_EDGE",	0x73f8401c, 0, 0xffffffff, 'x', "GPIO Bank1 Edge Detect Register" },
{ "GPIO2_DR",   0x73f88000, 0, 0xffffffff, 'x', "GPIO Bank2 Data Register" },
{ "GPIO2_DIR",	0x73f88004, 0, 0xffffffff, 'x', "GPIO Bank2 Direction Register" },
{ "GPIO2_PSR",	0x73f88008, 0, 0xffffffff, 'x', "GPIO Bank2 Pad Status Register" },
{ "GPIO2_ICR1",	0x73f8800c, 0, 0xffffffff, 'x', "GPIO Bank2 Interrupt Configuration Register 1" },
{ "GPIO2_ICR2",	0x73f88010, 0, 0xffffffff, 'x', "GPIO Bank2 Interrupt Configuration Register 2" },
{ "GPIO2_IMR",	0x73f88014, 0, 0xffffffff, 'x', "GPIO Bank2 Interrupt Mask Register" },
{ "GPIO2_ISR",	0x73f88018, 0, 0xffffffff, 'x', "GPIO Bank2 Interrupt Status Register" },
{ "GPIO2_EDGE",	0x73f8801c, 0, 0xffffffff, 'x', "GPIO Bank2 Edge Detect Register" },
{ "GPIO3_DR",   0x73f8C000, 0, 0xffffffff, 'x', "GPIO Bank3 Data Register" },
{ "GPIO3_DIR",	0x73f8C004, 0, 0xffffffff, 'x', "GPIO Bank3 Direction Register" },
{ "GPIO3_PSR",	0x73f8C008, 0, 0xffffffff, 'x', "GPIO Bank3 Pad Status Register" },
{ "GPIO3_ICR1",	0x73f8C00c, 0, 0xffffffff, 'x', "GPIO Bank3 Interrupt Configuration Register 1" },
{ "GPIO3_ICR2",	0x73f8C010, 0, 0xffffffff, 'x', "GPIO Bank3 Interrupt Configuration Register 2" },
{ "GPIO3_IMR",	0x73f8C014, 0, 0xffffffff, 'x', "GPIO Bank3 Interrupt Mask Register" },
{ "GPIO3_ISR",	0x73f8C018, 0, 0xffffffff, 'x', "GPIO Bank3 Interrupt Status Register" },
{ "GPIO3_EDGE",	0x73f8C01c, 0, 0xffffffff, 'x', "GPIO Bank3 Edge Detect Register" },
{ "GPIO4_DR",   0x73f90000, 0, 0xffffffff, 'x', "GPIO Bank4 Data Register" },
{ "GPIO4_DIR",	0x73f90004, 0, 0xffffffff, 'x', "GPIO Bank4 Direction Register" },
{ "GPIO4_PSR",	0x73f90008, 0, 0xffffffff, 'x', "GPIO Bank4 Pad Status Register" },
{ "GPIO4_ICR1",	0x73f9000c, 0, 0xffffffff, 'x', "GPIO Bank4 Interrupt Configuration Register 1" },
{ "GPIO4_ICR2",	0x73f90010, 0, 0xffffffff, 'x', "GPIO Bank4 Interrupt Configuration Register 2" },
{ "GPIO4_IMR",	0x73f90014, 0, 0xffffffff, 'x', "GPIO Bank4 Interrupt Mask Register" },
{ "GPIO4_ISR",	0x73f90018, 0, 0xffffffff, 'x', "GPIO Bank4 Interrupt Status Register" },
{ "GPIO4_EDGE",	0x73f9001c, 0, 0xffffffff, 'x', "GPIO Bank4 Edge Detect Register" },
/* GPT */
{ "GPTCR_1",	0x73fa0000, 0, 0xffffffff, 'x', "GPT1 Control Register" },
{ "GPTPR_1",	0x73fa0004, 0, 0xffffffff, 'x', "GPT1 Prescaler Register" },
{ "GPTSR_1",	0x73fa0008, 0, 0xffffffff, 'x', "GPT1 Status Register" },
{ "GPTIR_1",	0x73fa000c, 0, 0xffffffff, 'x', "GPT1 Interrupt Register" },
{ "GPTOCR1_1",	0x73fa0010, 0, 0xffffffff, 'x', "GPT1 Output Compare Register 1" },
{ "GPTOCR2_1",	0x73fa0014, 0, 0xffffffff, 'x', "GPT1 Output Compare Register 2" },
{ "GPTOCR3_1",	0x73fa0018, 0, 0xffffffff, 'x', "GPT1 Output Compare Register 3" },
{ "GPTICR1_1",	0x73fa001c, 0, 0xffffffff, 'x', "GPT1 Input capture Register 1" },
{ "GPTICR2_1",	0x73fa0020, 0, 0xffffffff, 'x', "GPT1 Input capture Register 2" },
{ "GPTCNT_1",	0x73fa0024, 0, 0xffffffff, 'x', "GPT1 Counter Register" },
/* PWM1 */
{ "PWMCR_1",	0x73fb4000, 0, 0xffffffff, 'x', "PWM1 Control Register" },
{ "PWMSR_1",	0x73fb4004, 0, 0xffffffff, 'x', "PWM1 Status Register" },
{ "PWMIR_1",	0x73fb4008, 0, 0xffffffff, 'x', "PWM1 Interrupt Register" },
{ "PWMSAR_1",	0x73fb400c, 0, 0xffffffff, 'x', "PWM1 Sample Register" },
{ "PWMPR_1",	0x73fb4010, 0, 0xffffffff, 'x', "PWM1 Period Register" },
{ "PWMCNR_1",	0x73fb4014, 0, 0xffffffff, 'x', "PWM1 Counter Register" },
/* PWM2 */
{ "PWMCR_2",	0x73fb8000, 0, 0xffffffff, 'x', "PWM2 Control Register" },
{ "PWMSR_2",	0x73fb8004, 0, 0xffffffff, 'x', "PWM2 Status Register" },
{ "PWMIR_2",	0x73fb8008, 0, 0xffffffff, 'x', "PWM2 Interrupt Register" },
{ "PWMSAR_2",	0x73fb800c, 0, 0xffffffff, 'x', "PWM2 Sample Register" },
{ "PWMPR_2",	0x73fb8010, 0, 0xffffffff, 'x', "PWM2 Period Register" },
{ "PWMCNR_2",	0x73fb8014, 0, 0xffffffff, 'x', "PWM2 Counter Register" },
/* HSI2C */
{ "HISADR",	0x70038000, 0, 0xffffffff, 'x', "HS_I2C Slave Address Register R/W 0X0000 39.3.3.1/39-8"},
{ "HIMADR",	0x70038004, 0, 0xffffffff, 'x', "HS_I2C Master Address Register R/W 0x0000 39.3.3.2/39-9"},
{ "HICR",	0x70038008, 0, 0xffffffff, 'x', "HS_I2C Control Register R/W 0x0000 39.3.3.3/39-9"},
{ "HISR",	0x7003800C, 0, 0xffffffff, 'x', "HS_I2C Status Register R/W 0x0002 39.3.3.4/39-12"},
{ "HIIMR",	0x70038010, 0, 0xffffffff, 'x', "HS_I2C Interrupt Mask Register R/W 0x00FF 39.3.3.5/39-13"},
{ "HITDR",	0x70038014, 0, 0xffffffff, 'x', "HS_I2C Tx Data Register W 0x0000 39.3.3.6/39-15"},
{ "HIRDR",	0x70038018, 0, 0xffffffff, 'x', "HS_I2C Rx Data Register R 0x0000 39.3.3.7/39-15"},
{ "HIFSFDR",	0x7003801C, 0, 0xffffffff, 'x', "HS_I2C F/S-Mode Frequency Divider Register R/W 0x0000 39.3.3.8/39-16"},
{ "HIHSFDR",	0x70038020, 0, 0xffffffff, 'x', "HS_I2C HS-Mode Frequency Divider Register R/W 0X0000 39.3.3.9/39-17"},
{ "HITFR",	0x70038024, 0, 0xffffffff, 'x', "HS_I2C Tx FIFO Control/Status Register R/W 0x0000 39.3.3.10/39-18"},
{ "HIRFR",	0x70038028, 0, 0xffffffff, 'x', "HS_I2C Rx FIFO Control/Status Register R/W 0x0000 39.3.3.11/39-20"},
{ "HITDCR",	0x7003802C, 0, 0xffffffff, 'x', "HS_I2C Transmit Data Count register R/W 0x00FF 39.3.3.12/39-21"},
{ "HIRDCR",	0x70038030, 0, 0xffffffff, 'x', "HS_I2C Receive Data Count register R/W 0x00FF 39.3.3.13/39-22"},
/* I2C1 */
{ "IADR_1",	0x83fc8000, 0, 0xffffffff, 'x', "I2C1 Address Register" },
{ "IFDR_1",	0x83fc8004, 0, 0xffffffff, 'x', "I2C1 Frequency Divider Register" },
{ "I2CR_1",	0x83fc8008, 0, 0xffffffff, 'x', "I2C1 Control Register" },
{ "I2SR_1",	0x83fc800c, 0, 0xffffffff, 'x', "I2C1 Status Register" },
{ "I2DR_1",	0x83fc8010, 0, 0xffffffff, 'x', "I2C1 Data I/O Register" },
/* I2C2 */
{ "IADR_2",	0x83fc4000, 0, 0xffffffff, 'x', "I2C2 Address Register" },
{ "IFDR_2",	0x83fc4004, 0, 0xffffffff, 'x', "I2C2 Frequency Divider Register" },
{ "I2CR_2",	0x83fc4008, 0, 0xffffffff, 'x', "I2C2 Control Register" },
{ "I2SR_2",	0x83fc400c, 0, 0xffffffff, 'x', "I2C2 Status Register" },
{ "I2DR_2",	0x83fc4010, 0, 0xffffffff, 'x', "I2C2 Data I/O Register" },
/* FEC */
{ "EIR",	0x83fec004, 0, 0xffffffff, 'x', "FEC Interrupt Event Register" },
/* AUDMUX */
{ "PTCR1",	0x83fd0000, 0, 0xffffffff, 'x', "Port Timing Control Register 1" },
{ "PDCR1",	0x83fd0004, 0, 0xffffffff, 'x', "Port Data Control Register 1" },
{ "PTCR2",	0x83fd0008, 0, 0xffffffff, 'x', "Port Timing Control Register 2" },
{ "PDCR2",	0x83fd000C, 0, 0xffffffff, 'x', "Port Data Control Register 2" },
{ "PTCR3",	0x83fd0010, 0, 0xffffffff, 'x', "Port Timing Control Register 3" },
{ "PDCR3",	0x83fd0014, 0, 0xffffffff, 'x', "Port Data Control Register 3" },
{ "PTCR4",	0x83fd0018, 0, 0xffffffff, 'x', "Port Timing Control Register 4" },
{ "PDCR4",	0x83fd001C, 0, 0xffffffff, 'x', "Port Data Control Register 4" },
{ "PTCR5",	0x83fd0020, 0, 0xffffffff, 'x', "Port Timing Control Register 5" },
{ "PDCR5",	0x83fd0024, 0, 0xffffffff, 'x', "Port Data Control Register 5" },
{ "PTCR6",	0x83fd0028, 0, 0xffffffff, 'x', "Port Timing Control Register 6" },
{ "PDCR6",	0x83fd002C, 0, 0xffffffff, 'x', "Port Data Control Register 6" },
{ "PTCR7",	0x83fd0030, 0, 0xffffffff, 'x', "Port Timing Control Register 7" },
{ "PDCR7",	0x83fd0034, 0, 0xffffffff, 'x', "Port Data Control Register 7" },
/* SSI 1 */
{ "STX0_1",	0x83fcc000, 0, 0xffffffff, 'x', "SSI1 Transmit Data Register 0" },
{ "STX1_1",	0x83fcc004, 0, 0xffffffff, 'x', "SSI1 Transmit Data Register 1" },
{ "SRX0_1",	0x83fcc008, 0, 0xffffffff, 'x', "SSI1 Receive Data Register 0" },
{ "SRX1_1",	0x83fcc00c, 0, 0xffffffff, 'x', "SSI1 Receive Data Register 1" },
{ "SCR_1",	0x83fcc010, 0, 0xffffffff, 'x', "SSI1 Control Register" },
{ "SISR_1",	0x83fcc014, 0, 0xffffffff, 'x', "SSI1 Interrupt Status Register" },
{ "SIER_1",	0x83fcc018, 0, 0xffffffff, 'x', "SSI1 Interrupt Enable Register" },
{ "STCR_1",	0x83fcc01c, 0, 0xffffffff, 'x', "SSI1 Transmit Configuration Register" },
{ "SRCR_1",	0x83fcc020, 0, 0xffffffff, 'x', "SSI1 Receive Configuration Register" },
{ "STCCR_1",	0x83fcc024, 0, 0xffffffff, 'x', "SSI1 Transmit Clock Control Register" },
{ "SRCCR_1",	0x83fcc028, 0, 0xffffffff, 'x', "SSI& Receive Clock Control Register" },
{ "SFCSR_1",	0x83fcc02c, 0, 0xffffffff, 'x', "SSI1 FIFO Control/Status Register" },
{ "STR_1",	0x83fcc030, 0, 0xffffffff, 'x', "SSI1 Test Register1" },
{ "SOR_1",	0x83fcc034, 0, 0xffffffff, 'x', "SSI1 Option Register2" },
{ "SACNT_1",	0x83fcc038, 0, 0xffffffff, 'x', "SSI1 AC97 Control Register" },
{ "SACADD_1",	0x83fcc03c, 0, 0xffffffff, 'x', "SSI1 AC97 Command Address Register" },
{ "SACDAT_1",	0x83fcc040, 0, 0xffffffff, 'x', "SSI1 AC97 Command Data Register" },
{ "SATAG_1",	0x83fcc044, 0, 0xffffffff, 'x', "SSI1 AC97 Tag Register" },
{ "STMSK_1",	0x83fcc048, 0, 0xffffffff, 'x', "SSI1 Transmit Time Slot Mask Register" },
{ "SRMSK_1",	0x83fcc04c, 0, 0xffffffff, 'x', "SSI1 Receive Time Slot Mask Register" },
{ "SACCST_1",	0x83fcc050, 0, 0xffffffff, 'x', "SSI1 AC97 Channel Status Register" },
{ "SACCEN_1",	0x83fcc054, 0, 0xffffffff, 'x', "SSI1 AC97 Channel Enable Register" },
{ "SACCDIS_1",	0x83fcc058, 0, 0xffffffff, 'x', "SSI1 AC97 Channel Disable Register" },
/* SSI 2 */
{ "STX0_2",	0x70014000, 0, 0xffffffff, 'x', "SSI2 Transmit Data Register 0" },
{ "STX1_2",	0x70014004, 0, 0xffffffff, 'x', "SSI2 Transmit Data Register 1" },
{ "SRX0_2",	0x70014008, 0, 0xffffffff, 'x', "SSI2 Receive Data Register 0" },
{ "SRX1_2",	0x7001400c, 0, 0xffffffff, 'x', "SSI2 Receive Data Register 1" },
{ "SCR_2",	0x70014010, 0, 0xffffffff, 'x', "SSI2 Control Register" },
{ "SISR_2",	0x70014014, 0, 0xffffffff, 'x', "SSI2 Interrupt Status Register" },
{ "SIER_2",	0x70014018, 0, 0xffffffff, 'x', "SSI2 Interrupt Enable Register" },
{ "STCR_2",	0x7001401c, 0, 0xffffffff, 'x', "SSI2 Transmit Configuration Register" },
{ "SRCR_2",	0x70014020, 0, 0xffffffff, 'x', "SSI2 Receive Configuration Register" },
{ "STCCR_2",	0x70014024, 0, 0xffffffff, 'x', "SSI2 Transmit Clock Control Register" },
{ "SRCCR_2",	0x70014028, 0, 0xffffffff, 'x', "SSI2 Receive Clock Control Register" },
{ "SFCSR_2",	0x7001402c, 0, 0xffffffff, 'x', "SSI2 FIFO Control/Status Register" },
{ "STR_2",	0x70014030, 0, 0xffffffff, 'x', "SSI2 Test Register1" },
{ "SOR_2",	0x70014034, 0, 0xffffffff, 'x', "SSI2 Option Register2" },
{ "SACNT_2",	0x70014038, 0, 0xffffffff, 'x', "SSI2 AC97 Control Register" },
{ "SACADD_2",	0x7001403c, 0, 0xffffffff, 'x', "SSI2 AC97 Command Address Register" },
{ "SACDAT_2",	0x70014040, 0, 0xffffffff, 'x', "SSI2 AC97 Command Data Register" },
{ "SATAG_2",	0x70014044, 0, 0xffffffff, 'x', "SSI2 AC97 Tag Register" },
{ "STMSK_2",	0x70014048, 0, 0xffffffff, 'x', "SSI2 Transmit Time Slot Mask Register" },
{ "SRMSK_2",	0x7001404c, 0, 0xffffffff, 'x', "SSI2 Receive Time Slot Mask Register" },
{ "SACCST_2",	0x70014050, 0, 0xffffffff, 'x', "SSI2 AC97 Channel Status Register" },
{ "SACCEN_2",	0x70014054, 0, 0xffffffff, 'x', "SSI2 AC97 Channel Enable Register" },
{ "SACCDIS_2",	0x70014058, 0, 0xffffffff, 'x', "SSI2 AC97 Channel Disable Register" },
/* IIM */
{ "STAT",	0x83f98000, 0, 0xffffffff, 'x', "Status register" },
{ "STATM",	0x83f98004, 0, 0xffffffff, 'x', "Status IRQ Mask register" },
{ "ERR",	0x83f98008, 0, 0xffffffff, 'x', "Module Errors register" },
{ "EMASK",	0x83f9800C, 0, 0xffffffff, 'x', "Error IRQ Mask register" },
{ "FCTL",	0x83f98010, 0, 0xffffffff, 'x', "Fuse Control register" },
{ "UA",		0x83f98014, 0, 0xffffffff, 'x', "Upper Address register" },
{ "LA",		0x83f98018, 0, 0xffffffff, 'x', "Lower Address register" },
{ "SDAT",	0x83f9801C, 0, 0xffffffff, 'x', "Explicit Sense Data register" },
{ "PREV",	0x83f98020, 0, 0xffffffff, 'x', "Product Revision register" },
{ "SREV",	0x83f98024, 0, 0xffffffff, 'x', "Silicon Revision register" },
{ "PREG_P",	0x83f98028, 0, 0xffffffff, 'x', "Program Protection register" },
{ "SCS0",	0x83f9802C, 0, 0xffffffff, 'x', "Software Controllable Signals register 0" },
{ "SCS1",	0x83f98030, 0, 0xffffffff, 'x', "Software Controllable Volatile Hardware - Visible Signals register 1" },
{ "SCS2",	0x83f98034, 0, 0xffffffff, 'x', "Software Controllable Volatile Hardware - Visible Signals register 2" },
{ "SCS1",	0x83f98030, 0, 0xffffffff, 'x', "Software Controllable Volatile Hardware - Visible Signals register 3" },
{ "SaharaEn0",	0x83f9803C, 0, 0xffffffff, 'x', "Software setting. Upon setting proper value allows SAHARA_EN blowing." },
{ "SaharaEn1",	0x83f98040, 0, 0xffffffff, 'x', "Software setting. Upon setting proper value allows SAHARA_EN blowing." },
{ "SaharaEn2",	0x83f98044, 0, 0xffffffff, 'x', "Software setting. Upon setting proper value allows SAHARA_EN blowing." },
{ "SaharaEn3",	0x83f98048, 0, 0xffffffff, 'x', "Software setting. Upon setting proper value allows SAHARA_EN blowing." },
{ "SaharaEn4",	0x83f9804C, 0, 0xffffffff, 'x', "Software setting. Upon setting proper value allows SAHARA_EN blowing." },
{ "SaharaEn5",	0x83f98050, 0, 0xffffffff, 'x', "Software setting. Upon setting proper value allows SAHARA_EN blowing." },
/* SCC */
{ "SCC_VER",	0x83fb4000, 0, 0xffffffff, 'x', "SCC Version" },
{ "SCC_IC",	0x83fb4008, 0, 0xffffffff, 'x', "SCC Interrupt Control" },
{ "SCC_CS",	0x83fb400c, 0, 0xffffffff, 'x', "SCC Command Status" },
{ "SCC_ES",	0x83fb4010, 0, 0xffffffff, 'x', "SCC Error Status" },
{ "SCC_DMAF",	0x83fb4014, 0, 0xffffffff, 'x', "SCC DMA Fault" },
{ "SCC_PART",	0x83fb4018, 0, 0xffffffff, 'x', "SCC Partition Owners" },
{ "SCC_PART_EN",0x83fb401c, 0, 0xffffffff, 'x', "SCC Partitions Engaged" },
{ "SCC_UN0",	0x83fb4020, 0, 0xffffffff, 'x', "SCC Unique Number 0" },
{ "SCC_UN1",	0x83fb4024, 0, 0xffffffff, 'x', "SCC Unique Number 1" },
{ "SCC_UN2",	0x83fb4028, 0, 0xffffffff, 'x', "SCC Unique Number 2" },
{ "SCC_UN3",	0x83fb402c, 0, 0xffffffff, 'x', "SCC Unique Number 3" },
{ "SCC_ZERO",	0x83fb4050, 0, 0xffffffff, 'x', "SCC Zeroize Command" },
{ "SCC_CMD",	0x83fb4054, 0, 0xffffffff, 'x', "SCC Cipher Command" },
{ "SCC_BLACK",	0x83fb4058, 0, 0xffffffff, 'x', "SCC Cipher Black RAM Start Address" },
{ "SCC_DBG",	0x83fb405c, 0, 0xffffffff, 'x', "SCC Internal Debug" },
{ "SCC_CINIT1",	0x83fb4060, 0, 0xffffffff, 'x', "SCC Cipher Initialization Vector [127-96]" },
{ "SCC_CINIT2",	0x83fb4064, 0, 0xffffffff, 'x', "SCC Cipher Initialization Vector [95-64]" },
{ "SCC_CINIT3",	0x83fb4068, 0, 0xffffffff, 'x', "SCC Cipher Initialization Vector [63-32]" },
{ "SCC_CINIT4",	0x83fb406c, 0, 0xffffffff, 'x', "SCC Cipher Initialization Vector [31-0]" },
{ "SMID_PART0",	0x83fb4080, 0, 0xffffffff, 'x', "SCC SMID Partition 0" },
{ "MAP_PART0",	0x83fb4084, 0, 0xffffffff, 'x', "SCC Master Access Permissions Partition 0" },
{ "SMID_PART1",	0x83fb4088, 0, 0xffffffff, 'x', "SCC SMID Partition 1" },
{ "MAP_PART1",	0x83fb408c, 0, 0xffffffff, 'x', "SCC Master Access Permissions Partition 1" },
{ "SMID_PART2",	0x83fb4090, 0, 0xffffffff, 'x', "SCC SMID Partition 2" },
{ "MAP_PART2",	0x83fb4094, 0, 0xffffffff, 'x', "SCC Master Access Permissions Partition 2" },
{ "SMID_PART3",	0x83fb4098, 0, 0xffffffff, 'x', "SCC SMID Partition 3" },
{ "MAP_PART3",	0x83fb409c, 0, 0xffffffff, 'x', "SCC Master Access Permissions Partition 3" },
{ "SMON_STAT",	0x83fb4100, 0, 0xffffffff, 'x', "SCC Security Monitor Status" },
{ "SMON_CMD",	0x83fb4104, 0, 0xffffffff, 'x', "SCC Security Monitor Command" },
{ "SEQ_START",	0x83fb4108, 0, 0xffffffff, 'x', "SCC Sequence Start" },
{ "SEQ_END",	0x83fb410c, 0, 0xffffffff, 'x', "SCC Sequence End" },
{ "SEQ_CHK",	0x83fb4110, 0, 0xffffffff, 'x', "SCC Sequence Check" },
{ "BIT_COUNT",	0x83fb4114, 0, 0xffffffff, 'x', "SCC Bit Count" },
{ "BANK_INC",	0x83fb4118, 0, 0xffffffff, 'x', "SCC Bit Bank Increment Size" },
{ "BANK_DEC",	0x83fb411c, 0, 0xffffffff, 'x', "SCC Bit Bank Decrement" },
{ "CMP_SZ",	0x83fb4120, 0, 0xffffffff, 'x', "SCC Compare Size" },
{ "PLN_CHK",	0x83fb4124, 0, 0xffffffff, 'x', "SCC Plaintext Check" },
{ "CPH_CHK",	0x83fb4128, 0, 0xffffffff, 'x', "SCC Ciphertext Check" },
{ "TIMERIV",	0x83fb412c, 0, 0xffffffff, 'x', "SCC Timer IV" },
{ "TIMER_CTL",	0x83fb4130, 0, 0xffffffff, 'x', "SCC Timer Control" },
{ "SEC_VIO",	0x83fb4134, 0, 0xffffffff, 'x', "SCC Security Violation Detector" },
{ "SEC_TIMER",	0x83fb4138, 0, 0xffffffff, 'x', "SCC Security Timer" },
{ "HA_CONF",	0x83fb413c, 0, 0xffffffff, 'x', "SCC High Assurance Configuration" },
/* SSI 3 */
{ "STX0_3",	0x83fe8000, 0, 0xffffffff, 'x', "SSI3 Transmit Data Register 0" },
{ "STX1_3",	0x83fe8004, 0, 0xffffffff, 'x', "SSI3 Transmit Data Register 1" },
{ "SRX0_3",	0x83fe8008, 0, 0xffffffff, 'x', "SSI3 Receive Data Register 0" },
{ "SRX1_3",	0x83fe800c, 0, 0xffffffff, 'x', "SSI3 Receive Data Register 1" },
{ "SCR_3",	0x83fe8010, 0, 0xffffffff, 'x', "SSI3 Control Register" },
{ "SISR_3",	0x83fe8014, 0, 0xffffffff, 'x', "SSI3 Interrupt Status Register" },
{ "SIER_3",	0x83fe8018, 0, 0xffffffff, 'x', "SSI3 Interrupt Enable Register" },
{ "STCR_3",	0x83fe801c, 0, 0xffffffff, 'x', "SSI3 Transmit Configuration Register" },
{ "SRCR_3",	0x83fe8020, 0, 0xffffffff, 'x', "SSI3 Receive Configuration Register" },
{ "STCCR_3",	0x83fe8024, 0, 0xffffffff, 'x', "SSI3 Transmit Clock Control Register" },
{ "SRCCR_3",	0x83fe8028, 0, 0xffffffff, 'x', "SSI3 Receive Clock Control Register" },
{ "SFCSR_3",	0x83fe802c, 0, 0xffffffff, 'x', "SSI3 FIFO Control/Status Register" },
{ "STR_3",	0x83fe8030, 0, 0xffffffff, 'x', "SSI3 Test Register1" },
{ "SOR_3",	0x83fe8034, 0, 0xffffffff, 'x', "SSI3 Option Register2" },
{ "SACNT_3",	0x83fe8038, 0, 0xffffffff, 'x', "SSI3 AC97 Control Register" },
{ "SACADD_3",	0x83fe803c, 0, 0xffffffff, 'x', "SSI3 AC97 Command Address Register" },
{ "SACDAT_3",	0x83fe8040, 0, 0xffffffff, 'x', "SSI3 AC97 Command Data Register" },
{ "SATAG_3",	0x83fe8044, 0, 0xffffffff, 'x', "SSI3 AC97 Tag Register" },
{ "STMSK_3",	0x83fe8048, 0, 0xffffffff, 'x', "SSI3 Transmit Time Slot Mask Register" },
{ "SRMSK_3",	0x83fe804c, 0, 0xffffffff, 'x', "SSI3 Receive Time Slot Mask Register" },
{ "SACCST_3",	0x83fe8050, 0, 0xffffffff, 'x', "SSI3 AC97 Channel Status Register" },
{ "SACCEN_3",	0x83fe8054, 0, 0xffffffff, 'x', "SSI3 AC97 Channel Enable Register" },
{ "SACCDIS_3",	0x83fe8058, 0, 0xffffffff, 'x', "SSI3 AC97 Channel Disable Register" },
/* IOMUX */
{ "IOMUXC_SW_MUX_CTL_PAD_I2C1_CLK",	0x73FA81F8, 0, 0xffffffff, 'x', "Mux control for I2C1_CLK pad" },
{ "IOMUXC_SW_MUX_CTL_PAD_I2C1_DAT",	0x73FA81FC, 0, 0xffffffff, 'x', "Mux control for I2C1_DAT pad" },
/* M4IF */
{ "M4IF_CR",	0x63fd8048, 0, 0xffffffff, 'x', "M4IF Control Register" },
};
