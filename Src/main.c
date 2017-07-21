#include "main.h"

void delay(uint32_t milisec);

int main(void)
{	
	gpioInit();
	
	while(1)
	{
		gpioToggle(LED2);
		delay(1000);
		
	}
}


void delay(uint32_t milisec)
{
	milisec *= 24000;
	for (uint32_t i = 0; i < milisec; i++)
	{
	}
}

