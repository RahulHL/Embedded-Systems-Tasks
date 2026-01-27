# Task 2.4 – Emergency Stop Interrupt

## Objective
To implement an emergency stop system using an external interrupt that
immediately turns OFF all LEDs and halts system operation until reset.

## Components Required
- Arduino UNO
- 3 LEDs
- Push button (Emergency stop)
- 220Ω resistors
- 10kΩ resistor
- Breadboard
- Jumper wires

## Description
In this experiment, three LEDs blink continuously during normal operation.
A push button connected to an external interrupt pin acts as an emergency stop.
When the interrupt occurs, all LEDs are turned OFF immediately and the system
is halted permanently until a hardware reset is performed.

## Output
LEDs blink during normal operation. On emergency button press, all LEDs turn
OFF instantly and remain OFF until reset.
