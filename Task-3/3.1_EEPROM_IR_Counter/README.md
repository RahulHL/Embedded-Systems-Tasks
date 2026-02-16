# Task 3.1 – EEPROM Persistent Counter using IR Sensor

## Objective
To store and retrieve a detection count using EEPROM so that the value
persists even after power loss.

## Components Required
- Arduino UNO
- IR sensor module
- LED (optional indicator)
- Breadboard
- Jumper wires

## Description
The IR sensor detects objects and increments a counter. The counter value
is stored in EEPROM so that even after the microcontroller is powered off,
the value is retained. When powered ON again, the counter resumes from the
last stored value.

## Output
The object count continues from the previous value even after reset or power loss.
