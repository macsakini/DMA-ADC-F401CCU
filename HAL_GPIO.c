#include "HAL_GPIO.h"


void gpio_writepin(GPIO_TypeDef *Port, uint32_t pin, int state){
	if(state) Port->BSRR |= (1<<pin);
	if(!state) Port->BSRR |= (1<<(pin+16));
}

void gpio_readpin(GPIO_TypeDef *Port, uint32_t pin, int state){
	
}

void gpio_togglepin(GPIO_TypeDef *Port, uint32_t pin){
	Port->ODR ^= (1<<pin);
}


