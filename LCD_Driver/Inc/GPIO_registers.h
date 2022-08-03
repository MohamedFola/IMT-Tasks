/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : MCAL                      ************/
/************ Version : 1.00                      ************/
/************ SWC     : GPIO                      ************/
/*************************************************************/
/*************************************************************/

#ifndef _GPIO_REGISTERS_H_
#define _GPIO_REGISTERS_H_


#define GPIOx_Base_Address                 (u32)(0x40020000)
#define GPIOx_IDR(i)                       *((volatile u32*)((GPIOx_Base_Address + (0x400 * i)) + 0x10))
#define GPIOx_ODR(i)                       *((volatile u32*)((GPIOx_Base_Address + (0x400 * i)) + 0x14))
#define GPIOx_BSRR(i)                      *((volatile u32*)((GPIOx_Base_Address + (0x400 * i)) + 0x18))
#define GPIOx_BSRR_Set(i)                  *((volatile u16*)((GPIOx_Base_Address + (0x400 * i)) + 0x18))
#define GPIOx_BSRR_Reset(i)                *((volatile u16*)((GPIOx_Base_Address + (0x400 * i)) + 0x1A))



/* base addresses of the GPIO registers */
#define GPIOC_Base_Address                 (u32)0x40020800
#define GPIOB_Base_Address                 (u32)0x40020400
#define GPIOA_Base_Address                 (u32)0x40020000


/* GPIO port input data register */
#define GPIOA_IDR                         *((volatile u32*)(GPIOA_Base_Address + 0x10))
#define GPIOB_IDR                         *((volatile u32*)(GPIOB_Base_Address + 0x10))
#define GPIOC_IDR                         *((volatile u32*)(GPIOC_Base_Address + 0x10))


/* pins */
#define GPIOx_IDR0                         0
#define GPIOx_IDR1                         1
#define GPIOx_IDR2                         2
#define GPIOx_IDR3                         3
#define GPIOx_IDR4                         4
#define GPIOx_IDR5                         5
#define GPIOx_IDR6                         6
#define GPIOx_IDR7                         7
#define GPIOx_IDR8                         8
#define GPIOx_IDR9                         9
#define GPIOx_IDR10                        10
#define GPIOx_IDR11                        11
#define GPIOx_IDR12                        12
#define GPIOx_IDR13                        13
#define GPIOx_IDR14                        14
#define GPIOx_IDR15                        15


/* GPIO port output data register */
#define GPIOA_ODR                         *((volatile u32*)(GPIOA_Base_Address + 0x14))
#define GPIOB_ODR                         *((volatile u32*)(GPIOB_Base_Address + 0x14))
#define GPIOC_ODR                         *((volatile u32*)(GPIOC_Base_Address + 0x14))


/* pins */
#define GPIOx_ODR0                         0
#define GPIOx_ODR1                         1
#define GPIOx_ODR2                         2
#define GPIOx_ODR3                         3
#define GPIOx_ODR4                         4
#define GPIOx_ODR5                         5
#define GPIOx_ODR6                         6
#define GPIOx_ODR7                         7
#define GPIOx_ODR8                         8
#define GPIOx_ODR9                         9
#define GPIOx_ODR10                        10
#define GPIOx_ODR11                        11
#define GPIOx_ODR12                        12
#define GPIOx_ODR13                        13
#define GPIOx_ODR14                        14
#define GPIOx_ODR15                        15


/* GPIO port se \ reset register */
#define GPIOA_BSRR                        *((volatile u32*)(GPIOA_Base_Address + 0x18))
#define GPIOB_BSRR                        *((volatile u32*)(GPIOB_Base_Address + 0x18))
#define GPIOC_BSRR                        *((volatile u32*)(GPIOC_Base_Address + 0x18))

#define GPIOA_BSRR_Set                    *((volatile u16*)(GPIOA_Base_Address + 0x18))
#define GPIOB_BSRR_Set                    *((volatile u16*)(GPIOB_Base_Address + 0x18))
#define GPIOC_BSRR_Set                    *((volatile u16*)(GPIOC_Base_Address + 0x18))

#define GPIOA_BSRR_Reset                  *((volatile u16*)(GPIOA_Base_Address + 0x1A))
#define GPIOB_BSRR_Reset                  *((volatile u16*)(GPIOB_Base_Address + 0x1A))
#define GPIOC_BSRR_Reset                  *((volatile u16*)(GPIOC_Base_Address + 0x1A))

/* pins */
#define GPIOx_BSRR_BS0                     0
#define GPIOx_BSRR_BS1                     1
#define GPIOx_BSRR_BS2                     2
#define GPIOx_BSRR_BS3                     3
#define GPIOx_BSRR_BS4                     4
#define GPIOx_BSRR_BS5                     5
#define GPIOx_BSRR_BS6                     6
#define GPIOx_BSRR_BS7                     7
#define GPIOx_BSRR_BS8                     8
#define GPIOx_BSRR_BS9                     9
#define GPIOx_BSRR_BS10                    10
#define GPIOx_BSRR_BS11                    11
#define GPIOx_BSRR_BS12                    12
#define GPIOx_BSRR_BS13                    13
#define GPIOx_BSRR_BS14                    14
#define GPIOx_BSRR_BS15                    15
#define GPIOx_BSRR_BR0                     16
#define GPIOx_BSRR_BR1                     17
#define GPIOx_BSRR_BR2                     18
#define GPIOx_BSRR_BR3                     19
#define GPIOx_BSRR_BR4                     20
#define GPIOx_BSRR_BR5                     21
#define GPIOx_BSRR_BR6                     22
#define GPIOx_BSRR_BR7                     23
#define GPIOx_BSRR_BR8                     24
#define GPIOx_BSRR_BR9                     25
#define GPIOx_BSRR_BR10                    26
#define GPIOx_BSRR_BR11                    27
#define GPIOx_BSRR_BR12                    28
#define GPIOx_BSRR_BR13                    29
#define GPIOx_BSRR_BR14                    30
#define GPIOx_BSRR_BR15                    31




#endif
