/*******************************************************************************
* File Name: PSOC_Pin.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_PSOC_Pin_ALIASES_H) /* Pins PSOC_Pin_ALIASES_H */
#define CY_PINS_PSOC_Pin_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define PSOC_Pin_0			(PSOC_Pin__0__PC)
#define PSOC_Pin_0_PS		(PSOC_Pin__0__PS)
#define PSOC_Pin_0_PC		(PSOC_Pin__0__PC)
#define PSOC_Pin_0_DR		(PSOC_Pin__0__DR)
#define PSOC_Pin_0_SHIFT	(PSOC_Pin__0__SHIFT)
#define PSOC_Pin_0_INTR	((uint16)((uint16)0x0003u << (PSOC_Pin__0__SHIFT*2u)))

#define PSOC_Pin_INTR_ALL	 ((uint16)(PSOC_Pin_0_INTR))


#endif /* End Pins PSOC_Pin_ALIASES_H */


/* [] END OF FILE */
