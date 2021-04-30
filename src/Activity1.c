
#define F_CPU 1600000UL
#include <avr/io.h>      // This contains the definitions of the terms used
#include <util/delay.h>  //This contains delay function definitions


int Activity1()
{
DDRB &= ~(1 << PINB4); // output pin for Passenger occupancy
DDRB &= ~(1 << PINB5); // output pin for state of Heat controller (ON or OFF)
DDRD = 0b00000100;     // Port D2 (Pin 4 in the ATmega) made output for LED
PORTD = 0b00000000;    // Turn LED off initially
return 0;
}
