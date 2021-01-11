/*
 * gpio.h
 *
 *  Created on: 8 Oca 2021
 *      Author: OZGUR
 */

#ifndef INC_GPIO_H_
#define INC_GPIO_H_

#include "tm4c123gh6pm.h"

#define GPIO_PIN_0              0x00000001
#define GPIO_PIN_1              0x00000002
#define GPIO_PIN_2              0x00000004
#define GPIO_PIN_3              0x00000008
#define GPIO_PIN_4              0x00000010
#define GPIO_PIN_5              0x00000020
#define GPIO_PIN_6              0x00000040
#define GPIO_PIN_7              0x00000080

#define GPIO_INT_PIN_0          0x00000001
#define GPIO_INT_PIN_1          0x00000002
#define GPIO_INT_PIN_2          0x00000004
#define GPIO_INT_PIN_3          0x00000008
#define GPIO_INT_PIN_4          0x00000010
#define GPIO_INT_PIN_5          0x00000020
#define GPIO_INT_PIN_6          0x00000040
#define GPIO_INT_PIN_7          0x00000080
#define GPIO_INT_DMA            0x00000100

typedef enum
{
    GPIO_DIR_MODE_IN    = 0x0000,
    GPIO_DIR_MODE_OUT   = 0x0001,
    GPIO_DIR_MODE_HW    = 0x0002
}GPIODir_TypeDef;

typedef enum
{
    GPIO_FALLING_EDGE       = 0x0000,
    GPIO_RISING_EDGE        = 0x0004,
    GPIO_BOTH_EDGES         = 0x0001,
    GPIO_LOW_LEVEL          = 0x0002,
    GPIO_HIGH_LEVEL         = 0x0006,
    GPIO_DISCRETE_INT       = 0x1000
}GPIOInt_TypeDef;

typedef enum
{
    GPIO_STRENGTH_2MA       = 0x0001,
    GPIO_STRENGTH_4MA       = 0x0002,
    GPIO_STRENGTH_6MA       = 0x0065,
    GPIO_STRENGTH_8MA       = 0x0066,
    GPIO_STRENGTH_8MA_SC    = 0x006E,
    GPIO_STRENGTH_10MA      = 0x0075,
    GPIO_STRENGTH_12MA      = 0x0077
}GPIOSth_TypeDef;

typedef enum
{
    GPIO_PIN_TYPE_STD       = 0x0008,
    GPIO_PIN_TYPE_STD_WPU   = 0x000A,
    GPIO_PIN_TYPE_STD_WPD   = 0x000C,
    GPIO_PIN_TYPE_OD        = 0x0009,
    GPIO_PIN_TYPE_ANALOG    = 0x0000,
    GPIO_PIN_TYPE_WAKE_HIGH = 0x0208,
    GPIO_PIN_TYPE_WAKE_LOW  = 0x0108
}GPIOPuPd_TypeDef;

typedef struct
{
    uint8_t GPIO_PinNumber;
    GPIODir_TypeDef GPIO_PinMode;
    GPIOSth_TypeDef GPIO_PinStrength;
    GPIOPuPd_TypeDef GPIO_PinPuPdControl;
}GPIO_PinConfig_t;

typedef struct
{
    GPIO_RegDef_t *pGPIOx;
    GPIO_PinConfig_t GPIO_PinConfig;
}GPIO_Handle_t;

void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t EnorDi);

void GPIO_Init(GPIO_Handle_t *pGPIOHandle);;
void GPIO_DeInit(GPIO_RegDef_t *pGPIOx);

uint8_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);
uint8_t GPIO_WriteToOutputPin(GPIO_RegDef_t *pGPIOx);
//void GPIO_WriteToOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value);
void GPIO_WriteToOutputPort(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value);
void GPIO_ToggleOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);

void GPIO_IRQConfig(uint8_t IRQNumber, uint8_t IRQPriority, uint8_t EnorDi);
void GPIO_IRQHandling(uint8_t PinNumber);

#endif /* DRIVERS_INC_GPIO_H_ */
