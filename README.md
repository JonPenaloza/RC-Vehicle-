## ECE 425 Microproccesor Systems

### Created by:
* Jonathan Penaloza 
* Ricardo Zaragoza

### Professor:

Aaron Nanas

## Introduction
The RC Vehicle project utilized the TM4C123GH6PM that had the ability to control using UART. The RC vehcile was able to responds through commands through comp port.

## Background and Methodology
The RC Vehicle utilized PWM, UART, and GPIO peripherals. With these peripherals, the page up arrow (^) was able to move the Rc forward, page down (V), RC car turn left using the servo (<), right (>), and space bar to stop the RC. TO revers the tires peripheral GPIO had to be utilized (PB6). Also, the ultra sonic sensor used GPIO using PC4 and PC5. 


## Project Descrpition
The RC Vehicle was created using the built in UART of TM4C123GH6PM. With the UART
the vehicle was able to respond commands using the arrows on the keyboard and stop
using spacebar. 
    * The UART baudrate was configured at 115200 bits per second
    * The TT motors were sharring one PWM with a duty cycle of 50%. 
      The signal was connected to a motor driver allowed more power
      to the tt motor.
    * The servo motor was used for steering.
    * The ultra sonic sensor was confiugred to stop once it reached 10 cm.

## Block Diagram

<img width="356" height="318" alt="image" src="https://github.com/user-attachments/assets/2f66535d-798f-4c8d-8f3a-e477250ecb29" />




## Components Used

| Description     | Quantity     | Manufacturer   |
|:---------       |:---------:   |-------:|
| Tiva C Series TM4C123G LaunchPad    | 1     | Texas Instrument|
| TT motor    | 2    | XINXXR |
| Servo Motor  | 1  | DORHEA|
| Stepper Motor | 1 | HiLetgo | 
| Ultra Sonic Sensor| 1| EPLZON  | 


## Pinout
|Power Supply |Servo Motor | Motor Driver| TT Motor| Ultra Sonic Sensor| UART|
| :-------    |:----------: |:---------: |:---------: |:--------: |:------:|
|             |  PB4        |  PB7       |    PB7     |  PC4      |  PA0   |
|             |             | PB6        | PB6        | PC5       | PA1    |
| 5 Volt      |             | 5 Volt     |            |           |        |
|Ground       |  Ground     | Ground     |   Ground   | Ground    |        |
| 3.3 Volts   |             |            |            | 3.3 Volts |        |



## Analysis and Results

Video Link of the RC Vehicle: https://youtube.com/shorts/zyG-7bO7Igw?si=W-LZePn87dspoViG 

![RC Vehicle](https://github.com/user-attachments/assets/8bc68034-513b-465c-aa87-8541679a223f)



There were a few issues when moving forward on the project. For instance, when wiring the output of the stepper motor, I was giving constant voltage on the tt motors and could not find the reson why it would ignore the code commands and rotate the tires constantly as soon as the board was resetted. After a while I found out that the stepper motor has individual pins where the tt motors pins should be placed. In addition, once the vehicle was almost complete, we could not figure out why the ultra sonic sensor was not reacting when an object was facing in front of it. We found out that the sensor should be connected the 3.3 volts instead of 5 volts. 

Due to time, the buzzer could not be completed. However, the pin was initialized. The buzzer was able to make up sound with an npn transisitor connected with a 1k reistor. 

    
