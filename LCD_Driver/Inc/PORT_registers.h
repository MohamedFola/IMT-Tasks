/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : MCAL                      ************/
/************ Version : 1.00                      ************/
/************ SWC     : PORT                      ************/
/*************************************************************/
/*************************************************************/

#ifndef _PORT_REGISTERS_H_
#define _PORT_REGISTERS_H_

/* base addresses of the GPIO registers */
#define GPIOC_Base_Address                (u32)0x40020800
#define GPIOB_Base_Address                (u32)0x40020400
#define GPIOA_Base_Address                (u32)0x40020000

/* GPIO port mode register */
#define GPIOA_MODER                       *((volatile u32*)(GPIOA_Base_Address + 0x00))
#define GPIOB_MODER                       *((volatile u32*)(GPIOB_Base_Address + 0x00))
#define GPIOC_MODER                       *((volatile u32*)(GPIOC_Base_Address + 0x00))

/* pins */
#define GPIOx_MODER0                        0
#define GPIOx_MODER1                        2
#define GPIOx_MODER2                        4
#define GPIOx_MODER3                        6
#define GPIOx_MODER4                        8
#define GPIOx_MODER5                        10
#define GPIOx_MODER6                        12
#define GPIOx_MODER7                        14
#define GPIOx_MODER8                        16
#define GPIOx_MODER9                        18
#define GPIOx_MODER10                       20
#define GPIOx_MODER11                       22
#define GPIOx_MODER12                       24
#define GPIOx_MODER13                       26
#define GPIOx_MODER14                       28
#define GPIOx_MODER15                       30


/* GPIO port output type register */
#define GPIOA_OTYPER                      *((volatile u32*)(GPIOA_Base_Address + 0x04))
#define GPIOB_OTYPER                      *((volatile u32*)(GPIOB_Base_Address + 0x04))
#define GPIOC_OTYPER                      *((volatile u32*)(GPIOC_Base_Address + 0x04))

/* pins */
#define GPIOx_ORYPER_OT0                    0
#define GPIOx_ORYPER_OT1                    1
#define GPIOx_ORYPER_OT2                    2
#define GPIOx_ORYPER_OT3                    3
#define GPIOx_ORYPER_OT4                    4
#define GPIOx_ORYPER_OT5                    5
#define GPIOx_ORYPER_OT6                    6
#define GPIOx_ORYPER_OT7                    7
#define GPIOx_ORYPER_OT8                    8
#define GPIOx_ORYPER_OT9                    9
#define GPIOx_ORYPER_OT10                   10
#define GPIOx_ORYPER_OT11                   11
#define GPIOx_ORYPER_OT12                   12
#define GPIOx_ORYPER_OT13                   13
#define GPIOx_ORYPER_OT14                   14
#define GPIOx_ORYPER_OT15                   15


/* GPIO port output speed register */
#define GPIOA_OSPEEDR                     *((volatile u32*)(GPIOA_Base_Address + 0x08))
#define GPIOB_OSPEEDR                     *((volatile u32*)(GPIOB_Base_Address + 0x08))
#define GPIOC_OSPEEDR                     *((volatile u32*)(GPIOC_Base_Address + 0x08))

/* pins */
#define GPIOx_OPSEEDR0                      0
#define GPIOx_OPSEEDR1                      2
#define GPIOx_OPSEEDR2                      4
#define GPIOx_OPSEEDR3                      6
#define GPIOx_OPSEEDR4                      8
#define GPIOx_OPSEEDR5                      10
#define GPIOx_OPSEEDR6                      12
#define GPIOx_OPSEEDR7                      14
#define GPIOx_OPSEEDR8                      16
#define GPIOx_OPSEEDR9                      18
#define GPIOx_OPSEEDR10                     20
#define GPIOx_OPSEEDR11                     22
#define GPIOx_OPSEEDR12                     24
#define GPIOx_OPSEEDR13                     26
#define GPIOx_OPSEEDR14                     28
#define GPIOx_OPSEEDR15                     30


/* GPIO port pull-up \ pull-down register */
#define GPIOA_PUPDR                       *((volatile u32*)(GPIOA_Base_Address + 0x0C))
#define GPIOB_PUPDR                       *((volatile u32*)(GPIOB_Base_Address + 0x0C))
#define GPIOC_PUPDR                       *((volatile u32*)(GPIOC_Base_Address + 0x0C))

/* pins */
#define GPIOx_PUPDR0                        0
#define GPIOx_PUPDR1                        2
#define GPIOx_PUPDR2                        4
#define GPIOx_PUPDR3                        6
#define GPIOx_PUPDR4                        8
#define GPIOx_PUPDR5                        10
#define GPIOx_PUPDR6                        12
#define GPIOx_PUPDR7                        14
#define GPIOx_PUPDR8                        16
#define GPIOx_PUPDR9                        18
#define GPIOx_PUPDR10                       20
#define GPIOx_PUPDR11                       22
#define GPIOx_PUPDR12                       24
#define GPIOx_PUPDR13                       26
#define GPIOx_PUPDR14                       28
#define GPIOx_PUPDR15                       30



/* GPIO port configuration lock register */
#define GPIOA_LCKR                        *((volatile u32*)(GPIOA_Base_Address + 0x1C))
#define GPIOB_LCKR                        *((volatile u32*)(GPIOB_Base_Address + 0x1C))
#define GPIOC_LCKR                        *((volatile u32*)(GPIOC_Base_Address + 0x1C))

/* pins */
#define GPIOx_LCKR_LCK0                     0
#define GPIOx_LCKR_LCK1                     1
#define GPIOx_LCKR_LCK2                     2
#define GPIOx_LCKR_LCK3                     3
#define GPIOx_LCKR_LCK4                     4
#define GPIOx_LCKR_LCK5                     5
#define GPIOx_LCKR_LCK6                     6
#define GPIOx_LCKR_LCK7                     7
#define GPIOx_LCKR_LCK8                     8
#define GPIOx_LCKR_LCK9                     9
#define GPIOx_LCKR_LCK10                    10
#define GPIOx_LCKR_LCK11                    11
#define GPIOx_LCKR_LCK12                    12
#define GPIOx_LCKR_LCK13                    13
#define GPIOx_LCKR_LCK14                    14
#define GPIOx_LCKR_LCK15                    15
#define GPIOx_LCKR_LCKK                     16




/* GPIO port alternate function low register */
#define GPIOA_AFRL                        *((volatile u32*)(GPIOA_Base_Address + 0x20))
#define GPIOB_AFRL                        *((volatile u32*)(GPIOB_Base_Address + 0x20))
#define GPIOC_AFRL                        *((volatile u32*)(GPIOC_Base_Address + 0x20))

/* pins */
#define GPIOx_AFRL0                        0
#define GPIOx_AFRL1                        4
#define GPIOx_AFRL2                        8
#define GPIOx_AFRL3                        12
#define GPIOx_AFRL4                        16
#define GPIOx_AFRL5                        20
#define GPIOx_AFRL6                        24
#define GPIOx_AFRL7                        26


/* GPIO port alternate function high register */
#define GPIOA_AFRH                        *((volatile u32*)(GPIOA_Base_Address + 0x24))
#define GPIOB_AFRH                        *((volatile u32*)(GPIOB_Base_Address + 0x24))
#define GPIOC_AFRH                        *((volatile u32*)(GPIOC_Base_Address + 0x24))

/* pins */
#define GPIOx_AFRH0                        0
#define GPIOx_AFRH1                        4
#define GPIOx_AFRH2                        8
#define GPIOx_AFRH3                        12
#define GPIOx_AFRH4                        16
#define GPIOx_AFRH5                        20
#define GPIOx_AFRH6                        24
#define GPIOx_AFRH7                        26





#endif
