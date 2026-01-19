#ifndef my_usart// header guard to prevent double inclusion
#define my_usart// no dots allowed in macro names
#ifndef BAUD
#define BAUD 9600
#endif
#include <avr/io.h>
#include <stdint.h>
#ifndef F_CPU
#define F_CPU 8000000UL
#endif


void initUSART(void);//initializes usart by writing to UBRR0H and UBRR0L
void transmitByte(uint8_t data);
#endif