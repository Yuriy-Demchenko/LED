#ifndef __GPIO_INIT__
#define __GPIO_INIT__

#include "stm32f4xx.h"

typedef enum 
{
  LED1 = 0,
  LED2 = 1,
  LED3 = 2,
}Led_TypeDef;

#define LEDn                                    3

#define LED1_PIN                                GPIO_Pin_3
#define LED1_GPIO_PORT                          GPIOB 

#define LED2_PIN                                GPIO_Pin_1
#define LED2_GPIO_PORT                          GPIOB

#define LED3_PIN                                GPIO_Pin_1
#define LED3_GPIO_PORT                          GPIOB

void gpioInit(void);
void gpioToggle(Led_TypeDef Led);

#endif
