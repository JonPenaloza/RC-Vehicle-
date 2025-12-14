/*
 * @file main.c
 *
 *
 *
 * @author Jonathan Penaloza
 */

#include "TM4C123GH6PM.h"
#include "SysTick_Delay.h"
#include "PWM0_0.h"
#include "PWM_Clock.h"
#include "PWM2_2.h"
#include "UART0.h"
#include "Ultra_Sonic.h"
#include "Buzzer.h"

char command;

int main(void)
{
    // Initialize your peripherals
    SysTick_Delay_Init();      // For blocking delays
    PWM_Clock_Init();          // Initialize PWM clock
    PWM0_0_Init(62500, 31250); // Initialize motor 1 PWM
    PWM2_2_Init(62500, 0);     // Initialize motor 2 PWM
    UART0_Init();               // Initialize UART0 for Tera Term
    Ultrasonic_Init();          // Optional: ultrasonic sensor

	
    UART0_Output_String("RC Ready to Control \r\n");
    PWM0_0_Stop();

while(1)
{
			//Ultrasonic_ReadPulse();
	uint32_t distance = Ultrasonic_ReadDistanceCM();  //read distance
        if(distance >= 1 && distance < 10)   // if distnce is betweeen 1cm-10cm, dont move vehicle
        {
            PWM0_0_Stop();
            UART0_Output_String("Motion Detected \r\n");
             
        }


        if(UART0_Available())     // Only read if character exists
        {
            command = UART0_Input_Character();
            UART0_Output_Character(command);
            UART0_Output_String("\r\n");
	

    if(command == 'A')
    {
			while(Ultrasonic_ReadDistanceCM() > 10)
			{
        PWM0_0_Forward();
        UART0_Output_String("Motor in Drive \r\n");
			}
			
} 
    else if(command == 'B')
    {
        PWM0_0_Reverse();
        UART0_Output_String("Reverse \r\n");
    }
    else if(command == ' ')
    {
        PWM0_0_Stop();
        UART0_Output_String("Motor Stoped \r\n");
    }
		else if(command == 'D')
		{
			PWM2_2_Update_Duty_Cycle(1500);
			UART0_Output_String("Turning Left\r\n");
		}
		else if(command == 'm')
		{
			PWM2_2_Update_Duty_Cycle(4688);
			UART0_Output_String("Steering in the Middle \r\n");
		}
		else if(command == 'C')
		{
			PWM2_2_Update_Duty_Cycle(7812);
			UART0_Output_String("Turning Right \r\n");
	}
 }
}
}
//		else if (command == 'A')
//		{
//			 uint32_t distance = Ultrasonic_ReadDistanceCM();

//        if(distance < 10)       // Stop if object < 10 cm
//        {
//            PWM0_0_Update_Duty_Cycle(0); // stop motor
//        }
//			
//		}
//	
//	}