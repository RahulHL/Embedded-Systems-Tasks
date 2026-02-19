# Task 4.2 – Bare Metal IR Sensor LED Detection

## Objective
To read an IR sensor using direct register access and blink an LED
connected to D13 when an object is detected.

## Pin Mapping (ATmega328P)
- IR Sensor → PD7 (Arduino D7)
- LED → PB5 (Arduino D13)

## Description
This experiment demonstrates bare-metal input reading using the PIN
register. When the IR sensor detects an object, the LED connected to
PORTB5 blinks continuously.
