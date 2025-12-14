/**
 * @file Buzzer.c
 *
 * @brief Source file for the PWM2_2 driver.
 *
 * This file contains the function definitions for the PWM0_0 driver.
 * It uses the Module 1 PWM Generator 0 to generate a PWM signal using the PB6 pin.
 *
 * @note This driver assumes that the system clock's frequency is 50 MHz.
 *
 * @note This driver assumes that the PWM_Clock_Init function has been called
 * before calling the PWM0_0_Init function.
 *
 * @author Jonathan Penaloza
 */
 
 #include "Buzzer.h"
 #include "GPIO.h"
 
 //Port PD0 
void Buzzer(void)
 {
	   GPIOD->DATA |= 0x01;      // Turn on buzzer
 }
 void Buzzer_Off(void)
 {
	 GPIOD->DATA &= ~0x01;
	 
 }
// Enable Port D	 
  // Enable Port D
   /* SYSCTL->RCGCGPIO |= 0x08;       // Port D clock
    GPIOD->DIR |= 0x01;             // PD0 output
    GPIOD->AFSEL &= ~0x01;          // GPIO function
    GPIOD->DEN |= 0x01;             // Digital enable

    // Beep the buzzer
    GPIOD->DATA |= 0x01;            // Turn on PD0
    SysTick_Delay1ms(1000);          // Delay ~300 ms
    GPIOD->DATA &= ~0x01;
	} */
 
	 
	 
 