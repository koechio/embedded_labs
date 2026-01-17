
MCU    = atmega8
F_CPU  = 1000000
TARGET = main


CC      = avr-gcc
OBJCOPY = avr-objcopy
SIZE    = avr-size
AVRDUDE = avrdude


PROGRAMMER = usbtiny

all:
	$(CC) -std=c99 -Wall -Os -mmcu=$(MCU) -DF_CPU=$(F_CPU) -o $(TARGET).elf $(TARGET).c
	$(OBJCOPY) -O ihex $(TARGET).elf $(TARGET).hex
	$(SIZE) $(TARGET).elf

clean:
	rm -f *.elf *.hex

flash: all
	$(AVRDUDE) -c $(PROGRAMMER) -p $(MCU) -v -U flash:w:$(TARGET).hex:i