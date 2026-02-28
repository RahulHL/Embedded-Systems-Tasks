// Task 4.7 Bare Metal Multi-Sensor Priority System

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    // LED (PB0) as OUTPUT
    DDRB |= (1 << PB0);

    // Flame sensor (PD4) as INPUT
    DDRD &= ~(1 << PD4);

    // IR sensor (PD5) as INPUT
    DDRD &= ~(1 << PD5);

    // Enable internal pull-up resistors
    PORTD |= (1 << PD4);
    PORTD |= (1 << PD5);

    while (1)
    {
        uint8_t flameState = (PIND & (1 << PD4)) ? 1 : 0;
        uint8_t irState    = (PIND & (1 << PD5)) ? 1 : 0;

        // Priority 1: Flame detection
        if (flameState == 0)
        {
            PORTB |= (1 << PB0);   // LED ON immediately
        }

        // Priority 2: IR detection (only if no flame)
        else if (irState == 0)
        {
            PORTB |= (1 << PB0);
            _delay_ms(300);
            PORTB &= ~(1 << PB0);
            _delay_ms(300);
        }

        // No detection
        else
        {
            PORTB &= ~(1 << PB0);  // LED OFF
        }
    }
}