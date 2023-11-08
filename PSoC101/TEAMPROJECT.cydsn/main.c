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
#define INFO_INDEX        (0x00)
#define BUTTON_INDEX      (0x01)
#define SPEED_INDEX       (0x02)
//0x40 means that init will be 1 at start 
uint8 ezI2cBuffer[3]={0x40,0409

// input speed to buffer
void set_speed(uint8 x){
    ezI2cBuffer[SPEED_INDEX]=x;
}
// input buttons to buffer
void set_button(uint8 x){
    ezI2cBuffer[BUTTON_INDEX]=x;
   }

//getting led status from buffer
uint8 get_led_status(){
    return ezI2cBuffer[INFO_INDEX] & 15;
   
}
 //getting bit about pass status 
uint8 get_pass_status(){
    return ezI2cBuffer[INFO_INDEX] & 32;
}  
//getting bit about fail scene
uint8 get_fail_status(){
    return ezI2cBuffer[INFO_INDEX] & 16;
} 
//setting init to 0 which means starting the game
void make_init(){
    ezI2cBuffer[INFO_INDEX]=ezI2cBuffer[INFO_INDEX] & 191;
}
//ending the game by making bit init 1
void set_init(){
    ezI2cBuffer[INFO_INDEX]=128;
}

#define POT_CHAN (0)
int16 counts = 0;
int16 mVolts = 0; 
uint8 speed = 0;
//returning current speed and also displays on LCD  
  int speedf(){
  counts = ADC_GetResult16(POT_CHAN);
  mVolts = ADC_CountsTo_mVolts(POT_CHAN,counts);
            if (mVolts <= 5){
                speed = 1;
            }else if (mVolts > 5 && mVolts < 1000 ){
                speed = 2; 
            }else{
            speed = 4;}
        
 LCD_Position(0,0);
if (speed == 1){
    LCD_PrintString("SLOW");}
else if (speed == 2) {
    LCD_PrintString("MED");
}else {
    LCD_PrintString("FAST");}
    LCD_PrintString("    ");


    return speed;}
// getting status of currently pressed buttons
uint8 butPressed(void)
{
       uint8 but_status = 0;

        // button #1
        but_status = but_status | But1_Read();
        
        // button #2
        but_status = but_status | (But2_Read() << 0x01);
        
        // button #3
        but_status = but_status | (But3_Read() << 0x02);
        
        // button #4
        but_status = but_status | (But4_Read() << 0x03);
    //the buttons are inverted at hardware 
    return (~but_status) &0x0F;
}
int main(void)
{
   
    CyGlobalIntEnable; /* Enable global interrupts. */
    EZI2C_EzI2CSetBuffer1(3,3,ezI2cBuffer);
    
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    EZI2C_Start();
    ADC_Start();
    ADC_StartConvert();
    LCD_Start();
    make_init();
    for(;;){
     //setting speed to buffer
     set_speed(speedf());
    uint8 button_status=butPressed();
    //setting currently pressed buttons 
    set_button(button_status);
   
 
        if (0u != (EZI2C_EzI2CGetActivity() & EZI2C_EZI2C_STATUS_WRITE1))
        {
            //getting from master asked buttons 
          MasterReg_Write(get_led_status());
          
        }
        //if game lost
        if (get_fail_status()){
           for(int i =0;i<50;i++){
            MasterReg_Write(1);
        CyDelay(100);
        }
       set_init();
    MasterReg_Write(0);
        }
        //if game won
        if (get_pass_status()){
            for(int i =0;i<10;i++){
            MasterReg_Write(1);
       CyDelay(100);
       MasterReg_Write(2);
        CyDelay(100);
       MasterReg_Write(4);
        CyDelay(100);
       MasterReg_Write(8);
        CyDelay(100);
            }
        set_init();
        MasterReg_Write(0);
        }
        
       
        /* Place your application code here. */
    }
    
}

/* [] END OF FILE */
