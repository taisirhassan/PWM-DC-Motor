# PWM DC Motor Control Project

## Overview
This repository hosts the PWM (Pulse Width Modulation) DC Motor Control project, a comprehensive demonstration of controlling DC motors' speed and direction using an L239D H-bridge motor driver. The project integrates potentiometers for speed control, an LED for status indication, and slide switches for direction control of two DC motors.

## Project Description
The primary objective of this project is to showcase the effective use of PWM techniques in controlling the speed of DC motors. Utilizing the L239D H-bridge motor driver allows for precise control over motor direction and speed. Potentiometers provide a user-friendly interface for speed adjustment, while slide switches offer simple direction control. The inclusion of an LED serves as a visual indicator of the system status.

## Circuit Diagram
Below is the circuit diagram for the PWM DC Motor Control project:

![Taisir Hassan- PWM DC Motor Control](https://github.com/taisirhassan/PWM-DC-Motor/assets/85134103/7cb4b36e-9f5b-43e8-8afe-48d3ee0c742f)

## Components
- L239D H-bridge Motor Driver
- 2 x DC Motors
- 2 x Potentiometers (for speed control)
- 1 x LED (for status indication)
- Slide Switches (for direction control)
- Resistors
- Breadboard and Jumper Wires

## Code Structure
- `main.ino`: The main Arduino sketch that handles the PWM control logic for the DC motors. It includes code for reading potentiometer values, controlling the motor driver, and managing the LED status indicator.

## Setup and Installation
### Hardware Setup
1. **Assemble the Circuit**: Follow the circuit diagram to connect the L239D motor driver, DC motors, potentiometers, LED, and slide switches on a breadboard.
2. **Check Connections**: Ensure all components are securely connected and double-check their placement against the circuit diagram.

### Software Installation
1. **Arduino IDE**: Install the Arduino IDE on your computer, if not already done.
2. **Load the Sketch**: Open `main.ino` in the Arduino IDE.
3. **Upload to Arduino**: Connect the Arduino to your computer, choose the correct board and port in the IDE, and upload the sketch.

## Testing the Project
After uploading the code, test the motor control functionality by adjusting the potentiometers and observing changes in motor speed. Use the slide switches to change the direction of the motors. The LED should provide visual feedback correlating with the motor operation.

## License
This project is open-source and can be freely used and modified under the MIT License.
