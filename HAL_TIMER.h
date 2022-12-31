#pragma once

#include "stm32f4xx.h"

//=================================================TIMER REGISTER=======================================================================

#define TIMER10_CLOCK_RCC_ENABLE				(RCC->APB2ENR |= (1<<17));
#define TIMER11_CLOCK_RCC_ENABLE				(RCC->APB2ENR |= (1<<18));

void startTimer(void);
void delayMs(uint32_t ms);
void delayUs(uint32_t us);
