// Task 4.5 Bare Metal LED State Memory

#include <avr/io.h>

int main(void)
{
    // LED (PB2) as OUTPUT
    DDRB |= (1 << PB2);

    // Button (PD4) as INPUT
    DDRD &= ~(1 << PD4);

    // Enable internal pull-up resistor
    PORTD |= (1 << PD4);

    uint8_t lastButtonState = 1;   // Default HIGH due to pull-up
    uint8_t ledState = 0;          // LED initially OFF

    while (1)
    {
        uint8_t currentButtonState = (PIND & (1 << PD4)) ? 1 : 0;

        // Detect button press (falling edge)
        if (lastButtonState == 1 && currentButtonState == 0)
        {
            ledState ^= 1;   // Toggle LED state

            if (ledState)
                PORTB |= (1 << PB2);
            else
                PORTB &= ~(1 << PB2);
        }

        lastButtonState = currentButtonState;
    }
}