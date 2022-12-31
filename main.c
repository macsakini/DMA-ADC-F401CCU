#include "stm32f4xx.h"
#include "HAL_GPIO.h"
#include "HAL_TIMER.h"

void Init_GPIO_RCC(void);
void Init_TIM_RCC(void);
void Init_GPIO(void);
void Init_Timer(void);

int main(void){	
	while(1){
		
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
}

void Init_GPIO(void){
	
}

void Init_Timer(void){
	
}

