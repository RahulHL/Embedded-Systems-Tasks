// Task 4.1 Bare Metal Blink - PB5 and PD7

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    // Set PB5 and PD7 as OUTPUT
    DDRB |= (1 << PB5);
    DDRD |= (1 << PD7);

    while (1)
    {
        // LEDs ON
        PORTB |= (1 << PB5);
        PORTD |= (1 << PD7);
        _delay_ms(500);

        // LEDs OFF
        PORTB &= ~(1 << PB5);
        PORTD &= ~(1 << PD7);
        _delay_ms(500);
    }
}
