/**
 * @file Act2header.h
 * @author Y Swathi ()
 * @brief A heat controller system which detects passenger occupancy, status of heater and Temperature 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef ACT2HEADER_H_INCLUDED
#define ACT2HEADER_H_INCLUDED

void InitADC();
uint16_t ReadADC(uint8_t);

#endif // ACT2HEADER_H_INCLUDED
