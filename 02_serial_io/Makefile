
# Project Settings
MCU = atmega168
F_CPU = 5333333
BAUD = 9600
PROGRAMMER = usbtiny
TARGET = main
SOURCES = main.c my_usart.c

# Compiler and Tool Settings
CC = avr-gcc
OBJCOPY = avr-objcopy
CFLAGS = -std=c99 -Wall -Os -mmcu=$(MCU) -DF_CPU=$(F_CPU) -DBAUD=$(BAUD)

# Default target: compile everything
all: $(TARGET).hex

# Link and Compile
$(TARGET).elf: $(SOURCES)
	$(CC) $(CFLAGS) -o $(TARGET).elf $(SOURCES)

# Convert to Hex
$(TARGET).hex: $(TARGET).elf
	$(OBJCOPY) -j .text -j .data -O ihex $(TARGET).elf $(TARGET).hex

# Flash to the chip
# Note: For usbtiny, we use -p m168
flash: $(TARGET).hex
	avrdude -c $(PROGRAMMER) -p m168 -U flash:w:$(TARGET).hex:i

# Add this to check clock fuses
check_fuses:
	avrdude -c $(PROGRAMMER) -p m168 -v

clean:
	rm -f $(TARGET).elf $(TARGET).hex