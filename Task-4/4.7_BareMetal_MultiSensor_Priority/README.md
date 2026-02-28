# Task 4.7 – Bare Metal Multi-Sensor Priority System

## Objective
To implement a priority-based control system using direct register access.
Flame detection has highest priority, followed by IR detection.

## Pin Mapping (ATmega328P)
- Flame Sensor → PD4 (Arduino D4)
- IR Sensor → PD5 (Arduino D5)
- LED → PB0 (Arduino D8)

## Description
This system demonstrates priority logic using bare-metal programming.
If flame is detected, the LED turns ON immediately.
If no flame is detected but IR detects an object, the LED blinks.
Otherwise, the LED remains OFF.
