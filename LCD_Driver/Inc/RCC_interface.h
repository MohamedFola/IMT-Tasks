/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : MCAL                      ************/
/************ Version : 1.00                      ************/
/************ SWC     : RCC                       ************/
/*************************************************************/
/*************************************************************/

#ifndef _RCC_INTERFACE_H_
#define _RCC_INTERFACE_H_

#define RCC_AHB1                1
#define RCC_AHB2                2
#define RCC_APB1                3
#define RCC_APB2                4

/* Peripherals at AHB1 */
#define AHB1_DMA2               22
#define AHB1_DMA1               21
#define AHB1_CRC                12
#define AHB1_GPIOC              2
#define AHB1_GPIOB              1
#define AHB1_GPIOA              0

/* Peripherals at AHB2 */
#define AHB2_USB_OTG_FS         7

/* Peripherals at APB1 */
#define APB1_POWER              28
#define APB1_I2C3               23
#define APB1_I2C2               22
#define APB1_I2C1               21
#define APB1_USART              17
#define APB1_SPI3               15
#define APB1_SPI2               14
#define APB1_WATCHDOG           11
#define APB1_TIMER5             3
#define APB1_TIMER4             2
#define APB1_TIMER3             1
#define APB1_TIMER2             0

/* Peripherals at APB2 */
#define APB2_TIMER11            18
#define APB2_TIMER10            17
#define APB2_TIMER9             16
#define APB2_SYSCFG             14
#define APB2_SPI4               13
#define APB2_SPI1               12
#define APB2_SDIO               11
#define APB2_ADC1               8
#define APB2_USART6             5
#define APB2_USART1             4
#define APB2_TIMER1             0



void RCC_voidSysClkInit(void);

u8 RCC_u8EnablePerClk(u8 Copy_u8Bus,u8 Copy_u8Peripheral);

u8 RCC_u8DisablePerClk(u8 Copy_u8Bus,u8 Copy_u8Peripheral);


#endif /* _RCC_INTERFACE_H_ */