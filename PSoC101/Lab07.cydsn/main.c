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
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
   
    for(;;)
    {
        Control_Reg_1_Write(1);
        CyDelay(2000);
        /* Place your application code here. */
        Control_Reg_1_Write(0);
        CyDelay(2000);
    }
}

/* [] END OF FILE */
