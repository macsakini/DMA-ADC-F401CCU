#include "HAL_TIMER.h"


void Init_Delay(void){
	//TIM4 CH1
	TIM4->PSC = 0;
	TIM4->ARR = 16;
	TIM4->CR1 |= (1<<2); // Only counter overflow calls interrupt::::URS
	TIM4->DIER |= (1<<0); // Enable update interrupt :::: UIE 
	TIM4->EGR |= (1<<0); // Gennerate event :::: UG
	//TIM4->CR1 |= (1<<0); //ENable Counter
	
	NVIC_EnableIRQ(TIM4_IRQn);
}

void TIM4_IRQHandler(void){
	//Check what generated interrupt using SR
	/*if(TIM4->SR & TIM4_SR_UIF){
	
	}*/
	myticks++;
	TIM4->SR &= ~TIM_SR_UIF;
}

void delayUs(uint32_t us){
	TIM4->CR1 |= TIM_CR1_CEN;
	myticks = 0;
	
	while(myticks < us);
	TIM4->CR1 &= ~TIM_CR1_CEN;
	
}

void delayMs(uint32_t ms){
	TIM4->CR1 |= TIM_CR1_CEN;
	myticks = 0;
	
	while(myticks < ms);
	TIM4->CR1 &= ~TIM_CR1_CEN;
	
}
