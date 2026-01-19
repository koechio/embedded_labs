#include <avr/io.h>
#include "my_usart.h"
#include <util/delay.h>
#include <avr/power.h>
int main(void) {
    initUSART(); // Initialize USART communication
    DDRB = 0xff; // Set PORTB as output
for (uint8_t i = 0; i < 8; i++) {
  _delay_ms(2000); // Wait for 2 seconds
    transmitByte('U'); // Sends 8 numbers in a row
    PORTB = (1 << i); // Light up one LED at a time`
    _delay_ms(4000); // Wait for 2 seconds
};
return 0;
}