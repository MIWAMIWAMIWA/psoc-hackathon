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
#include "project.h"
#define POT_CHAN (0)
#define WRITABLE (0)
int main(void)
{
    int16 counts=0;
    int16 mVolts=0;
    uint8 i2cReg[2];
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    ADC_Start();
    ADC_StartConvert();
    LCD_Start();
    EZI2C_Start();
    EZI2C_EzI2CSetBuffer1(sizeof(i2cReg),WRITABLE,i2cReg);
    for(;;)
    {
        /* Place your application code here. */
        counts= ADC_GetResult16(POT_CHAN);
        mVolts= ADC_CountsTo_mVolts(POT_CHAN,counts);
        LCD_Position(0,0);
        LCD_PrintNumber(mVolts);
        LCD_PrintString("mV   ");
        i2cReg[0]=HI8(mVolts);
        i2cReg[1]=LO8(mVolts);
    }
}

/* [] END OF FILE */
