/**
 * @file Buzzer.h
 *
 * @brief Header file for the PWM0_0 driver.
 *
 * This file contains the function definitions for the PWM0_0 driver.
 * It uses the Module 0 PWM Generator 0 to generate a PWM signal with the PB6 pin.
 *
 * @note This driver assumes that the system clock's frequency is 50 MHz.
 *
 * @note This driver assumes that the PWM_Clock_Init function has been called
 * before calling the PWM0_0_Init function.
 *
 * @author Jonathan Penaloza
 */
 #include "TM4C123GH6PM.h"

/**
 * @brief Initializes the PWM clock source.
 *
 * This function configures the PWM modules to use a divided PWM clock. 
 * It enables the PWM clock divisor using the RCC register and sets 
 * the divisor to divide the PWM clock frequency by 16.
 *
 * @param None
 *
 * @return None
 */
 void Buzzer(void);
 
 void Buzzer_Off(void);