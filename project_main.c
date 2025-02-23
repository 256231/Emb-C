/**
 * @file project_main.c
 * @author Y Swathi ()
 * @brief A heat controller system which detects passenger occupancy, status of heater and Temperature 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#define F_CPU 1600000UL
#include <avr/io.h>
#include<util/delay.h>
#include "Act1header.h" 
#include "Act2header.h" 
#include "Act3header.h" 
#include "Act4header.h" 

/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note PORTB4 & PORTB5 used as Passenger occupancy state and heater state. LED turns ON only when both are HIGH.
 */

int main(void)
{

InitADC();
uint16_t temp;  //variable to read ADC values

Activity1();    //calls functions & macros under Activity 1
Activity3();    //Macros defined under Activity 3

USARTInit(103);
int i;
while(1)
{  
	 if((PINB & (1 << PINB4))&& (PINB & (1 << PINB5)))
	 {
    PORTD = 0b00000100; //Turn LED on if passenger occupied and turned ON the heater
_delay_ms(200);         // delay of 200 milliseconds
}

     else
     {
    PORTD = 0b00000000; //Turn LED off if either or neither of conditions satisfied
    _delay_ms(200); 
}
if((PINB & (1 << PINB4))&& (PINB & (1 << PINB5)))
{  
     /* if Passenger has occupied the seat and 
       switched ON the heater */

     temp=ReadADC(0);   //variable temp reads values at ADC of potentiometer values
    _delay_ms(200);

    if(temp<=200)
     { 
         /*PWM wave generated with 20% duty cycle if ADC value
	 is between 0 and 200 as temperature is 20°C*/

    OCR0A = 51;
     _delay_ms(2000);
     unsigned char op1[]="Temperature is 20°C\n";
        i=0;
        while(op1[i]!=0)
        {
            USARTWriteChar(op1[i]);
            i++;
        }

}
     else if(temp>=210&&temp<=500)
     { 
         /*PWM wave generated with 40% duty cycle if ADC value
	 is between 210 and 500 as temperature is 25°C*/

    OCR0A = 102;
     _delay_ms(2000);
     unsigned char op2[]="Temperature is 25°C\n";
        i=0;
        while(op2[i]!=0)
        {
            USARTWriteChar(op2[i]);
            i++;
        }
}

     else if(temp>=510&&temp<=700)
     { 
         /*PWM wave generated with 70% duty cycle if ADC value
	 is between 510 and 710 as temperature is 29°C**/

    OCR0A = 178;
     _delay_ms(2000);
     unsigned char op3[]="Temperature is 29°C\n";
        i=0;
        while(op3[i]!=0)
        {
            USARTWriteChar(op3[i]);
            i++;
        }
}

     else
     { 
         /*PWM wave generated with 95% duty cycle if ADC value
	 is between 710 and 1023 as temperature is 33°C**/

    OCR0A = 242;
     _delay_ms(2000);
        unsigned char op4[]="Temperature is 33°C\n";
        i=0;
        while(op4[i]!=0)
        {
            USARTWriteChar(op4[i]);
            i++;
        }
    }
}
}
    return 0;
}