#include <avr/io.h>
#include <util/delay.h>

#define BLINK_DELAY_MS  5000

int main (void)
{
    /*  set pin 25 of PORTB for output*/
    DDRB |= _BV(DDB5);
    while(1) {
        /*  set pin 25 high to turn led on  */
        PORTB |= _BV(PORTB5);
        _delay_ms(BLINK_DELAY_MS);
        /*  set pin 25 low to turn led off */
        PORTB   &=  ~_BV(PORTB5);
        _delay_ms(BLINK_DELAY_MS);
    }
}
