# Task 2.5 – Pin Change Interrupt (PCINT) Using PORTB

## Objective
To demonstrate the use of Pin Change Interrupts (PCINT) by using two push
buttons connected to the same port (PORTB) and toggling two LEDs based on
individual pin change events.

## Components Required
- Arduino UNO
- 2 Push buttons
- 2 LEDs
- 220Ω resistors
- 10kΩ resistors
- Breadboard
- Jumper wires

## Description
Unlike external interrupts (INTx), pin change interrupts are grouped by port.
Any change in the pin state within a port triggers a single interrupt.
Therefore, the previous and current states of the port must be compared to
identify which pin caused the interrupt.

In this experiment, Arduino pins D8 and D9 (PB0 and PB1) are configured as
PCINT inputs. Each button press toggles a corresponding LED.

## Output
Pressing Button 1 toggles LED 1.
Pressing Button 2 toggles LED 2.
