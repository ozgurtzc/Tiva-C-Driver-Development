/*
 * gpio.c
 *
 *  Created on: 8 Oca 2021
 *      Author: OZGUR
 */

#include "gpio.h"

void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t EnorDi)
{
    if(EnorDi == ENABLE)
    {
        if(pGPIOx == GPIOA)
        {
            GPIOA_PCLK_EN();
        }
        else if(pGPIOx == GPIOB)
        {
            GPIOB_PCLK_EN();
        }
        else if(pGPIOx == GPIOC)
        {
            GPIOC_PCLK_EN();
        }
        else if(pGPIOx == GPIOD)
        {
            GPIOD_PCLK_EN();
        }
        else if(pGPIOx == GPIOE)
        {
            GPIOE_PCLK_EN();
        }
        else if(pGPIOx == GPIOF)
        {
            GPIOF_PCLK_EN();
        }
    }
    else
    {
        if(pGPIOx == GPIOA)
        {
            GPIOA_PCLK_DI();
        }
        else if(pGPIOx == GPIOB)
        {
            GPIOB_PCLK_DI();
        }
        else if(pGPIOx == GPIOC)
        {
            GPIOC_PCLK_DI();
        }
        else if(pGPIOx == GPIOD)
        {
            GPIOD_PCLK_DI();
        }
        else if(pGPIOx == GPIOE)
        {
            GPIOE_PCLK_DI();
        }
        else if(pGPIOx == GPIOF)
        {
            GPIOF_PCLK_DI();
        }
    }

}

void GPIO_Init(GPIO_Handle_t *pGPIOHandle)
{
    pGPIOHandle->pGPIOx->DR2R |= ((pGPIOHandle->GPIO_PinConfig.GPIO_PinStrength & 1) ? \
                                  (pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber): \
                                 ~(pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));

    pGPIOHandle->pGPIOx->DR4R |= ((pGPIOHandle->GPIO_PinConfig.GPIO_PinStrength & 2) ? \
                                  (pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber): \
                                 ~(pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));

    pGPIOHandle->pGPIOx->DR8R |= ((pGPIOHandle->GPIO_PinConfig.GPIO_PinStrength & 4) ? \
                                  (pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber): \
                                 ~(pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));

    pGPIOHandle->pGPIOx->SLR |= ((pGPIOHandle->GPIO_PinConfig.GPIO_PinStrength & 8) ? \
                                 (pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber): \
                                ~(pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));

    pGPIOHandle->pGPIOx->ODR |= ((pGPIOHandle->GPIO_PinConfig.GPIO_PinPuPdControl & 1) ? \
                                 (pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber))

}

void GPIO_ToggleOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber)
{

}
