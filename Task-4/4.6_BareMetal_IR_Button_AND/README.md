# Task 4.6 – Bare Metal IR Sensor and Push Button Control

## Objective
To turn ON an LED only when an IR sensor detects an object and a push button
is pressed at the same time using direct register manipulation.

## Pin Mapping (ATmega328P)
- IR Sensor → PD5 (Arduino D5)
- Push Button → PD6 (Arduino D6)
- LED → PB3 (Arduino D11)

## Description
This experiment demonstrates logical AND operation using register-level
programming. The LED is turned ON only when both input conditions are
simultaneously active. No Arduino functions are used.
