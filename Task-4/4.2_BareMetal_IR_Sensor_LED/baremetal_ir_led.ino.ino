#include<avr/io.h>
//#include<stdio.h>
#include <util/delay.h>


int main()
{
  DDRB|=(1<<DDB5);
  DDRD &= ~(1<<DDD7);
  PORTD |=(1<<PORTD7);

  while(1)
  {
    if(!(PIND & (1<<7))){
      PORTB |= (1<<PORTB5);
      _delay_ms(500);
    
    }
    else
     PORTB &= ~(1<<PORTB5);
    
  }
   
  
  
 
}