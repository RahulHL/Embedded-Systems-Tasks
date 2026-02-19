# Task 4.3 – Bare Metal Push Button Control

## Objective
To read a push button using direct register access and control an LED.

## Pin Mapping (ATmega328P)
- LED → PB0 (Arduino D8)
- Push Button → PD2 (Arduino D2)

## Description
The LED remains OFF normally. When the push button is pressed, the LED turns ON.
When the button is released, the LED turns OFF. This experiment uses direct
register manipulation (DDRx, PORTx, PINx) without Arduino functions.
