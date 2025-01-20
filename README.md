# Group Project Repository Submission Template 
## Index
  - [Overview](#overview) 
  - [Challenge_#1](#Challenge_#1)
  - [Challenge_#2.1](#challenge_#2.1)
  - [Challenge_#2.2](#challenge_#2.2)
  - [Challenge_#2.3](#challenge_#2.3)
  - [Challenge_#3](#challenge_#3)
  - [Challenge_#4](#challenge_#4)
  - [Challenge_#5](#challenge_#5)
  - [Authors](#authors)
  - [References](#references)
  - [Credits](#credits)
<!--  Other options to write Readme
  - [Deployment](#deployment)
  - [Used or Referenced Projects](Used-or-Referenced-Projects)
-->

## Overview
<!-- Write Overview about this project -->
As part of this hardware course assignment, we were challenged to explore the fundamentals of Arduino-based design and programming. These challenges are designed to help us build essential skills in hardware interaction, reading digital and analog inputs, controlling outputs, and working with basic components such as buttons, LEDs, and potentiometers.


## Challenge_#1
<!-- Write Overview about this project -->
This exercise involves connecting a switch and an LED so that when you press the switch, the LED turns on, and when you release it, the LED turns off. A resistor is used to ensure the circuit works without errors

### Demostration
![1](https://github.com/user-attachments/assets/8c211296-3b89-459f-82c7-15ef5c2d5def)

## Challenge_#2.1
<!-- Write Overview about this project -->
The LED should light up when the button is not pressed and turn off when the button is pressed. This is achieved by changing the logic in the program (or circuit behavior) so the LED operates in reverse: it’s ON by default and turns OFF only when the button is activated.

### Demostration
![2 1](https://github.com/user-attachments/assets/e70150f1-393e-4a07-ac43-5000ae8c58d6)

## Challenge_#2.2
<!-- Write Overview about this project -->
The LED lights up when the button is pressed, but instead of turning off immediately after the button is released, it stays ON for 5 seconds. After 5 seconds, the LED automatically turns OFF. This involves adding a timer or delay in the logic to extend the LED's ON state.

### Demostration
![2 2](https://github.com/user-attachments/assets/d8919069-64d3-40f8-9aa9-7767759d5b97)

## Challenge_#2.3
<!-- Write Overview about this project -->
The button acts as a toggle switch: pressing it once turns the LED ON, and pressing it again turns the LED OFF. This requires logic that tracks the button presses and changes the LED state each time the button is pressed.

### Demostration
![2 3](https://github.com/user-attachments/assets/023798da-7f64-4310-a34e-3e614c6dbf20)

## Challenge_#3
<!-- Write Overview about this project -->
In this scenario, we add a second button and another LED:

Press Button1, and both LEDs turn ON and stay ON, even after releasing the button.
Press Button2, and both LEDs turn OFF.

A pull-up or pull-down resistor ensures the buttons work smoothly. Button1 turns the LEDs ON, and Button2 turns them OFF. Simple and effective!

### Demostration
![3](https://github.com/user-attachments/assets/c51bc9e8-43c6-49f1-8d28-981b510791a8)

## Challenge_#4
<!-- Write Overview about this project -->
In this scenario, a potentiometer is connected to the Arduino to control and observe its behavior:

As you turn the potentiometer knob, its values are read and displayed on the serial monitor.
You can also connect an LED and use PWM (Pulse Width Modulation) to adjust its brightness, making a simple dimmer.
The potentiometer acts as a controller, and the LED’s brightness changes smoothly based on the knob’s position. A great way to experiment with analog inputs and outputs!

### Demostration
![4 1](https://github.com/user-attachments/assets/872c4915-c852-4b34-901d-4f3229a2cf8f)
![4 2](https://github.com/user-attachments/assets/4b5c2d70-c615-47af-914a-45434486cdee)

## Challenge_#5
<!-- Write Overview about this project -->
In this exercise, we connected an ultrasonic sensor to a microcontroller (like an Arduino or Pico) to measure distances. Then, we set up three LEDs (green, yellow, and red) to turn on or off based on the distance measured by the sensor:

Distance greater than 1 meter: The green LED turns on.
Distance between 20 cm and 1 meter: The yellow LED turns on.
Distance less than 20 cm: The red LED turns on.
Additionally, we logged the distance measurements to a file to keep a record of the values. This helps us understand how the sensor works and visualize the information.

### Demostration
![09](https://github.com/user-attachments/assets/68ef5f56-1688-45e5-a77f-0eca129224ce)


## Authors
  - [Clarrainl](https://github.com/Clarrainl)
  - [mauweberla](https://github.com/Mauweberla)
  - [j-albo](https://github.com/j-albo)

## Credits
  - [maritaganta](https://github.com/maritaganta)
  - Pit

<!--  DO NOT REMOVE
-->
#### Acknowledgements

- Creation of GitHub template: [Marita Georganta](https://www.linkedin.com/in/marita-georganta/) - Robotic Sensing Expert
- Creation of MRAC-IAAC GitHub Structure: [Huanyu Li](https://www.linkedin.com/in/huanyu-li-457590268/) - Robotic Researcher


