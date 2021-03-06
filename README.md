# ALS-PT19 vs Photo Transistor
> I was curios about using Light Sensors in projects and I couldn't decide between these two.
> So I got both and I wanted to compare them against eachother.


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
- I thought it might be cool to add a light sensor to a project.
- Couldn't decide which one to get, so I got these two.
- So here is a way to see how they both react to the same environment.


## Technologies Used
**SOFTWARE**
- [Adruino 1.8.19](https://www.arduino.cc/en/software)
- [TFT_eSPI](https://github.com/Bodmer/TFT_eSPI)

**HARDWARE**
- [Lilygo TTGO T-Display](https://www.amazon.com/dp/B099MPFJ9M?psc=1&ref=ppx_yo2ov_dt_b_product_details)
- [ALS-PT19](https://www.adafruit.com/product/2748)
- [Photo Transister](https://www.adafruit.com/product/2831)
- [Through-Hole Resistors - 10K ohm](https://www.adafruit.com/product/2784)


## Features
List the ready features here:
- It shows the Analog Voltage of both sensors (0-4095)
- Converts ADC to Voltage (0.0 - 3.3)
- Added a meter option as well ([totally stole it](https://github.com/Bodmer/TFT_eSPI/tree/master/examples/160%20x%20128/TFT_Meter_5))


## Screenshots
![sensor1](https://user-images.githubusercontent.com/94538153/167410584-4eb5f419-e91d-496a-ba2b-2ce9a0b7f855.jpg)


## Setup
Straight from Adafruit:

**ALS-PT19**

"It's a pretty simple sensor - connect - to ground, + to 2.5V-5.5V or so to power it. Now measure the analog voltage on the OUT pin. That's it! The voltage will increase when the sensor detects more light."

**Photo Transistor**

"To use, connect the pin connected to the 'thicker' part of the sensor (longer pin) to 3-15VDC or so, and the thinner-part (shorter) pin through a ~1K-10K series resistor to ground. When it's dark, there's almost no current flowing through the sensor or resistor and the analog voltage is near ground. When there's light near the sensor, the current through the resistor will increase, raising the voltage. You can adjust the series resistor to get the voltage range you need and measure the analog voltage with a microcontroller." 

And there is a [Collin's Lab](https://youtu.be/5HKvRrVWgYs) video for it.


## Usage
Now you should be able to see the difference between the two sensors, and be able
to make a better decision for which one will work best for you.


## Project Status
Project is: _complete_

It looks like the Photo Transistor is more sensitive and more accurate for my needs. I do prefer the breakout board style of the ALS but it doesn't accurately represent the ambient light.


## Acknowledgements
- Got the README template from [ritaly](https://github.com/ritaly/README-cheatsheet).
- Got the Meter from Bodmer [TFT_eSPI examples](https://github.com/Bodmer/TFT_eSPI/tree/master/examples/160%20x%20128/TFT_Meter_5).
