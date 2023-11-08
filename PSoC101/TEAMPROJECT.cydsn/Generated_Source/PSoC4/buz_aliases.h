/*******************************************************************************
* File Name: buz.h  
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

#if !defined(CY_PINS_buz_ALIASES_H) /* Pins buz_ALIASES_H */
#define CY_PINS_buz_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define buz_0			(buz__0__PC)
#define buz_0_PS		(buz__0__PS)
#define buz_0_PC		(buz__0__PC)
#define buz_0_DR		(buz__0__DR)
#define buz_0_SHIFT	(buz__0__SHIFT)
#define buz_0_INTR	((uint16)((uint16)0x0003u << (buz__0__SHIFT*2u)))

#define buz_INTR_ALL	 ((uint16)(buz_0_INTR))


#endif /* End Pins buz_ALIASES_H */


/* [] END OF FILE */
