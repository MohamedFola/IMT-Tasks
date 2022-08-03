/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : MCAL                      ************/
/************ Version : 1.00                      ************/
/************ SWC     : RCC                       ************/
/*************************************************************/
/*************************************************************/

#ifndef _RCC_REGISTERS_H_
#define _RCC_REGISTERS_H_

#define RCC_Base_Address       (u32)0x40023800

/*************************************************************************************************************************************************************/
#define RCC_CR                *((volatile u32*)((RCC_Base_Address) + (0x00)))     /* clock control register */
#define RCC_CR_PLLI2SRDY       27                                                 /* PLLI2S clock ready flag -- read */
#define RCC_CR_PLLI2SON        26                                                 /* PLLI2S enable --> read / write */
#define RCC_CR_PLLRDY          25                                                 /* PLL clock ready flag --> read */
#define RCC_CR_PLLON           24                                                 /* PLL enable --> read / write */
#define RCC_CR_CSSON           19                                                 /* clock security system enable --> read / write */
#define RCC_CR_HSEBYP          18                                                 /* HSE clock bypass --> read / write */
#define RCC_CR_HSERDY          17                                                 /* HSE clock ready flag --> read */
#define RCC_CR_HSEON           16                                                 /* HSE enable --> read / write */
#define RCC_CR_HSICAL7         15                                                 /* internal high speed clock calibration bit 7 --> read */
#define RCC_CR_HSICAL6         14                                                 /* internal high speed clock calibration bit 6 --> read */
#define RCC_CR_HSICAL5         13                                                 /* internal high speed clock calibration bit 5 --> read */
#define RCC_CR_HSICAL4         12                                                 /* internal high speed clock calibration bit 4 --> read */
#define RCC_CR_HSICAL3         11                                                 /* internal high speed clock calibration bit 3 --> read */
#define RCC_CR_HSICAL2         10                                                 /* internal high speed clock calibration bit 2 --> read */
#define RCC_CR_HSICAL1         9                                                  /* internal high speed clock calibration bit 1 --> read */
#define RCC_CR_HSICAL0         8                                                  /* internal high speed clock calibration bit 0 --> read */
#define RCC_CR_HSITRIM4        7                                                  /* internal high speed clock triming bit 4 --> read / write */
#define RCC_CR_HSITRIM3        6                                                  /* internal high speed clock triming bit 3 --> read / write */
#define RCC_CR_HSITRIM2        5                                                  /* internal high speed clock triming bit 2 --> read / write */
#define RCC_CR_HSITRIM1        4                                                  /* internal high speed clock triming bit 1 --> read / write */
#define RCC_CR_HSITRIM0        3                                                  /* internal high speed clock triming bit 0 --> read / write */
#define RCC_CR_HSIRDY          1                                                  /* HSI clock ready flag --> read */
#define RCC_CR_HSION           0                                                  /* HSI enable --> read / write */


/*************************************************************************************************************************************************************/
#define RCC_PLLCFGR           *((volatile u32*)((RCC_Base_Address) + (0x04)))     /* PLL configuration register */
#define RCC_PLLCFGR_PLLQ3       27                                                /* main PLL division factor for OTG FS bit 3 --> read / write */
#define RCC_PLLCFGR_PLLQ2       26                                                /* main PLL division factor for OTG FS bit 2 --> read / write */
#define RCC_PLLCFGR_PLLQ1       25                                                /* main PLL division factor for OTG FS bit 1 --> read / write */
#define RCC_PLLCFGR_PLLQ0       24                                                /* main PLL division factor for OTG FS bit 0 --> read / write */
#define RCC_PLLCFGR_PLLSRC      22                                                /* main PLL and audio PLL entry clock source --> read / write */
#define RCC_PLLCFGR_PLLP1       17                                                /* main PLL division factor for main system clock bit 1 --> read / write */
#define RCC_PLLCFGR_PLLP0       16                                                /* main PLL division factor for main system clock bit 0 --> read / write */
#define RCC_PLLCFGR_PLLN        6                                                 /* main PLL multiplicatoin factor for VCO --> read / write */
#define RCC_PLLCFGR_PLLM5       5                                                 /* division factor for main PLL and audio PLL bit 5 --> read / write */
#define RCC_PLLCFGR_PLLM4       4                                                 /* division factor for main PLL and audio PLL bit 4 --> read / write */
#define RCC_PLLCFGR_PLLM3       3                                                 /* division factor for main PLL and audio PLL bit 3 --> read / write */
#define RCC_PLLCFGR_PLLM2       2                                                 /* division factor for main PLL and audio PLL bit 2 --> read / write */
#define RCC_PLLCFGR_PLLM1       1                                                 /* division factor for main PLL and audio PLL bit 1 --> read / write */
#define RCC_PLLCFGR_PLLM0       0                                                 /* division factor for main PLL and audio PLL bit 0 --> read / write */


/*************************************************************************************************************************************************************/
#define RCC_CFGR              *((volatile u32*)((RCC_Base_Address) + (0x08)))     /* clock configuration register */
#define RCC_CFGR_MCO2          30                                                 /* microcontroller clock output 2 -> read / write */
#define RCC_CFGR_MCO2PRE       27                                                 /* MCO2 prescaler --> read / write */
#define RCC_CFGR_MCO1PRE       24                                                 /* MCO1 prescaler --> read / write */
#define RCC_CFGR_MCO1          21                                                 /* microcontroller clock output 1 --> read / write */
#define RCC_CFGR_PPRE2         13                                                 /* APB high speed prescaler (APB2) --> read / write */
#define RCC_CFGR_PPRE1         10                                                 /* APB low speed prescaler (APB1) --> read / write */
#define RCC_CFGR_HPRE          4                                                  /* AHB prescaler */
#define RCC_CFGR_SWS1          1                                                  /* system clock switch status 1 --> read */
#define RCC_CFGR_SWS0          0                                                  /* system clock switch status 0 --> read */
#define RCC_CFGR_SW1           1                                                  /* system clock switch 1 --> read / write */
#define RCC_CFGR_SW0           0                                                  /* system clock switch 0 --> read / write */


/*************************************************************************************************************************************************************/
#define RCC_CIR               *((volatile u32*)((RCC_Base_Address) + (0x0C)))     /* clock interrupt register */


/*************************************************************************************************************************************************************/
#define RCC_AHB1RSTR          *((volatile u32*)((RCC_Base_Address) + (0x10)))     /* AHB1 peripheral peripheral reset register */
#define RCC_AHB1ENR           *((volatile u32*)((RCC_Base_Address) + (0x30)))     /* AHB1 peripheral clock enable register */


/*************************************************************************************************************************************************************/
#define RCC_AHB2RSTR          *((volatile u32*)((RCC_Base_Address) + (0x14)))     /* AHB2 peripheral peripheral reset register */
#define RCC_AHB2ENR           *((volatile u32*)((RCC_Base_Address) + (0x34)))     /* AHB2 peripheral clock enable register */


/*************************************************************************************************************************************************************/
#define RCC_APB1RSTR          *((volatile u32*)((RCC_Base_Address) + (0x20)))     /* APB1 peripheral peripheral reset register */
#define RCC_APB1ENR           *((volatile u32*)((RCC_Base_Address) + (0x40)))     /* APB1 peripheral clock enable register */


/*************************************************************************************************************************************************************/
#define RCC_APB2RSTR          *((volatile u32*)((RCC_Base_Address) + (0x24)))     /* APB2 peripheral peripheral reset register */
#define RCC_APB2ENR           *((volatile u32*)((RCC_Base_Address) + (0x44)))     /* APB2 peripheral clock enable register */



#endif /* _RCC_REGISTERS_H_ */
