#pragma once

#include "stm32f4xx.h"

//=================================================TIMER REGISTER=======================================================================

#define TIMER10_CLOCK_RCC_ENABLE				(RCC->APB2ENR |= (1<<17));
#define TIMER11_CLOCK_RCC_ENABLE				(RCC->APB2ENR |= (1<<18));
#define TIMER4_CLOCK_RCC_ENABLE					(RCC->APB1ENR |= (1<<2));

void startTimer(void);

void TIM4_IRQHandler(void);
static uint32_t myticks = 0;
void delayMs(uint32_t ms);
void delayUs(uint32_t us);
void Init_Delay(void);
