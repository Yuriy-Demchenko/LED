#include "gpio.h"

GPIO_TypeDef* GPIO_PORT[LEDn] = {LED1_GPIO_PORT, LED2_GPIO_PORT, LED3_GPIO_PORT};
const uint16_t GPIO_PIN[LEDn] = {LED1_PIN, LED2_PIN, LED3_PIN};

void gpioInit(void)
{
	GPIO_InitTypeDef GPIO_Initial;

	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB, ENABLE);
	
	GPIO_Initial.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_Initial.GPIO_OType = GPIO_OType_PP;
	GPIO_Initial.GPIO_Pin = LED1_PIN | LED2_PIN | LED3_PIN;
	GPIO_Initial.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Initial.GPIO_Speed = GPIO_Low_Speed;
	GPIO_Init(GPIOB, &GPIO_Initial);
	
}

void gpioToggle(Led_TypeDef Led)
{
	GPIO_ToggleBits(GPIO_PORT[Led], GPIO_PIN[Led]);
}

