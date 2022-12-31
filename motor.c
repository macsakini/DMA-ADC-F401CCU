#include "stm32f4xx.h"
#include "motor.h"


//Implementation check header file for function definition
//PB8
void determineSpeedA(void){
	
}

//Implementation check header file for function definition
//PIN PB9
void determineSpeedB(void){
	
}


void initiateBrake(void){
	TIM10->CCR1 = 0;
	TIM11->CCR1 = 0;
}
