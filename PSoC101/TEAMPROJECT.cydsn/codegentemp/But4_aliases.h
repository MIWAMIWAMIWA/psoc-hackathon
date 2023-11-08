/*******************************************************************************
* File Name: But4.h  
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

#if !defined(CY_PINS_But4_ALIASES_H) /* Pins But4_ALIASES_H */
#define CY_PINS_But4_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define But4_0			(But4__0__PC)
#define But4_0_PS		(But4__0__PS)
#define But4_0_PC		(But4__0__PC)
#define But4_0_DR		(But4__0__DR)
#define But4_0_SHIFT	(But4__0__SHIFT)
#define But4_0_INTR	((uint16)((uint16)0x0003u << (But4__0__SHIFT*2u)))

#define But4_INTR_ALL	 ((uint16)(But4_0_INTR))


#endif /* End Pins But4_ALIASES_H */


/* [] END OF FILE */
