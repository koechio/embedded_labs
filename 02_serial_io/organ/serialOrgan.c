#include <avr/io.h>
#include <util/delay.h>
#include "../my_usart.h"
#include "organ.h"
#include "pinDefines.h"

int main(void){
SPEAKER_DDR |= (1 << SPEAKER);// enable output from the pin to speaker
initUSART();// initialize USART
printString("Serial Organ ready");// Send Start message



}


