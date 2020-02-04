
/* Includes */
#include <stddef.h>
#include "stm32f10x.h"


/* Private macro */
/* Private variables */
void delay (uint32_t time){
	for(uint32_t i=0; i<time;i++);
}
int main(void)
{

	RCC->APB2ENR |= (1<<4); //enable the clock for GPIOC
	GPIOC->CRH |= (1<<21);

	while(1){
	GPIOC->BSRR |= (1<<13);
	delay(1000000);
	GPIOC->BRR |= (1<<13);
	delay(1000000);
	}
}
