Introduction

ECE 425 Mircoproccesor Systems

Created by:
* Jonathan Penaloza 
* Ricardo Zaragoza

Professor:

Aaron Nanas

The first thing I had to do was buy a toy car. The bottome components had to be removed 
in order to create my own suspension. I needed to first create the suspension and place 
the tires in a proper form. Once the car was built the coding process began. 

Project Descrpition
The RC Vehicle was created using the built in UART of TM4C123GH6PM. With the UART
the vehicle was able to respond commands using the arrows on the keyboard and stop
using spacebar. 
    * The UART baudrate was configured at 115200 bits per second
    * The TT motors were sharring one PWM with a duty cycle of 50%. 
      The signal was connected to a motor driver allowed more power
      to the tt motor.
    * The servo motor was used for steering.
    * The ultra sonic sensor was confiugred to stop once it reached 10 cm.

Block Diagram
<img width="2448" height="2096" alt="image" src="https://github.com/user-attachments/assets/4d58373c-ed22-4063-b194-a47885ae2cad" />



    
