#include "stm32f4xx.h"
#include "HAL_GPIO.h"
#include "HAL_TIMER.h"

void Init_GPIO_RCC(void);
void Init_TIM_RCC(void);
void Init_GPIO(void);
void Init_Timer(void);

int main(void){	
	//Initialize clocks for components N?B THIS IS NECESSARY
	Init_GPIO_RCC();
	Init_TIM_RCC();
	
	
	
	
	while(1){
		gpio_togglepin(GPIOC, 13);
		delayMs(1000);
	}
}

void Init_GPIO_RCC(void){
	GPIOA_CLOCK_RCC_ENABLE
	GPIOB_CLOCK_RCC_ENABLE
	GPIOC_CLOCK_RCC_ENABLE
}

void Init_TIM_RCC(void){
	TIMER10_CLOCK_RCC_ENABLE
	TIMER11_CLOCK_RCC_ENABLE
	
	//Initialize Timer 4 clock as delay uses Timer 4
	TIMER4_CLOCK_RCC_ENABLE
}

void Init_GPIO(void){
	
}

void Init_Timer(void){
	
}

