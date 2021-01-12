/*
 * tm4c123gh6pm.h
 *
 *  Created on: 6 Oca 2021
 *      Author: OZGUR
 */

#ifndef INC_TM4C123GH6PM_H_
#define INC_TM4C123GH6PM_H_

#include "stdint.h"

#define __VO volatile

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

#define TIMER16_BASE0           (PERIPH_BASE + 0x30000)
#define TIMER16_BASE1           (PERIPH_BASE + 0x31000)
#define TIMER16_BASE2           (PERIPH_BASE + 0x32000)
#define TIMER16_BASE3           (PERIPH_BASE + 0x33000)
#define TIMER16_BASE4           (PERIPH_BASE + 0x34000)
#define TIMER16_BASE5           (PERIPH_BASE + 0x35000)

#define TIMER32_BASE0           (PERIPH_BASE + 0x36000)
#define TIMER32_BASE1           (PERIPH_BASE + 0x37000)
#define TIMER32_BASE2           (PERIPH_BASE + 0x4C000)
#define TIMER32_BASE3           (PERIPH_BASE + 0x4D000)
#define TIMER32_BASE4           (PERIPH_BASE + 0x4E000)
#define TIMER32_BASE5           (PERIPH_BASE + 0x4F000)

#define ADC0_BASE               (PERIPH_BASE + 0x38000)
#define ADC1_BASE               (PERIPH_BASE + 0x39000)

#define COMPARATOR_BASE         (PERIPH_BASE + 0x3C000)

#define CAN0_BASE               (PERIPH_BASE + 0x40000)
#define CAN1_BASE               (PERIPH_BASE + 0x41000)

#define USB_BASE                (PERIPH_BASE + 0x50000)

#define GPIOA_AHB_BASE          (PERIPH_BASE + 0x58000)
#define GPIOB_AHB_BASE          (PERIPH_BASE + 0x59000)
#define GPIOC_AHB_BASE          (PERIPH_BASE + 0x5A000)
#define GPIOD_AHB_BASE          (PERIPH_BASE + 0x5B000)
#define GPIOE_AHB_BASE          (PERIPH_BASE + 0x5C000)
#define GPIOF_AHB_BASE          (PERIPH_BASE + 0x5D000)

#define EEPROM_KEYLOCK_BASE     (PERIPH_BASE + 0xAF000)

#define SYS_EXCEP_BASE          (PERIPH_BASE + 0xF9000)

#define HIBERNATION_BASE        (PERIPH_BASE + 0xFC000)

#define FLASH_MEM_BASE          (PERIPH_BASE + 0xFD000)

#define SYSCTL_BASE             (PERIPH_BASE + 0xFE000)

#define UDMA_BASE               (PERIPH_BASE + 0xFF000)

typedef struct
{
    __VO uint32_t DATA;
    __VO uint32_t DIR;
    __VO uint32_t IS;
    __VO uint32_t IBE;
    __VO uint32_t IEV;
    __VO uint32_t IM;
    __VO uint32_t RIS;
    __VO uint32_t MIS;
    __VO uint32_t ICR;
    __VO uint32_t AFSEL;
    __VO uint32_t DR2R;
    __VO uint32_t DR4R;
    __VO uint32_t DR8R;
    __VO uint32_t ODR;
    __VO uint32_t PUR;
    __VO uint32_t PDR;
    __VO uint32_t SLR;
    __VO uint32_t DEN;
    __VO uint32_t LOCK;
    __VO uint32_t CR;
    __VO uint32_t AMSEL;
    __VO uint32_t PCTL;
    __VO uint32_t ADCCTL;
    __VO uint32_t DMACTL;
    __VO uint32_t PeriphID4;
    __VO uint32_t PeriphID5;
    __VO uint32_t PeriphID6;
    __VO uint32_t PeriphID7;
    __VO uint32_t PeriphID0;
    __VO uint32_t PeriphID1;
    __VO uint32_t PeriphID2;
    __VO uint32_t PeriphID3;
    __VO uint32_t PCellID0;
    __VO uint32_t PCellID1;
    __VO uint32_t PCellID2;
    __VO uint32_t PCellID3;
}GPIO_RegDef_t;

typedef struct
{
    __VO uint32_t DID0;
    __VO uint32_t DID1;
    __VO uint32_t DC0;
    __VO uint32_t DC1;
    __VO uint32_t DC2;
    __VO uint32_t DC3;
    __VO uint32_t DC4;
    __VO uint32_t DC5;
    __VO uint32_t DC6;
    __VO uint32_t DC7;
    __VO uint32_t DC8;
    __VO uint32_t PBORCTL;
    __VO uint32_t SRCR0;
    __VO uint32_t SRCR1;
    __VO uint32_t SRCR2;
    __VO uint32_t RIS;
    __VO uint32_t IMC;
    __VO uint32_t MISC;
    __VO uint32_t RESC;
    __VO uint32_t RCC;
    __VO uint32_t GPIOHBCTL;
    __VO uint32_t RCC2;
    __VO uint32_t MOSCCTL;
    __VO uint32_t RCGC0;
    __VO uint32_t RCGC1;
    __VO uint32_t RCGC2;
    __VO uint32_t SCGC0;
    __VO uint32_t SCGC1;
    __VO uint32_t SCGC2;
    __VO uint32_t DCGC0;
    __VO uint32_t DCGC1;
    __VO uint32_t DCGC2;
    __VO uint32_t DSLPCLKCFG;
    __VO uint32_t SYSPROP;
    __VO uint32_t PIOSCCAL;
    __VO uint32_t PIOSCSTAT;
    __VO uint32_t PLLFREQ0;
    __VO uint32_t PLLFREQ1;
    __VO uint32_t PLLSTAT;
    __VO uint32_t SLPPWRCFG;
    __VO uint32_t DSLPPWRCFG;
    __VO uint32_t DC9;
    __VO uint32_t NVMSTAT;
    __VO uint32_t LDOSPCTL;
    __VO uint32_t LDOSPCAL;
    __VO uint32_t LDODPCTL;
    __VO uint32_t LDODPCAL;
    __VO uint32_t SDPMST;
    __VO uint32_t PPWD;
    __VO uint32_t PPTIMER;
    __VO uint32_t PPGPIO;
    __VO uint32_t PPDMA;
    __VO uint32_t PPHIB;
    __VO uint32_t PPUART;
    __VO uint32_t PPSSI;
    __VO uint32_t PPI2C;
    __VO uint32_t PPUSB;
    __VO uint32_t PPCAN;
    __VO uint32_t PPADC;
    __VO uint32_t PPACMP;
    __VO uint32_t PPPWM;
    __VO uint32_t PPQEI;
    __VO uint32_t PPEEPROM;
    __VO uint32_t SRWD;
    __VO uint32_t SRTIMER;
    __VO uint32_t SRGPIO;
    __VO uint32_t PPWTIMER;
    __VO uint32_t SRDMA;
    __VO uint32_t SRHIB;
    __VO uint32_t SRUART;
    __VO uint32_t SRSSI;
    __VO uint32_t SRI2C;
    __VO uint32_t SRUSB;
    __VO uint32_t SRCAN;
    __VO uint32_t SRADC;
    __VO uint32_t SRACMP;
    __VO uint32_t SRPWM;
    __VO uint32_t SRQEI;
    __VO uint32_t SREEPROM;
    __VO uint32_t SRWTIMER;
    __VO uint32_t RCGCWD;
    __VO uint32_t RCGCTIMER;
    __VO uint32_t RCGCGPIO;
    __VO uint32_t RCGCDMA;
    __VO uint32_t RCGCHIB;
    __VO uint32_t RCGCUART;
    __VO uint32_t RCGCSSI;
    __VO uint32_t RCGCI2C;
    __VO uint32_t RCGCUSB;
    __VO uint32_t RCGCCAN;
    __VO uint32_t RCGCADC;
    __VO uint32_t RCGCACMP;
    __VO uint32_t RCGCPWM;
    __VO uint32_t RCGCQEI;
    __VO uint32_t RCGCEEPROM;
    __VO uint32_t RCGCWTIMER;
    __VO uint32_t SCGCWD;
    __VO uint32_t SCGCTIMER;
    __VO uint32_t SCGCGPIO;
    __VO uint32_t SCGCDMA;
    __VO uint32_t SCGCHIB;
    __VO uint32_t SCGCUART;
    __VO uint32_t SCGCSSI;
    __VO uint32_t SCGCI2C;
    __VO uint32_t SCGCUSB;
    __VO uint32_t SCGCCAN;
    __VO uint32_t SCGCADC;
    __VO uint32_t SCGCACMP;
    __VO uint32_t SCGCPWM;
    __VO uint32_t SCGCQEI;
    __VO uint32_t SCGCEEPROM;
    __VO uint32_t SCGCWTIMER;
    __VO uint32_t DCGCWD;
    __VO uint32_t DCGCTIMER;
    __VO uint32_t DCGCGPIO;
    __VO uint32_t DCGCDMA;
    __VO uint32_t DCGCHIB;
    __VO uint32_t DCGCUART;
    __VO uint32_t DCGCSSI;
    __VO uint32_t DCGCI2C;
    __VO uint32_t DCGCUSB;
    __VO uint32_t DCGCCAN;
    __VO uint32_t DCGCADC;
    __VO uint32_t DCGCACMP;
    __VO uint32_t DCGCPWM;
    __VO uint32_t DCGCQEI;
    __VO uint32_t DCGCEEPROM;
    __VO uint32_t DCGCWTIMER;
    __VO uint32_t PRWD;
    __VO uint32_t PRTIMER;
    __VO uint32_t PRGPIO;
    __VO uint32_t PRDMA;
    __VO uint32_t PRHIB;
    __VO uint32_t PRUART;
    __VO uint32_t PRSSI;
    __VO uint32_t PRI2C;
    __VO uint32_t PRUSB;
    __VO uint32_t PRCAN;
    __VO uint32_t PRADC;
    __VO uint32_t PRACMP;
    __VO uint32_t PRPWM;
    __VO uint32_t PRQEI;
    __VO uint32_t PREEPROM;
    __VO uint32_t PRWTIMER;
}SYSCTL_RegDef;

#define GPIOA                   ((GPIO_RegDef_t *) GPIOA_APB_BASE)
#define GPIOB                   ((GPIO_RegDef_t *) GPIOB_APB_BASE)
#define GPIOC                   ((GPIO_RegDef_t *) GPIOC_APB_BASE)
#define GPIOD                   ((GPIO_RegDef_t *) GPIOD_APB_BASE)
#define GPIOE                   ((GPIO_RegDef_t *) GPIOE_APB_BASE)
#define GPIOF                   ((GPIO_RegDef_t *) GPIOF_APB_BASE)

#define SYSCTL                  ((SYSCTL_RegDef *) SYSCTL_BASE)

#define GPIOA_PCLK_EN()     (SYSCTL->GPIOHBCTL |= (1 << 0))
#define GPIOB_PCLK_EN()     (SYSCTL->GPIOHBCTL |= (1 << 1))
#define GPIOC_PCLK_EN()     (SYSCTL->GPIOHBCTL |= (1 << 2))
#define GPIOD_PCLK_EN()     (SYSCTL->GPIOHBCTL |= (1 << 3))
#define GPIOE_PCLK_EN()     (SYSCTL->GPIOHBCTL |= (1 << 4))
#define GPIOF_PCLK_EN()     (SYSCTL->GPIOHBCTL |= (1 << 5))

#define GPIOA_PCLK_DI()     (SYSCTL->GPIOHBCTL &= ~(1 << 0))
#define GPIOB_PCLK_DI()     (SYSCTL->GPIOHBCTL &= ~(1 << 1))
#define GPIOC_PCLK_DI()     (SYSCTL->GPIOHBCTL &= ~(1 << 2))
#define GPIOD_PCLK_DI()     (SYSCTL->GPIOHBCTL &= ~(1 << 3))
#define GPIOE_PCLK_DI()     (SYSCTL->GPIOHBCTL &= ~(1 << 4))
#define GPIOF_PCLK_DI()     (SYSCTL->GPIOHBCTL &= ~(1 << 5))

#define I2C0_PERIPH_EN()        (SYSCTL->RCGCI2C |= (1 << 0))
#define I2C1_PERIPH_EN()        (SYSCTL->RCGCI2C |= (1 << 1))
#define I2C2_PERIPH_EN()        (SYSCTL->RCGCI2C |= (1 << 2))
#define I2C3_PERIPH_EN()        (SYSCTL->RCGCI2C |= (1 << 3))

#define I2C0_PERIPH_DI()        (SYSCTL->RCGCI2C &= ~(1 << 0))
#define I2C1_PERIPH_DI()        (SYSCTL->RCGCI2C &= ~(1 << 1))
#define I2C2_PERIPH_DI()        (SYSCTL->RCGCI2C &= ~(1 << 2))
#define I2C3_PERIPH_DI()        (SYSCTL->RCGCI2C &= ~(1 << 3))

#define ENABLE                  1
#define DISABLE                 0
#define SET                     ENABLE
#define RESET                   DISABLE
#define GPIO_PIN_SET            SET
#define GPIO_PIN_RESET          RESET

#define ASSERT(expr)

#endif /* DRIVERS_INC_TM4C123GH6PM_H_ */
