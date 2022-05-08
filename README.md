# ALS-PT19 vs Photo Transistor
> I was curios about using Light Sensors in projects and
> I wanted to see the difference between the two.


## Table of Contents
* [General Info](#general-information)
* [Technologies Used](#technologies-used)
* [Features](#features)
* [Screenshots](#screenshots)
* [Setup](#setup)
* [Usage](#usage)
* [Project Status](#project-status)
* [Acknowledgements](#acknowledgements)


## General Information
- I thought it might be cool to add a light sensors to a project.
- Couldn't decide which one to get, so I got these 2.
- So here is a way to see how they both react to the same envirnment.


## Technologies Used
- [Adruino 1.8.19](https://www.arduino.cc/en/software)
- [TFT_eSPI](https://github.com/Bodmer/TFT_eSPI)
- [ALS-PT19](https://www.adafruit.com/product/2748)
- [Photo Transister](https://www.adafruit.com/product/2831)


## Features
List the ready features here:
- It shows the Analog Voltage of both sensors (0-4095)
- Converts ADC to Voltage


## Screenshots
-None yet.


## Setup
Straight from Adafruit:
**ALS-PT19**
"It's a pretty simple sensor - connect - to ground, + to 2.5V-5.5V or so to power it. Now measure the analog voltage on the OUT pin. That's it! The voltage will increase when the sensor detects more light."

**Photo Transistor**
"To use, connect the pin connected to the 'thicker' part of the sensor (longer pin) to 3-15VDC or so, and the thinner-part (shorter) pin through a ~1K-10K series resistor to ground. When it's dark, there's almost no current flowing through the sensor or resistor and the analog voltage is near ground. When there's light near the sensor, the current through the resistor will increase, raising the voltage. You can adjust the series resistor to get the voltage range you need and measure the analog voltage with a microcontroller."


## Usage
Now you should be able to seee the difference between the two sensors, and be able
to make a better decision for which one will work best for you.


## Project Status
Project is: _complete_


## Acknowledgements
- Got the README template from [ritaly](https://github.com/ritaly/README-cheatsheet).
