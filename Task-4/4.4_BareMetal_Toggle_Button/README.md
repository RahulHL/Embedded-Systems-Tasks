# Task 4.4 – Bare Metal Toggle LED Using Push Button

## Objective
To toggle an LED using a push button with direct register manipulation.
The LED should toggle only once per valid button press. Holding the
button must not cause repeated toggling.

## Pin Mapping (ATmega328P)
- LED → PB1 (Arduino D9)
- Push Button → PD3 (Arduino D3)

## Description
This experiment demonstrates edge detection using register-level
programming. The LED toggles state only when a new button press
is detected, preventing multiple toggles during a long press.
