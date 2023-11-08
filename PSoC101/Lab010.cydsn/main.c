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

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    uint8 button1=0;
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    CapSense_Start();
    CapSense_ScanAllWidgets();
    for(;;)
    {
        if(!CapSense_IsBusy()){
            CapSense_ProcessAllWidgets();
            button1=CapSense_IsWidgetActive(CapSense_BUTTON0_WDGT_ID);
            CapSense_ScanAllWidgets();
            
        }
        led_Write(button1);
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
