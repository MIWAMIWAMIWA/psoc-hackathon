/*******************************************************************************
* File Name: Sound1.h
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

#if !defined(CY_CLOCK_Sound1_H)
#define CY_CLOCK_Sound1_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
*        Function Prototypes
***************************************/
#if defined CYREG_PERI_DIV_CMD

void Sound1_StartEx(uint32 alignClkDiv);
#define Sound1_Start() \
    Sound1_StartEx(Sound1__PA_DIV_ID)

#else

void Sound1_Start(void);

#endif/* CYREG_PERI_DIV_CMD */

void Sound1_Stop(void);

void Sound1_SetFractionalDividerRegister(uint16 clkDivider, uint8 clkFractional);

uint16 Sound1_GetDividerRegister(void);
uint8  Sound1_GetFractionalDividerRegister(void);

#define Sound1_Enable()                         Sound1_Start()
#define Sound1_Disable()                        Sound1_Stop()
#define Sound1_SetDividerRegister(clkDivider, reset)  \
    Sound1_SetFractionalDividerRegister((clkDivider), 0u)
#define Sound1_SetDivider(clkDivider)           Sound1_SetDividerRegister((clkDivider), 1u)
#define Sound1_SetDividerValue(clkDivider)      Sound1_SetDividerRegister((clkDivider) - 1u, 1u)


/***************************************
*             Registers
***************************************/
#if defined CYREG_PERI_DIV_CMD

#define Sound1_DIV_ID     Sound1__DIV_ID

#define Sound1_CMD_REG    (*(reg32 *)CYREG_PERI_DIV_CMD)
#define Sound1_CTRL_REG   (*(reg32 *)Sound1__CTRL_REGISTER)
#define Sound1_DIV_REG    (*(reg32 *)Sound1__DIV_REGISTER)

#define Sound1_CMD_DIV_SHIFT          (0u)
#define Sound1_CMD_PA_DIV_SHIFT       (8u)
#define Sound1_CMD_DISABLE_SHIFT      (30u)
#define Sound1_CMD_ENABLE_SHIFT       (31u)

#define Sound1_CMD_DISABLE_MASK       ((uint32)((uint32)1u << Sound1_CMD_DISABLE_SHIFT))
#define Sound1_CMD_ENABLE_MASK        ((uint32)((uint32)1u << Sound1_CMD_ENABLE_SHIFT))

#define Sound1_DIV_FRAC_MASK  (0x000000F8u)
#define Sound1_DIV_FRAC_SHIFT (3u)
#define Sound1_DIV_INT_MASK   (0xFFFFFF00u)
#define Sound1_DIV_INT_SHIFT  (8u)

#else 

#define Sound1_DIV_REG        (*(reg32 *)Sound1__REGISTER)
#define Sound1_ENABLE_REG     Sound1_DIV_REG
#define Sound1_DIV_FRAC_MASK  Sound1__FRAC_MASK
#define Sound1_DIV_FRAC_SHIFT (16u)
#define Sound1_DIV_INT_MASK   Sound1__DIVIDER_MASK
#define Sound1_DIV_INT_SHIFT  (0u)

#endif/* CYREG_PERI_DIV_CMD */

#endif /* !defined(CY_CLOCK_Sound1_H) */

/* [] END OF FILE */
