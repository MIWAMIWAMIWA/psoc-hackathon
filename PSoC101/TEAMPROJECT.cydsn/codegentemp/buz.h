/*******************************************************************************
* File Name: buz.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_buz_H) /* Pins buz_H */
#define CY_PINS_buz_H

#include "cytypes.h"
#include "cyfitter.h"
#include "buz_aliases.h"


/***************************************
*     Data Struct Definitions
***************************************/

/**
* \addtogroup group_structures
* @{
*/
    
/* Structure for sleep mode support */
typedef struct
{
    uint32 pcState; /**< State of the port control register */
    uint32 sioState; /**< State of the SIO configuration */
    uint32 usbState; /**< State of the USBIO regulator */
} buz_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   buz_Read(void);
void    buz_Write(uint8 value);
uint8   buz_ReadDataReg(void);
#if defined(buz__PC) || (CY_PSOC4_4200L) 
    void    buz_SetDriveMode(uint8 mode);
#endif
void    buz_SetInterruptMode(uint16 position, uint16 mode);
uint8   buz_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void buz_Sleep(void); 
void buz_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(buz__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define buz_DRIVE_MODE_BITS        (3)
    #define buz_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - buz_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the buz_SetDriveMode() function.
         *  @{
         */
        #define buz_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define buz_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define buz_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define buz_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define buz_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define buz_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define buz_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define buz_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define buz_MASK               buz__MASK
#define buz_SHIFT              buz__SHIFT
#define buz_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in buz_SetInterruptMode() function.
     *  @{
     */
        #define buz_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define buz_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define buz_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define buz_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(buz__SIO)
    #define buz_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(buz__PC) && (CY_PSOC4_4200L)
    #define buz_USBIO_ENABLE               ((uint32)0x80000000u)
    #define buz_USBIO_DISABLE              ((uint32)(~buz_USBIO_ENABLE))
    #define buz_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define buz_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define buz_USBIO_ENTER_SLEEP          ((uint32)((1u << buz_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << buz_USBIO_SUSPEND_DEL_SHIFT)))
    #define buz_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << buz_USBIO_SUSPEND_SHIFT)))
    #define buz_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << buz_USBIO_SUSPEND_DEL_SHIFT)))
    #define buz_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(buz__PC)
    /* Port Configuration */
    #define buz_PC                 (* (reg32 *) buz__PC)
#endif
/* Pin State */
#define buz_PS                     (* (reg32 *) buz__PS)
/* Data Register */
#define buz_DR                     (* (reg32 *) buz__DR)
/* Input Buffer Disable Override */
#define buz_INP_DIS                (* (reg32 *) buz__PC2)

/* Interrupt configuration Registers */
#define buz_INTCFG                 (* (reg32 *) buz__INTCFG)
#define buz_INTSTAT                (* (reg32 *) buz__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define buz_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(buz__SIO)
    #define buz_SIO_REG            (* (reg32 *) buz__SIO)
#endif /* (buz__SIO_CFG) */

/* USBIO registers */
#if !defined(buz__PC) && (CY_PSOC4_4200L)
    #define buz_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define buz_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define buz_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define buz_DRIVE_MODE_SHIFT       (0x00u)
#define buz_DRIVE_MODE_MASK        (0x07u << buz_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins buz_H */


/* [] END OF FILE */
