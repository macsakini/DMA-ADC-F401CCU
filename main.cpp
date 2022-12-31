#include "stm32f4xx.h"


void delay(uint32_t);

int main(){
	(*RCC).AHB1ENR |= RCC_AHB1ENR_GPIOCEN;
	
	
	(*GPIOC).MODER |= GPIO_MODER_MODE13_0 | GPIO_MODER_MODE13_1;
	GPIOC->OTYPER |= GPIO_OTYPER_OT_13;
	
	while(1){
		GPIOC->BSRR |= GPIO_BSRR_BR13;
	}

	return 0;
}

void delay(uint32_t ms){
	for(uint32_t i = 0; i < ms ; i++);
}
