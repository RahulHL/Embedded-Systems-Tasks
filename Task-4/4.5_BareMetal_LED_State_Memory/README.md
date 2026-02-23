# Task 4.5 – Bare Metal LED State Memory Using Push Button

## Objective
To toggle an LED using a push button such that the LED retains its state
until the next valid button press.

## Pin Mapping (ATmega328P)
- LED → PB2 (Arduino D10)
- Push Button → PD4 (Arduino D4)

## Description
The LED changes its state only on a valid button press (edge detection).
Holding the button does not cause repeated toggling. The LED retains its
state until another valid press occurs.
