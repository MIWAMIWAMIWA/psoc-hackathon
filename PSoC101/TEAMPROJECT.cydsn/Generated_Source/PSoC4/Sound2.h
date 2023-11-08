/*******************************************************************************
* File Name: Sound2.h
* Version 2.20
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_Sound2_H)
#define CY_CLOCK_Sound2_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
*        Function Prototypes
***************************************/
#if defined CYREG_PERI_DIV_CMD

void Sound2_StartEx(uint32 alignClkDiv);
#define Sound2_Start() \
    Sound2_StartEx(Sound2__PA_DIV_ID)

#else

void Sound2_Start(void);

#endif/* CYREG_PERI_DIV_CMD */

void Sound2_Stop(void);

void Sound2_SetFractionalDividerRegister(uint16 clkDivider, uint8 clkFractional);

uint16 Sound2_GetDividerRegister(void);
uint8  Sound2_GetFractionalDividerRegister(void);

#define Sound2_Enable()                         Sound2_Start()
#define Sound2_Disable()                        Sound2_Stop()
#define Sound2_SetDividerRegister(clkDivider, reset)  \
    Sound2_SetFractionalDividerRegister((clkDivider), 0u)
#define Sound2_SetDivider(clkDivider)           Sound2_SetDividerRegister((clkDivider), 1u)
#define Sound2_SetDividerValue(clkDivider)      Sound2_SetDividerRegister((clkDivider) - 1u, 1u)


/***************************************
*             Registers
***************************************/
#if defined CYREG_PERI_DIV_CMD

#define Sound2_DIV_ID     Sound2__DIV_ID

#define Sound2_CMD_REG    (*(reg32 *)CYREG_PERI_DIV_CMD)
#define Sound2_CTRL_REG   (*(reg32 *)Sound2__CTRL_REGISTER)
#define Sound2_DIV_REG    (*(reg32 *)Sound2__DIV_REGISTER)

#define Sound2_CMD_DIV_SHIFT          (0u)
#define Sound2_CMD_PA_DIV_SHIFT       (8u)
#define Sound2_CMD_DISABLE_SHIFT      (30u)
#define Sound2_CMD_ENABLE_SHIFT       (31u)

#define Sound2_CMD_DISABLE_MASK       ((uint32)((uint32)1u << Sound2_CMD_DISABLE_SHIFT))
#define Sound2_CMD_ENABLE_MASK        ((uint32)((uint32)1u << Sound2_CMD_ENABLE_SHIFT))

#define Sound2_DIV_FRAC_MASK  (0x000000F8u)
#define Sound2_DIV_FRAC_SHIFT (3u)
#define Sound2_DIV_INT_MASK   (0xFFFFFF00u)
#define Sound2_DIV_INT_SHIFT  (8u)

#else 

#define Sound2_DIV_REG        (*(reg32 *)Sound2__REGISTER)
#define Sound2_ENABLE_REG     Sound2_DIV_REG
#define Sound2_DIV_FRAC_MASK  Sound2__FRAC_MASK
#define Sound2_DIV_FRAC_SHIFT (16u)
#define Sound2_DIV_INT_MASK   Sound2__DIVIDER_MASK
#define Sound2_DIV_INT_SHIFT  (0u)

#endif/* CYREG_PERI_DIV_CMD */

#endif /* !defined(CY_CLOCK_Sound2_H) */

/* [] END OF FILE */
