#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    // -------- Configure LED (PB1) as OUTPUT --------
    DDRB |= (1 << PB1);

    // -------- Configure Button (PD3) as INPUT --------
    DDRD &= ~(1 << PD3);

    // Enable internal pull-up resistor on PD3
    PORTD |= (1 << PD3);

    uint8_t lastButtonState = 1;  // Button released (pull-up HIGH)

    while (1)
    {
        uint8_t currentButtonState = (PIND & (1 << PD3));

        // Detect falling edge (HIGH -> LOW)
        if (lastButtonState && !currentButtonState)
        {
            _delay_ms(200);  // Debounce

            // Toggle LED
            PORTB ^= (1 << PB1);
        }

        lastButtonState = currentButtonState;
    }
}