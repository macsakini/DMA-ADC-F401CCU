#pragma once

#include "stm32f4xx.h"

//=========================================================GPIO REGISTER========================================================================
//STATE
#define LOW					((uint32_t)	0x00)
#define HIGH				((uint32_t)	0x01)

//PORTS
#define PORTA				GPIOA
#define PORTB				GPIOB
#define PORTC				GPIOC
#define PORTD				GPIOD
#define PORTE				GPIOE

//MODE::::MODER
#define INPUT						((uint32_t)0x00)
#define OUTPUT					((uint32_t)0x01)
#define ALTERNATE				((uint32_t)0x02)
#define ANALOG					((uint32_t)0x03)

//OUTPUT TYPER::::OTYPER
#define PUSHPULL				((uint32_t)0x00)
#define OPENDRAIN				((uint32_t)0x01)

//SPEED::::SPEEDR
#define LOWSP							((uint32_t)0x00)
#define MEDIUMSP					((uint32_t)0x01)
#define HIGHSP						((uint32_t)0x02)
#define VERYHIGHSP				((uint32_t)0x03)

//PULLUP/PULLDOWN::::PUPDR
#define NOPULL					((uint32_t)0x00)
#define PULLUP					((uint32_t)0x01)
#define PULLDOWN				((uint32_t)0x02)
#define RESERVED				((uint32_t)0x03)

//CLOCK INIT
#define GPIOA_CLOCK_RCC_ENABLE			(RCC->AHB1ENR |= (1<<0));
#define GPIOB_CLOCK_RCC_ENABLE			(RCC->AHB1ENR |= (1<<1));
#define GPIOC_CLOCK_RCC_ENABLE			(RCC->AHB1ENR |= (1<<2));
#define GPIOD_CLOCK_RCC_ENABLE			(RCC->AHB1ENR |= (1<<3));

// Function definitions
static void initGPIO(void);
void gpio_writepin(GPIO_TypeDef *Port, uint32_t pin, int state);
void gpio_readpin(GPIO_TypeDef *Port, uint32_t pin, int state);
void gpio_togglepin(GPIO_TypeDef *Port, uint32_t pin);


//GPIO INSTANCE STRUCTURE
struct GPIOstruct{
	uint32_t MODER;
	uint32_t OTYPER;
	uint32_t SPEEDR;
	uint32_t PUPDR;
};

static void initGPIO(){
	
}
