CC=arm-none-eabi-gcc
MACH=cortex-m4
CFLAGS= -c -mcpu=$(MACH) -mthumb -std=gnu11 -Wall -o0

all:main.o stm23f411_starup.o
main.o:main.c
	$(CC) $(CFLAGS) -o $@ $^
stm23f411_starup.o:stm23f411_starup.c
	$(CC) $(CFLAGS) -o $@ $^
