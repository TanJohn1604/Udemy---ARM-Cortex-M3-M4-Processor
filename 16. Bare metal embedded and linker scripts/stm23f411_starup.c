#include "stdint.h"

#define SRAM_SATRT 0X20000000
#define SRAM_SIZE (128U*1024)
#define SRAM_END ((SRAM_SATRT) + (SRAM_SIZE))
#define STACK_START SRAM_END



void Default_Handler(void);

void Reset_Handler();
void NMI_Handler() __attribute__((weak,alias("Default_Handler")));
void HardFault_Handler() __attribute__((weak,alias("Default_Handler")));
void MemManage_Handler() __attribute__((weak,alias("Default_Handler")));
void BusFault_Handler() __attribute__((weak,alias("Default_Handler")));
void UsageFault_Handler() __attribute__((weak,alias("Default_Handler")));
void SVC_Handler() __attribute__((weak,alias("Default_Handler")));
void DebugMon_Handler() __attribute__((weak,alias("Default_Handler")));
void PendSV_Handler() __attribute__((weak,alias("Default_Handler")));
void SysTick_Handler() __attribute__((weak,alias("Default_Handler")));
void WWDG_IRQHandler() __attribute__((weak,alias("Default_Handler")));              			/* Window Watchdog interrupt                                          */
void PVD_IRQHandler() __attribute__((weak,alias("Default_Handler")));               			/* EXTI Line 16 interrupt / PVD through EXTI                          */
void TAMP_STAMP_IRQHandler() __attribute__((weak,alias("Default_Handler")));        			/* Tamper and TimeStamp interrupts through                            */
void RTC_WKUP_IRQHandler() __attribute__((weak,alias("Default_Handler")));          			/* RTC Wakeup interrupt through the EXTI line                         */
void FLASH_IRQHandler() __attribute__((weak,alias("Default_Handler")));             			/* FLASH global interrupt                                             */
void RCC_IRQHandler() __attribute__((weak,alias("Default_Handler")));               			/* RCC global interrupt                                               */
void EXTI0_IRQHandler() __attribute__((weak,alias("Default_Handler")));             			/* EXTI Line0 interrupt                                               */
void EXTI1_IRQHandler() __attribute__((weak,alias("Default_Handler")));             			/* EXTI Line1 interrupt                                               */
void EXTI2_IRQHandler() __attribute__((weak,alias("Default_Handler")));             			/* EXTI Line2 interrupt                                               */
void EXTI3_IRQHandler() __attribute__((weak,alias("Default_Handler")));             			/* EXTI Line3 interrupt                                               */
void EXTI4_IRQHandler() __attribute__((weak,alias("Default_Handler")));             			/* EXTI Line4 interrupt                                               */
void DMA1_Stream0_IRQHandler() __attribute__((weak,alias("Default_Handler")));      			/* DMA1 Stream0 global interrupt                                      */
void DMA1_Stream1_IRQHandler() __attribute__((weak,alias("Default_Handler")));      			/* DMA1 Stream1 global interrupt                                      */
void DMA1_Stream2_IRQHandler() __attribute__((weak,alias("Default_Handler")));      			/* DMA1 Stream2 global interrupt                                      */
void DMA1_Stream3_IRQHandler() __attribute__((weak,alias("Default_Handler")));      			/* DMA1 Stream3 global interrupt                                      */
void DMA1_Stream4_IRQHandler() __attribute__((weak,alias("Default_Handler")));      			/* DMA1 Stream4 global interrupt                                      */
void DMA1_Stream5_IRQHandler() __attribute__((weak,alias("Default_Handler")));      			/* DMA1 Stream5 global interrupt                                      */
void DMA1_Stream6_IRQHandler() __attribute__((weak,alias("Default_Handler")));      			/* DMA1 Stream6 global interrupt                                      */
void ADC_IRQHandler() __attribute__((weak,alias("Default_Handler")));               			/* ADC1 global interrupt                                              */
void EXTI9_5_IRQHandler() __attribute__((weak,alias("Default_Handler")));           			/* EXTI Line[9:5] interrupts                                          */
void TIM1_BRK_TIM9_IRQHandler() __attribute__((weak,alias("Default_Handler")));     			/* TIM1 Break interrupt and TIM9 global interrupt                     */
void TIM1_UP_TIM10_IRQHandler() __attribute__((weak,alias("Default_Handler")));     			/* TIM1 Update interrupt and TIM10 global interrupt                   */
void TIM1_TRG_COM_TIM11_IRQHandler() __attribute__((weak,alias("Default_Handler")));			/* TIM1 Trigger and Commutation interrupts and TIM11 global interrupt */
void TIM1_CC_IRQHandler() __attribute__((weak,alias("Default_Handler")));           			/* TIM1 Capture Compare interrupt                                     */
void TIM2_IRQHandler() __attribute__((weak,alias("Default_Handler")));              			/* TIM2 global interrupt                                              */
void TIM3_IRQHandler() __attribute__((weak,alias("Default_Handler")));              			/* TIM3 global interrupt                                              */
void TIM4_IRQHandler() __attribute__((weak,alias("Default_Handler")));              			/* TIM4 global interrupt                                              */
void I2C1_EV_IRQHandler() __attribute__((weak,alias("Default_Handler")));           			/* I2C1 event interrupt                                               */
void I2C1_ER_IRQHandler() __attribute__((weak,alias("Default_Handler")));           			/* I2C1 error interrupt                                               */
void I2C2_EV_IRQHandler() __attribute__((weak,alias("Default_Handler")));           			/* I2C2 event interrupt                                               */
void I2C2_ER_IRQHandler() __attribute__((weak,alias("Default_Handler")));           			/* I2C2 error interrupt                                               */
void SPI1_IRQHandler() __attribute__((weak,alias("Default_Handler")));              			/* SPI1 global interrupt                                              */
void SPI2_IRQHandler() __attribute__((weak,alias("Default_Handler")));              			/* SPI2 global interrupt                                              */
void USART1_IRQHandler() __attribute__((weak,alias("Default_Handler")));            			/* USART1 global interrupt                                            */
void USART2_IRQHandler() __attribute__((weak,alias("Default_Handler")));            			/* USART2 global interrupt                                            */
void EXTI15_10_IRQHandler() __attribute__((weak,alias("Default_Handler")));         			/* EXTI Line[15:10] interrupts                                        */
void RTC_Alarm_IRQHandler() __attribute__((weak,alias("Default_Handler")));         			/* RTC Alarms (A and B) through EXTI line interrupt                   */
void OTG_FS_WKUP_IRQHandler() __attribute__((weak,alias("Default_Handler")));       			/* USB On-The-Go FS Wakeup through EXTI line interrupt                */
void DMA1_Stream7_IRQHandler() __attribute__((weak,alias("Default_Handler")));      			/* DMA1 Stream7 global interrupt                                      */
void SDIO_IRQHandler() __attribute__((weak,alias("Default_Handler")));              			/* SDIO global interrupt                                              */
void TIM5_IRQHandler() __attribute__((weak,alias("Default_Handler")));              			/* TIM5 global interrupt                                              */
void SPI3_IRQHandler() __attribute__((weak,alias("Default_Handler")));              			/* SPI3 global interrupt                                              */
void DMA2_Stream0_IRQHandler() __attribute__((weak,alias("Default_Handler")));      			/* DMA2 Stream0 global interrupt                                      */
void DMA2_Stream1_IRQHandler() __attribute__((weak,alias("Default_Handler")));      			/* DMA2 Stream1 global interrupt                                      */
void DMA2_Stream2_IRQHandler() __attribute__((weak,alias("Default_Handler")));      			/* DMA2 Stream2 global interrupt                                      */
void DMA2_Stream3_IRQHandler() __attribute__((weak,alias("Default_Handler")));      			/* DMA2 Stream3 global interrupt                                      */
void DMA2_Stream4_IRQHandler() __attribute__((weak,alias("Default_Handler")));      			/* DMA2 Stream4 global interrupt                                      */
void OTG_FS_IRQHandler() __attribute__((weak,alias("Default_Handler")));            			/* USB On The Go FS global interrupt                                  */
void DMA2_Stream5_IRQHandler() __attribute__((weak,alias("Default_Handler")));      			/* DMA2 Stream5 global interrupt                                      */
void DMA2_Stream6_IRQHandler() __attribute__((weak,alias("Default_Handler")));      			/* DMA2 Stream6 global interrupt                                      */
void DMA2_Stream7_IRQHandler() __attribute__((weak,alias("Default_Handler")));      			/* DMA2 Stream7 global interrupt                                      */
void USART6_IRQHandler() __attribute__((weak,alias("Default_Handler")));            			/* USART6 global interrupt                                            */
void I2C3_EV_IRQHandler() __attribute__((weak,alias("Default_Handler")));           			/* I2C3 event interrupt                                               */
void I2C3_ER_IRQHandler() __attribute__((weak,alias("Default_Handler")));           			/* I2C3 error interrupt                                               */
void SPI4_IRQHandler() __attribute__((weak,alias("Default_Handler")));              			/* SPI 4 global interrupt                                             */
void SPI5_IRQHandler() __attribute__((weak,alias("Default_Handler")));             			/* SPI 5 global interrupt    */



unsigned int vector[] __attribute__ ((section(".isr_vector"))) = {
STACK_START,
(unsigned int )Reset_Handler,
(unsigned int )NMI_Handler,
(unsigned int )HardFault_Handler,
(unsigned int )MemManage_Handler,
(unsigned int )BusFault_Handler,
(unsigned int )UsageFault_Handler,
(unsigned int )0,
(unsigned int )0,
(unsigned int )0,
(unsigned int )0,
(unsigned int )SVC_Handler,
(unsigned int )DebugMon_Handler,
(unsigned int )0,
(unsigned int )PendSV_Handler,
(unsigned int )SysTick_Handler,
(unsigned int )WWDG_IRQHandler,              			/* Window Watchdog interrupt                                          */
(unsigned int )PVD_IRQHandler,               			/* EXTI Line 16 interrupt / PVD through EXTI                          */
(unsigned int )TAMP_STAMP_IRQHandler,        			/* Tamper and TimeStamp interrupts through                            */
(unsigned int )RTC_WKUP_IRQHandler,          			/* RTC Wakeup interrupt through the EXTI line                         */
(unsigned int )FLASH_IRQHandler,             			/* FLASH global interrupt                                             */
(unsigned int )RCC_IRQHandler,               			/* RCC global interrupt                                               */
(unsigned int )EXTI0_IRQHandler,             			/* EXTI Line0 interrupt                                               */
(unsigned int )EXTI1_IRQHandler,             			/* EXTI Line1 interrupt                                               */
(unsigned int )EXTI2_IRQHandler,             			/* EXTI Line2 interrupt                                               */
(unsigned int )EXTI3_IRQHandler,             			/* EXTI Line3 interrupt                                               */
(unsigned int )EXTI4_IRQHandler,             			/* EXTI Line4 interrupt                                               */
(unsigned int )DMA1_Stream0_IRQHandler,      			/* DMA1 Stream0 global interrupt                                      */
(unsigned int )DMA1_Stream1_IRQHandler,      			/* DMA1 Stream1 global interrupt                                      */
(unsigned int )DMA1_Stream2_IRQHandler,      			/* DMA1 Stream2 global interrupt                                      */
(unsigned int )DMA1_Stream3_IRQHandler,      			/* DMA1 Stream3 global interrupt                                      */
(unsigned int )DMA1_Stream4_IRQHandler,      			/* DMA1 Stream4 global interrupt                                      */
(unsigned int )DMA1_Stream5_IRQHandler,      			/* DMA1 Stream5 global interrupt                                      */
(unsigned int )DMA1_Stream6_IRQHandler,      			/* DMA1 Stream6 global interrupt                                      */
(unsigned int )ADC_IRQHandler,               			/* ADC1 global interrupt                                              */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )EXTI9_5_IRQHandler,           			/* EXTI Line[9:5] interrupts                                          */
(unsigned int )TIM1_BRK_TIM9_IRQHandler,     			/* TIM1 Break interrupt and TIM9 global interrupt                     */
(unsigned int )TIM1_UP_TIM10_IRQHandler,     			/* TIM1 Update interrupt and TIM10 global interrupt                   */
(unsigned int )TIM1_TRG_COM_TIM11_IRQHandler,			/* TIM1 Trigger and Commutation interrupts and TIM11 global interrupt */
(unsigned int )TIM1_CC_IRQHandler,           			/* TIM1 Capture Compare interrupt                                     */
(unsigned int )TIM2_IRQHandler,              			/* TIM2 global interrupt                                              */
(unsigned int )TIM3_IRQHandler,              			/* TIM3 global interrupt                                              */
(unsigned int )TIM4_IRQHandler,              			/* TIM4 global interrupt                                              */
(unsigned int )I2C1_EV_IRQHandler,           			/* I2C1 event interrupt                                               */
(unsigned int )I2C1_ER_IRQHandler,           			/* I2C1 error interrupt                                               */
(unsigned int )I2C2_EV_IRQHandler,           			/* I2C2 event interrupt                                               */
(unsigned int )I2C2_ER_IRQHandler,           			/* I2C2 error interrupt                                               */
(unsigned int )SPI1_IRQHandler,              			/* SPI1 global interrupt                                              */
(unsigned int )SPI2_IRQHandler,              			/* SPI2 global interrupt                                              */
(unsigned int )USART1_IRQHandler,            			/* USART1 global interrupt                                            */
(unsigned int )USART2_IRQHandler,            			/* USART2 global interrupt                                            */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )EXTI15_10_IRQHandler,         			/* EXTI Line[15:10] interrupts                                        */
(unsigned int )RTC_Alarm_IRQHandler,         			/* RTC Alarms (A and B) through EXTI line interrupt                   */
(unsigned int )OTG_FS_WKUP_IRQHandler,       			/* USB On-The-Go FS Wakeup through EXTI line interrupt                */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )DMA1_Stream7_IRQHandler,      			/* DMA1 Stream7 global interrupt                                      */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )SDIO_IRQHandler,              			/* SDIO global interrupt                                              */
(unsigned int )TIM5_IRQHandler,              			/* TIM5 global interrupt                                              */
(unsigned int )SPI3_IRQHandler,              			/* SPI3 global interrupt                                              */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )DMA2_Stream0_IRQHandler,      			/* DMA2 Stream0 global interrupt                                      */
(unsigned int )DMA2_Stream1_IRQHandler,      			/* DMA2 Stream1 global interrupt                                      */
(unsigned int )DMA2_Stream2_IRQHandler,      			/* DMA2 Stream2 global interrupt                                      */
(unsigned int )DMA2_Stream3_IRQHandler,      			/* DMA2 Stream3 global interrupt                                      */
(unsigned int )DMA2_Stream4_IRQHandler,      			/* DMA2 Stream4 global interrupt                                      */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )OTG_FS_IRQHandler,            			/* USB On The Go FS global interrupt                                  */
(unsigned int )DMA2_Stream5_IRQHandler,      			/* DMA2 Stream5 global interrupt                                      */
(unsigned int )DMA2_Stream6_IRQHandler,      			/* DMA2 Stream6 global interrupt                                      */
(unsigned int )DMA2_Stream7_IRQHandler,      			/* DMA2 Stream7 global interrupt                                      */
(unsigned int )USART6_IRQHandler,            			/* USART6 global interrupt                                            */
(unsigned int )I2C3_EV_IRQHandler,           			/* I2C3 event interrupt                                               */
(unsigned int )I2C3_ER_IRQHandler,           			/* I2C3 error interrupt                                               */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )0,                            			/* Reserved                                                           */
(unsigned int )SPI4_IRQHandler,              			/* SPI 4 global interrupt                                             */
(unsigned int )SPI5_IRQHandler              			/* SPI 5 global interrupt                                             */
};


void Default_Handler()
{
while(1);
}


void Reset_Handler()
{
	
}