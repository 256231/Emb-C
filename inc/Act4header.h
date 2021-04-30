/**
 * @file Act4header.h
 * @author Y Swathi ()
 * @brief A heat controller system which detects passenger occupancy, status of heater and Temperature 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef ACT4HEADER_H_INCLUDED
#define ACT4HEADER_H_INCLUDED

void USARTInit(uint16_t);
char USARTReadChar();
void USARTWriteChar(char);

#endif // ACT4HEADER_H_INCLUDED