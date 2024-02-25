CC=arm-none-eabi-gcc
MACH=cortex-m4
CFLAGS= -c -mcpu=$(MACH) -mthumb -std=gnu11 -Wall -o0
LDFLAG= -nostdlib -T stm32f411.ld -Wl,-Map=final.map

all: main.o stm32f411_starup.o final.elf hex
main.o:main.c
	$(CC) $(CFLAGS) -o $@ $^
stm32f411_starup.o:stm32f411_starup.c
	$(CC) $(CFLAGS) -o $@ $^
final.elf: main.o stm32f411_starup.o
	$(CC) $(LDFLAG) -o $@ $^
clean:
	rm -rf *.o *.elf *.hex
hex:
	arm-none-eabi-objcopy -O ihex final.elf final.hex
load:
	openocd -f board/stm32f4discovery.cfg