# Stepper Motor Driver DM542T Connection to Arduino

This repository contains instructions and sample code for connecting and controlling a stepper motor using the DM542T driver with an Arduino. Stepper motors are commonly used in various projects, and this guide will help you get started with the DM542T driver.

## Table of Contents

- [Prerequisites](#prerequisites)
- [Hardware Setup](#hardware-setup)
- [Arduino Code](#arduino-code)
- [Usage](#usage)
- [License](#license)

## Prerequisites

Before you get started, ensure you have the following components ready:

- Arduino board (e.g., Arduino Uno, Arduino Mega)
- DM542T Stepper Motor Driver
- Bipolar stepper motor
- Power supply for the stepper motor
- Jumper wires
- USB cable for connecting Arduino to your computer

## Hardware Setup

1. **Connect Power Supply to DM542T**:
   - Connect the power supply to the DM542T driver. Ensure the voltage and current ratings match the specifications of your stepper motor. The driver typically operates between 20V and 50V, depending on your motor.

2. **Connect DM542T to Stepper Motor**:
   - Connect the four wires of your stepper motor to the four terminals of the DM542T driver. The order of connection might differ depending on your motor's wiring (e.g., A+, A-, B+, B-).

3. **Connect DM542T to Arduino**:
   - Connect the following pins on the DM542T to your Arduino:
     - Step (PUL) - Connect to a digital pin on the Arduino (e.g., D2).
     - Direction (DIR) - Connect to a digital pin on the Arduino (e.g., D3).
     - Enable (ENA) - Connect to a digital pin on the Arduino (e.g., D4).
     - Ground (GND) - Connect to the Arduino's ground (GND).
     - 5V (VCC) - Connect to the Arduino's 5V output.

4. **Power Up the System**:
   - Connect your Arduino to your computer using a USB cable.
   - Power up the DM542T driver and stepper motor with the appropriate power supply.

## Arduino Code

In this repository, you'll find the Arduino sketch (`stepper_control.ino`) that you can upload to your Arduino. This code will control the stepper motor's movement.


Upload the code **main.cpp** to your Arduino, and your stepper motor should start moving according to your instructions.

## Usage

1. Upload the provided Arduino code to your Arduino board.
2. Power up the system by connecting the power supply to the DM542T and connecting the Arduino to your computer.
3. Your stepper motor should start moving based on the code's instructions.

Feel free to modify the code to suit your specific project requirements, such as controlling the speed and direction of the motor.
