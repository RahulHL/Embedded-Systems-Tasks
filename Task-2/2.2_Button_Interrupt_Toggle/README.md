# Task 2.2 – Button Interrupt Toggle with Debounce

## Objective
To toggle an LED using a push button connected to an external interrupt pin.
The LED state must change only when an interrupt occurs and button bouncing
must be handled without using delay().

## Components Required
- Arduino UNO
- Push button
- LED
- 220Ω resistor
- 10kΩ resistor
- Breadboard
- Jumper wires

## Description
In this experiment, a push button is connected to an external interrupt pin.
Each valid button press generates an interrupt that toggles the LED state.
Software debouncing is implemented using time-based logic to ensure one toggle
per press without using delay().

## Output
The LED toggles ON and OFF once for each valid button press.
