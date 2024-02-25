#include "stdint.h"

const char a=2; 
int s=22; 
int s1=0xfffffff; 
int s2=24; 
int s3=0x222ffff; 
struct aaaa
{
    int f;

};
struct aaaa test_struct[20];

#define RCC_AHB1ENR  *((unsigned int*)0x40023830)
#define GPIOD_MODER  *((unsigned int*)0x40020C00)
#define GPIOD_ODR    *((unsigned int*)0x40020C14)

#define LED_GREEN  (1U << 12)   // LED Green on PD12
#define LED_ORANGE (1U << 13)   // LED Orange on PD13
#define LED_RED    (1U << 14)   // LED Red on PD14
#define LED_BLUE   (1U << 15)   // LED Blue on PD15

void delay(int delay_time);

int main(void)
{
    RCC_AHB1ENR |= (1U << 3);  // Enable clock for GPIOD
    GPIOD_MODER |= (0x55 << 24); // Set PD12-PD15 to output mode

    while(1)
    {
        GPIOD_ODR ^= (LED_GREEN | LED_ORANGE | LED_RED | LED_BLUE); // Toggle LEDs
        delay(1000000);
    }
}

void delay(int delay_time)
{
    for(int i=0; i<delay_time; i++);
}
