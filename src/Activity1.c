#define F_CPU 1600000UL
#include <avr/io.h> // This contains the definitions of the terms used
#include <util/delay.h>


int Activity1()
{
DDRB &= ~(1 << PINB4);
DDRB &= ~(1 << PINB5);
DDRD = 0b00000100; // Port D2 (Pin 4 in the ATmega) made output
PORTD = 0b00000000; // Turn LED off
return 0;
}
