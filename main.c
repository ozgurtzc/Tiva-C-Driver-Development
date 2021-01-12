

/**
 * main.c
 */
#include "tm4c123gh6pm.h"
#include "gpio.h"

int main(void)
{
    GPIO_Handle_t GPIOLed;

    GPIOLed.pGPIOx = GPIOD;
    GPIOLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_0;
    GPIOLed.GPIO_PinConfig.GPIO_PinMode = GPIO_DIR_MODE_OUT;
    GPIOLed.GPIO_PinConfig.GPIO_PinStrength = GPIO_STRENGTH_12MA;
    GPIOLed.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_PIN_TYPE_STD;

    GPIO_PeriClockControl(GPIOD, ENABLE);
    GPIO_Init(&GPIOLed);

    while(1)
    {
        GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_0);

    }
	return 0;
}
