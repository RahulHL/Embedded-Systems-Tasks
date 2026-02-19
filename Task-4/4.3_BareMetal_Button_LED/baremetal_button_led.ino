#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB |= (1<<DDB0);     // PB0 as output (LED)

    DDRD &= ~(1<<DDD2);    // PD2 as input (button)
    PORTD |= (1<<PORTD2);  // enable internal pull-up

    while(1)
    {
        int data = (PIND & (1<<PIND2)) >> PIND2;

        if (data)                 // button pressed (LOW)
        {
            PORTB |= (1<<PORTB0); // LED ON
        }
        else                       // button released (HIGH)
        {
            PORTB &= ~(1<<PORTB0);// LED OFF
        }
    }
}
