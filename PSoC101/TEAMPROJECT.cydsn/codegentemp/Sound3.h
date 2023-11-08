/*******************************************************************************
* File Name: Sound3.h
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

#if !defined(CY_CLOCK_Sound3_H)
#define CY_CLOCK_Sound3_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
*        Function Prototypes
***************************************/
#if defined CYREG_PERI_DIV_CMD

void Sound3_StartEx(uint32 alignClkDiv);
#define Sound3_Start() \
    Sound3_StartEx(Sound3__PA_DIV_ID)

#else

void Sound3_Start(void);

#endif/* CYREG_PERI_DIV_CMD */

void Sound3_Stop(void);

void Sound3_SetFractionalDividerRegister(uint16 clkDivider, uint8 clkFractional);

uint16 Sound3_GetDividerRegister(void);
uint8  Sound3_GetFractionalDividerRegister(void);

#define Sound3_Enable()                         Sound3_Start()
#define Sound3_Disable()                        Sound3_Stop()
#define Sound3_SetDividerRegister(clkDivider, reset)  \
    Sound3_SetFractionalDividerRegister((clkDivider), 0u)
#define Sound3_SetDivider(clkDivider)           Sound3_SetDividerRegister((clkDivider), 1u)
#define Sound3_SetDividerValue(clkDivider)      Sound3_SetDividerRegister((clkDivider) - 1u, 1u)


/***************************************
*             Registers
***************************************/
#if defined CYREG_PERI_DIV_CMD

#define Sound3_DIV_ID     Sound3__DIV_ID

#define Sound3_CMD_REG    (*(reg32 *)CYREG_PERI_DIV_CMD)
#define Sound3_CTRL_REG   (*(reg32 *)Sound3__CTRL_REGISTER)
#define Sound3_DIV_REG    (*(reg32 *)Sound3__DIV_REGISTER)

#define Sound3_CMD_DIV_SHIFT          (0u)
#define Sound3_CMD_PA_DIV_SHIFT       (8u)
#define Sound3_CMD_DISABLE_SHIFT      (30u)
#define Sound3_CMD_ENABLE_SHIFT       (31u)

#define Sound3_CMD_DISABLE_MASK       ((uint32)((uint32)1u << Sound3_CMD_DISABLE_SHIFT))
#define Sound3_CMD_ENABLE_MASK        ((uint32)((uint32)1u << Sound3_CMD_ENABLE_SHIFT))

#define Sound3_DIV_FRAC_MASK  (0x000000F8u)
#define Sound3_DIV_FRAC_SHIFT (3u)
#define Sound3_DIV_INT_MASK   (0xFFFFFF00u)
#define Sound3_DIV_INT_SHIFT  (8u)

#else 

#define Sound3_DIV_REG        (*(reg32 *)Sound3__REGISTER)
#define Sound3_ENABLE_REG     Sound3_DIV_REG
#define Sound3_DIV_FRAC_MASK  Sound3__FRAC_MASK
#define Sound3_DIV_FRAC_SHIFT (16u)
#define Sound3_DIV_INT_MASK   Sound3__DIVIDER_MASK
#define Sound3_DIV_INT_SHIFT  (0u)

#endif/* CYREG_PERI_DIV_CMD */

#endif /* !defined(CY_CLOCK_Sound3_H) */

/* [] END OF FILE */
