// Task 4.6 Bare Metal IR + Push Button AND Control

#include <avr/io.h>

int main(void)
{
    // LED (PB3) as OUTPUT
    DDRB |= (1 << PB3);

    // IR Sensor (PD5) as INPUT
    DDRD &= ~(1 << PD5);

    // Push Button (PD6) as INPUT
    DDRD &= ~(1 << PD6);

    // Enable internal pull-up resistors
    PORTD |= (1 << PD5);
    PORTD |= (1 << PD6);

    while (1)
    {
        uint8_t irState = (PIND & (1 << PD5)) ? 1 : 0;
        uint8_t buttonState = (PIND & (1 << PD6)) ? 1 : 0;

        // Both LOW → object detected AND button pressed
        if ((irState == 0) && (buttonState == 0))
        {
            PORTB |= (1 << PB3);   // LED ON
        }
        else
        {
            PORTB &= ~(1 << PB3);  // LED OFF
        }
    }
}