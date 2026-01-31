#include <avr/io.h>
#include "my_usart.h"
#include <util/delay.h>
#include <avr/power.h>
int main(void) {
    initUSART(); // Initialize USART communication
    
while(1){
    _delay_ms(5000);
    DDRB = 1;
    PORTB = 1;
transmitByte('U'); //sends letter u
uint8_t data = receiveByte();
DDRB = data;
PORTB = data;
}
return 0;
}