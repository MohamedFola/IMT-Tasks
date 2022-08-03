/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : MCAL                      ************/
/************ Version : 1.00                      ************/
/************ SWC     : RCC                       ************/
/*************************************************************/
/*************************************************************/

#ifndef _RCC_PRIVATE_H_
#define _RCC_PRIVATE_H_

#define Disabled                  0
#define Enabled                   1

#define RCC_HSI                   0x00
#define RCC_HSE                   0x01
#define RCC_PLL                   0x10


#define HSE_NOT_BYPASS            0
#define HSE_BYPASS                1


#define No_Division               0x000
#define Division_By_2             0x100
#define Division_By_3             0x101
#define Division_By_4             0x110
#define Division_By_5             0x111

#define AHB_Clock_Not_Divided     0x000
#define AHB_Clock_Divided_By_2    0x100
#define AHB_Clock_Divided_By_4    0x101
#define AHB_Clock_Divided_By_8    0x110
#define AHB_Clock_Divided_By_16   0x111


#define System_Clock_Not_Divided       0x0000
#define System_Clock_Divided_By_2      0x1000
#define System_Clock_Divided_By_4      0x1001
#define System_Clock_Divided_By_8      0x1010
#define System_Clock_Divided_By_16     0x1011
#define System_Clock_Divided_By_64     0x1100
#define System_Clock_Divided_By_128    0x1101
#define System_Clock_Divided_By_256    0x1110
#define System_Clock_Divided_By_512    0x1111


#define Peripheral_Max_Number     32


/* PLL */

#define PLL_HSI                   0
#define PLL_HSE                   1

#define PLLQ_Default              4

#define PLLP_2                    0x00
#define PLLP_4                    0x01
#define PLLP_6                    0x10
#define PLLP_8                    0x11
#define PLLP_Default              PLLP_2

#define PLLN_Default              0x011000000

#define PLLM_Default              0x010000



#endif /* _RCC_PRIVATE_H_ */