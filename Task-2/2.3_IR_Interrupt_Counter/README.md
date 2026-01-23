# Task 2.3 – IR Sensor Interrupt Counter

## Objective
To count the number of times an object is detected using an IR sensor connected
to an external interrupt pin and blink an LED for every 5 detections.

## Components Required
- Arduino UNO
- IR sensor module
- LED
- 220Ω resistor
- Breadboard
- Jumper wires

## Description
In this experiment, an IR sensor is connected to an external interrupt pin.
Each object detection generates an interrupt and increments a counter inside
the ISR. Whenever the count reaches a multiple of five, an LED is blinked.
The main loop does not detect events and is used only to display or utilize
the counter value.

## Output
The counter increments for each object detected and the LED blinks once for
every five detections.
