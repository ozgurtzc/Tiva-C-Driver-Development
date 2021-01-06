/*
 * tm4c123gh6pm.h
 *
 *  Created on: 6 Oca 2021
 *      Author: OZGUR
 */

#ifndef INC_TM4C123GH6PM_H_
#define INC_TM4C123GH6PM_H_

#define FLASH_BASEADDR          ((uint32_t)0x00000000)
#define SRAM1_BASEADDR          ((uint32_t)0x20000000)
#define SRAM2_BASEADDR          ((uint32_t)0x22000000)
#define PERIPH_BASE             ((uint32_t)0x40000000)

#define WDOG_TIM0_BASE          (PERIPH_BASE + 0x0000)
#define WDOG_TIM1_BASE          (PERIPH_BASE + 0x1000)

#define GPIOA_APB_BASE          (PERIPH_BASE + 0x4000)
#define GPIOB_APB_BASE          (PERIPH_BASE + 0x5000)
#define GPIOC_APB_BASE          (PERIPH_BASE + 0x6000)
#define GPIOD_APB_BASE          (PERIPH_BASE + 0x7000)
#define GPIOE_APB_BASE          (PERIPH_BASE + 0x24000)
#define GPIOF_APB_BASE          (PERIPH_BASE + 0x25000)

#define SSI0_BASE               (PERIPH_BASE + 0x8000)
#define SSI1_BASE               (PERIPH_BASE + 0x9000)
#define SSI2_BASE               (PERIPH_BASE + 0xA000)
#define SSI3_BASE               (PERIPH_BASE + 0xB000)

#define UART0_BASE              (PERIPH_BASE + 0xC000)
#define UART1_BASE              (PERIPH_BASE + 0xD000)
#define UART2_BASE              (PERIPH_BASE + 0xE000)
#define UART3_BASE              (PERIPH_BASE + 0xF000)
#define UART4_BASE              (PERIPH_BASE + 0x10000)
#define UART5_BASE              (PERIPH_BASE + 0x11000)
#define UART6_BASE              (PERIPH_BASE + 0x12000)
#define UART7_BASE              (PERIPH_BASE + 0x13000)

#define I2C0_BASE               (PERIPH_BASE + 0x20000)
#define I2C1_BASE               (PERIPH_BASE + 0x21000)
#define I2C2_BASE               (PERIPH_BASE + 0x22000)
#define I2C3_BASE               (PERIPH_BASE + 0x23000)

#define PWM0_BASE               (PERIPH_BASE + 0x28000)
#define PWM1_BASE               (PERIPH_BASE + 0x29000)

#define QEI0_BASE               (PERIPH_BASE + 0x2C000)
#define QEI1_BASE               (PERIPH_BASE + 0x2D000)

#endif /* DRIVERS_INC_TM4C123GH6PM_H_ */
