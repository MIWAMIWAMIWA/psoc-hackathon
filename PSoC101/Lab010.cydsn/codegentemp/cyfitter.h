/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.4
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* led */
#define led__0__DM__MASK 0x07u
#define led__0__DM__SHIFT 0u
#define led__0__DR CYREG_PRT0_DR
#define led__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define led__0__HSIOM_MASK 0x0000000Fu
#define led__0__HSIOM_SHIFT 0u
#define led__0__INTCFG CYREG_PRT0_INTCFG
#define led__0__INTSTAT CYREG_PRT0_INTSTAT
#define led__0__MASK 0x01u
#define led__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define led__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define led__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define led__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define led__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define led__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define led__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define led__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define led__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define led__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define led__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define led__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define led__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define led__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define led__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define led__0__PC CYREG_PRT0_PC
#define led__0__PC2 CYREG_PRT0_PC2
#define led__0__PORT 0u
#define led__0__PS CYREG_PRT0_PS
#define led__0__SHIFT 0u
#define led__DR CYREG_PRT0_DR
#define led__INTCFG CYREG_PRT0_INTCFG
#define led__INTSTAT CYREG_PRT0_INTSTAT
#define led__MASK 0x01u
#define led__PA__CFG0 CYREG_UDB_PA0_CFG0
#define led__PA__CFG1 CYREG_UDB_PA0_CFG1
#define led__PA__CFG10 CYREG_UDB_PA0_CFG10
#define led__PA__CFG11 CYREG_UDB_PA0_CFG11
#define led__PA__CFG12 CYREG_UDB_PA0_CFG12
#define led__PA__CFG13 CYREG_UDB_PA0_CFG13
#define led__PA__CFG14 CYREG_UDB_PA0_CFG14
#define led__PA__CFG2 CYREG_UDB_PA0_CFG2
#define led__PA__CFG3 CYREG_UDB_PA0_CFG3
#define led__PA__CFG4 CYREG_UDB_PA0_CFG4
#define led__PA__CFG5 CYREG_UDB_PA0_CFG5
#define led__PA__CFG6 CYREG_UDB_PA0_CFG6
#define led__PA__CFG7 CYREG_UDB_PA0_CFG7
#define led__PA__CFG8 CYREG_UDB_PA0_CFG8
#define led__PA__CFG9 CYREG_UDB_PA0_CFG9
#define led__PC CYREG_PRT0_PC
#define led__PC2 CYREG_PRT0_PC2
#define led__PORT 0u
#define led__PS CYREG_PRT0_PS
#define led__SHIFT 0u

/* CapSense */
#define CapSense_Cmod__0__DM__MASK 0x1C0u
#define CapSense_Cmod__0__DM__SHIFT 6u
#define CapSense_Cmod__0__DR CYREG_PRT4_DR
#define CapSense_Cmod__0__HSIOM CYREG_HSIOM_PORT_SEL4
#define CapSense_Cmod__0__HSIOM_MASK 0x00000F00u
#define CapSense_Cmod__0__HSIOM_SHIFT 8u
#define CapSense_Cmod__0__INTCFG CYREG_PRT4_INTCFG
#define CapSense_Cmod__0__INTSTAT CYREG_PRT4_INTSTAT
#define CapSense_Cmod__0__MASK 0x04u
#define CapSense_Cmod__0__PC CYREG_PRT4_PC
#define CapSense_Cmod__0__PC2 CYREG_PRT4_PC2
#define CapSense_Cmod__0__PORT 4u
#define CapSense_Cmod__0__PS CYREG_PRT4_PS
#define CapSense_Cmod__0__SHIFT 2u
#define CapSense_Cmod__DR CYREG_PRT4_DR
#define CapSense_Cmod__INTCFG CYREG_PRT4_INTCFG
#define CapSense_Cmod__INTSTAT CYREG_PRT4_INTSTAT
#define CapSense_Cmod__MASK 0x04u
#define CapSense_Cmod__PC CYREG_PRT4_PC
#define CapSense_Cmod__PC2 CYREG_PRT4_PC2
#define CapSense_Cmod__PORT 4u
#define CapSense_Cmod__PS CYREG_PRT4_PS
#define CapSense_Cmod__SHIFT 2u
#define CapSense_CSD__CSD_CONFIG CYREG_CSD_CONFIG
#define CapSense_CSD__CSD_COUNTER CYREG_CSD_COUNTER
#define CapSense_CSD__CSD_ID CYREG_CSD_ID
#define CapSense_CSD__CSD_INTR CYREG_CSD_INTR
#define CapSense_CSD__CSD_INTR_SET CYREG_CSD_INTR_SET
#define CapSense_CSD__CSD_NUMBER 0u
#define CapSense_CSD__CSD_STATUS CYREG_CSD_STATUS
#define CapSense_IDACComp_cy_psoc4_idac__CONTROL CYREG_CSD_CONFIG
#define CapSense_IDACComp_cy_psoc4_idac__CSD_IDAC CYREG_CSD_IDAC
#define CapSense_IDACComp_cy_psoc4_idac__CSD_IDAC_SHIFT 16u
#define CapSense_IDACComp_cy_psoc4_idac__CSD_TRIM1 CYREG_CSD_TRIM1
#define CapSense_IDACComp_cy_psoc4_idac__CSD_TRIM1_SHIFT 4u
#define CapSense_IDACComp_cy_psoc4_idac__CSD_TRIM2 CYREG_CSD_TRIM2
#define CapSense_IDACComp_cy_psoc4_idac__CSD_TRIM2_SHIFT 4u
#define CapSense_IDACComp_cy_psoc4_idac__IDAC_NUMBER 2u
#define CapSense_IDACComp_cy_psoc4_idac__POLARITY CYREG_CSD_CONFIG
#define CapSense_IDACComp_cy_psoc4_idac__POLARITY_SHIFT 17u
#define CapSense_IDACMod_cy_psoc4_idac__CONTROL CYREG_CSD_CONFIG
#define CapSense_IDACMod_cy_psoc4_idac__CSD_IDAC CYREG_CSD_IDAC
#define CapSense_IDACMod_cy_psoc4_idac__CSD_IDAC_SHIFT 0u
#define CapSense_IDACMod_cy_psoc4_idac__CSD_TRIM1 CYREG_CSD_TRIM1
#define CapSense_IDACMod_cy_psoc4_idac__CSD_TRIM1_SHIFT 0u
#define CapSense_IDACMod_cy_psoc4_idac__CSD_TRIM2 CYREG_CSD_TRIM2
#define CapSense_IDACMod_cy_psoc4_idac__CSD_TRIM2_SHIFT 0u
#define CapSense_IDACMod_cy_psoc4_idac__IDAC_NUMBER 1u
#define CapSense_IDACMod_cy_psoc4_idac__POLARITY CYREG_CSD_CONFIG
#define CapSense_IDACMod_cy_psoc4_idac__POLARITY_SHIFT 16u
#define CapSense_ISR__INTC_CLR_EN_REG CYREG_CM0_ICER
#define CapSense_ISR__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define CapSense_ISR__INTC_MASK 0x8000u
#define CapSense_ISR__INTC_NUMBER 15u
#define CapSense_ISR__INTC_PRIOR_MASK 0xC0000000u
#define CapSense_ISR__INTC_PRIOR_NUM 3u
#define CapSense_ISR__INTC_PRIOR_REG CYREG_CM0_IPR3
#define CapSense_ISR__INTC_SET_EN_REG CYREG_CM0_ISER
#define CapSense_ISR__INTC_SET_PD_REG CYREG_CM0_ISPR
#define CapSense_ModClk__DIVIDER_MASK 0x0000FFFFu
#define CapSense_ModClk__ENABLE CYREG_CLK_DIVIDER_A00
#define CapSense_ModClk__ENABLE_MASK 0x80000000u
#define CapSense_ModClk__MASK 0x80000000u
#define CapSense_ModClk__REGISTER CYREG_CLK_DIVIDER_A00
#define CapSense_Sns__0__DM__MASK 0x7000u
#define CapSense_Sns__0__DM__SHIFT 12u
#define CapSense_Sns__0__DR CYREG_PRT3_DR
#define CapSense_Sns__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define CapSense_Sns__0__HSIOM_MASK 0x000F0000u
#define CapSense_Sns__0__HSIOM_SHIFT 16u
#define CapSense_Sns__0__INTCFG CYREG_PRT3_INTCFG
#define CapSense_Sns__0__INTSTAT CYREG_PRT3_INTSTAT
#define CapSense_Sns__0__MASK 0x10u
#define CapSense_Sns__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define CapSense_Sns__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define CapSense_Sns__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define CapSense_Sns__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define CapSense_Sns__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define CapSense_Sns__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define CapSense_Sns__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define CapSense_Sns__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define CapSense_Sns__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define CapSense_Sns__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define CapSense_Sns__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define CapSense_Sns__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define CapSense_Sns__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define CapSense_Sns__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define CapSense_Sns__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define CapSense_Sns__0__PC CYREG_PRT3_PC
#define CapSense_Sns__0__PC2 CYREG_PRT3_PC2
#define CapSense_Sns__0__PORT 3u
#define CapSense_Sns__0__PS CYREG_PRT3_PS
#define CapSense_Sns__0__SHIFT 4u
#define CapSense_Sns__Button0_Sns0__DM__MASK 0x7000u
#define CapSense_Sns__Button0_Sns0__DM__SHIFT 12u
#define CapSense_Sns__Button0_Sns0__DR CYREG_PRT3_DR
#define CapSense_Sns__Button0_Sns0__INTCFG CYREG_PRT3_INTCFG
#define CapSense_Sns__Button0_Sns0__INTSTAT CYREG_PRT3_INTSTAT
#define CapSense_Sns__Button0_Sns0__MASK 0x10u
#define CapSense_Sns__Button0_Sns0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define CapSense_Sns__Button0_Sns0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define CapSense_Sns__Button0_Sns0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define CapSense_Sns__Button0_Sns0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define CapSense_Sns__Button0_Sns0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define CapSense_Sns__Button0_Sns0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define CapSense_Sns__Button0_Sns0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define CapSense_Sns__Button0_Sns0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define CapSense_Sns__Button0_Sns0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define CapSense_Sns__Button0_Sns0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define CapSense_Sns__Button0_Sns0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define CapSense_Sns__Button0_Sns0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define CapSense_Sns__Button0_Sns0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define CapSense_Sns__Button0_Sns0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define CapSense_Sns__Button0_Sns0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define CapSense_Sns__Button0_Sns0__PC CYREG_PRT3_PC
#define CapSense_Sns__Button0_Sns0__PC2 CYREG_PRT3_PC2
#define CapSense_Sns__Button0_Sns0__PORT 3u
#define CapSense_Sns__Button0_Sns0__PS CYREG_PRT3_PS
#define CapSense_Sns__Button0_Sns0__SHIFT 4u
#define CapSense_Sns__DR CYREG_PRT3_DR
#define CapSense_Sns__INTCFG CYREG_PRT3_INTCFG
#define CapSense_Sns__INTSTAT CYREG_PRT3_INTSTAT
#define CapSense_Sns__MASK 0x10u
#define CapSense_Sns__PA__CFG0 CYREG_UDB_PA3_CFG0
#define CapSense_Sns__PA__CFG1 CYREG_UDB_PA3_CFG1
#define CapSense_Sns__PA__CFG10 CYREG_UDB_PA3_CFG10
#define CapSense_Sns__PA__CFG11 CYREG_UDB_PA3_CFG11
#define CapSense_Sns__PA__CFG12 CYREG_UDB_PA3_CFG12
#define CapSense_Sns__PA__CFG13 CYREG_UDB_PA3_CFG13
#define CapSense_Sns__PA__CFG14 CYREG_UDB_PA3_CFG14
#define CapSense_Sns__PA__CFG2 CYREG_UDB_PA3_CFG2
#define CapSense_Sns__PA__CFG3 CYREG_UDB_PA3_CFG3
#define CapSense_Sns__PA__CFG4 CYREG_UDB_PA3_CFG4
#define CapSense_Sns__PA__CFG5 CYREG_UDB_PA3_CFG5
#define CapSense_Sns__PA__CFG6 CYREG_UDB_PA3_CFG6
#define CapSense_Sns__PA__CFG7 CYREG_UDB_PA3_CFG7
#define CapSense_Sns__PA__CFG8 CYREG_UDB_PA3_CFG8
#define CapSense_Sns__PA__CFG9 CYREG_UDB_PA3_CFG9
#define CapSense_Sns__PC CYREG_PRT3_PC
#define CapSense_Sns__PC2 CYREG_PRT3_PC2
#define CapSense_Sns__PORT 3u
#define CapSense_Sns__PS CYREG_PRT3_PS
#define CapSense_Sns__SHIFT 4u
#define CapSense_SnsClk__DIVIDER_MASK 0x0000FFFFu
#define CapSense_SnsClk__ENABLE CYREG_CLK_DIVIDER_B00
#define CapSense_SnsClk__ENABLE_MASK 0x80000000u
#define CapSense_SnsClk__MASK 0x80000000u
#define CapSense_SnsClk__REGISTER CYREG_CLK_DIVIDER_B00

/* Miscellaneous */
#define CY_PROJECT_NAME "Lab010"
#define CY_VERSION "PSoC Creator  4.4"
#define CYDEV_BANDGAP_VOLTAGE 1.024
#define CYDEV_BCLK__HFCLK__HZ 24000000U
#define CYDEV_BCLK__HFCLK__KHZ 24000U
#define CYDEV_BCLK__HFCLK__MHZ 24U
#define CYDEV_BCLK__SYSCLK__HZ 24000000U
#define CYDEV_BCLK__SYSCLK__KHZ 24000U
#define CYDEV_BCLK__SYSCLK__MHZ 24U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 26u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x04C81193u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 26u
#define CYDEV_CHIP_MEMBER_4AA 25u
#define CYDEV_CHIP_MEMBER_4AB 30u
#define CYDEV_CHIP_MEMBER_4AC 14u
#define CYDEV_CHIP_MEMBER_4AD 15u
#define CYDEV_CHIP_MEMBER_4AE 16u
#define CYDEV_CHIP_MEMBER_4D 20u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 27u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 24u
#define CYDEV_CHIP_MEMBER_4I 32u
#define CYDEV_CHIP_MEMBER_4J 21u
#define CYDEV_CHIP_MEMBER_4K 22u
#define CYDEV_CHIP_MEMBER_4L 31u
#define CYDEV_CHIP_MEMBER_4M 29u
#define CYDEV_CHIP_MEMBER_4N 11u
#define CYDEV_CHIP_MEMBER_4O 8u
#define CYDEV_CHIP_MEMBER_4P 28u
#define CYDEV_CHIP_MEMBER_4Q 17u
#define CYDEV_CHIP_MEMBER_4R 9u
#define CYDEV_CHIP_MEMBER_4S 12u
#define CYDEV_CHIP_MEMBER_4T 10u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 23u
#define CYDEV_CHIP_MEMBER_4W 13u
#define CYDEV_CHIP_MEMBER_4X 7u
#define CYDEV_CHIP_MEMBER_4Y 18u
#define CYDEV_CHIP_MEMBER_4Z 19u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 33u
#define CYDEV_CHIP_MEMBER_FM3 37u
#define CYDEV_CHIP_MEMBER_FM4 38u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 34u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 35u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 36u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4A
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4AA_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AB_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AC_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AD_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AE_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4W_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4X_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Y_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Z_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4A_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_Disallowed
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 1u
#define CYDEV_DFT_SELECT_CLK1 2u
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0400
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_WDT_GENERATE_ISR 1u
#define CYIPBLOCK_M0S8_CTBM_VERSION 0
#define CYIPBLOCK_m0s8cpuss_VERSION 0
#define CYIPBLOCK_m0s8csd_VERSION 0
#define CYIPBLOCK_m0s8gpio2_VERSION 0
#define CYIPBLOCK_m0s8hsiom4a_VERSION 0
#define CYIPBLOCK_m0s8lcd_VERSION 0
#define CYIPBLOCK_m0s8lpcomp_VERSION 0
#define CYIPBLOCK_m0s8pclk_VERSION 0
#define CYIPBLOCK_m0s8sar_VERSION 0
#define CYIPBLOCK_m0s8scb_VERSION 0
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 0
#define CYIPBLOCK_m0s8udbif_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 2
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
