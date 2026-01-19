#ifndef my_usart.h // header guard to prevent double inclusion
#define my_usart.h
#include <avr/io.h>
#ifndef BAUD
#define BAUD 9600
#endif
#ifndef F_CPU
#define F_CPU 8000000UL
#endif
#endif

void initUSART(void);//initializes usart by writing to UBRR0H and UBRR0L