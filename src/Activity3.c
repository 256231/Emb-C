#define F_CPU 1600000UL
#include <avr/io.h>
#include <util/delay.h>

int Activity3(void)
{
    TCCR0A |= (1 << COM0A1)|(1 << WGM00)|(1 << WGM01);

    TCCR0B |= (1 << CS01)|(1 << CS00);

    DDRD|=(1<<PD6);
return 0;
}