/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>

/* LED constants for turning the RGB LED on and off */
#define LED_ON              (0xFFu)
#define LED_OFF             (0x00u)
    
/* Buffer and packet size */
#define BUFFER_SIZE         (0x05)
#define PACKET_SIZE         (0x04)

/* Indices of the RGB color control bytes, The first 3-bytes are writable to the
   LED while the 4th byte is a counter */
#define RED_INDEX           (0x00u)
#define GREEN_INDEX         (0x01u)
#define BLUE_INDEX          (0x02u)
#define ORANGE_INDEX        (0x03u)
#define COUNT_INDEX         (0x04u) 

/* Define the count index to be read only */
#define READ_ONLY_OFFSET    (3u)
    
    
/* The EZI2C slave buffer for Write and Read */
uint8 ezI2cBuffer[BUFFER_SIZE]; 

/*******************************************************************************
* Function Name: main
********************************************************************************
* 
* Summary:
*  This function:
*   1. Turns on the green LED.
*   2. Sets up the EZI2C Slave buffer.
*   3. Starts the EZI2C Slave Component.
*   4. Enables the global interrupts.
*   5. Waits for the command from the I2C master to control the RGB LED.
*
*******************************************************************************/
int main()
{
    //uint8 status = STS_CMD_FAIL;
    
    /* Initialize the PWM components */
    PWM_1_Start();
    PWM_2_Start();
    PWM_3_Start();
    PWM_4_Start();
    
    
    PWM_1_WriteCompare(LED_ON);
    PWM_2_WriteCompare(LED_OFF);
    PWM_3_WriteCompare(LED_OFF);
    PWM_4_WriteCompare(LED_OFF);
    
    /* Set up a buffer and start the EZI2C slave (SCB mode) */
    EZI2C_EzI2CSetBuffer1(BUFFER_SIZE, READ_ONLY_OFFSET, ezI2cBuffer);
    EZI2C_Start();

    /* Enable global interrupts */
    CyGlobalIntEnable;

    for(;;)
    {
        /* The Write is complete: parse the packet */
        if (0u != (EZI2C_EzI2CGetActivity() & EZI2C_EZI2C_STATUS_WRITE1))
        {
            /* Increment the number of writes */
            ezI2cBuffer[COUNT_INDEX]++;
            
            /* Update the PWM Compare values to control color and intensity */
            PWM_1_WriteCompare(ezI2cBuffer[GREEN_INDEX]);
            PWM_2_WriteCompare(ezI2cBuffer[BLUE_INDEX]);
            PWM_3_WriteCompare(ezI2cBuffer[RED_INDEX]);
            PWM_4_WriteCompare(ezI2cBuffer[ORANGE_INDEX]);
        }
    }
}


/* [] END OF FILE */


/* [] END OF FILE */
