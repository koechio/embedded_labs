
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    
    DDRB = 0b11111111; //Enable output from pb0 - pb7

    while (1) {
        PORTB = 0b00000001;// set pb0 to high/ turn led off
        _delay_ms(500);// 3. Wait for 500 milliseconds
        PORTB = 0b00000000;// turn led off
        _delay_ms(500);
    }

    return 0; 
}