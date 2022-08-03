/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : MCAL                      ************/
/************ Version : 1.00                      ************/
/************ SWC     : GPIO                      ************/
/*************************************************************/
/*************************************************************/
/*************************************************************
                         PA14    PA13
                    |      |      |      |
                    ----------------------
1  :              -|                      |-              : 40
2  :    PC13      -|                      |-              : 39
3  :    PC14      -|                      |-              : 38
4  :    PC15      -|                      |-       PB9    : 37
5  :              -|                      |-       PB8    : 36
6  :    PA0       -|      STM32F401       |-       PB7    : 35
7  :    PA1       -|                      |-       PB6    : 34
8  :    PA2       -|     Based on ARM     |-       PB5    : 33
9  :    PA3       -|                      |-       PB4    : 32
10 :    PA4       -|                      |-       PB3    : 31
11 :    PA5       -|                      |-       PA15   : 30
12 :    PA6       -|                      |-       PA12   : 29
13 :    PA7       -|                      |-       PA11   : 28
14 :    PB0       -|                      |-       PA10   : 27
15 :    PB1       -|                      |-       PA9    : 26
16 :    PB2       -|                      |-       PA8    : 25
17 :    PB10      -|                      |-       PB15   : 24
18 :              -|                      |-       PB14   : 23
19 :              -|                      |-       PB13   : 22
20 :              -|                      |-       PB12   : 21
                    ----------------------

**************************************************************/


#ifndef _GPIO_INTERFACE_H_
#define _GPIO_INTERFACE_H_


#define GPIO_PIN_HIGH       1
#define GPIO_PIN_LOW        0

#define GPIO_PORT_HIGH      0xFFFF
#define GPIO_PORT_LOW       0x0000


#define GPIO_PORTA    0
#define GPIO_PORTB    1
#define GPIO_PORTC    2


#define GPIO_PORTA_Pin0     0
#define GPIO_PORTA_Pin1     1
#define GPIO_PORTA_Pin2     2
#define GPIO_PORTA_Pin3     3
#define GPIO_PORTA_Pin4     4
#define GPIO_PORTA_Pin5     5
#define GPIO_PORTA_Pin6     6
#define GPIO_PORTA_Pin7     7
#define GPIO_PORTA_Pin8     8
#define GPIO_PORTA_Pin9     9
#define GPIO_PORTA_Pin10    10
#define GPIO_PORTA_Pin11    11
#define GPIO_PORTA_Pin12    12
#define GPIO_PORTA_Pin15    15



#define GPIO_PORTB_Pin0     0
#define GPIO_PORTB_Pin1     1
#define GPIO_PORTB_Pin2     2
#define GPIO_PORTB_Pin5     5
#define GPIO_PORTB_Pin6     6
#define GPIO_PORTB_Pin7     7
#define GPIO_PORTB_Pin8     8
#define GPIO_PORTB_Pin9     9
#define GPIO_PORTB_Pin10    10
#define GPIO_PORTB_Pin11    11
#define GPIO_PORTB_Pin12    12
#define GPIO_PORTB_Pin13    13
#define GPIO_PORTB_Pin14    14
#define GPIO_PORTB_Pin15    15


#define GPIO_PORTC_Pin13    13
#define GPIO_PORTC_Pin14    14
#define GPIO_PORTC_Pin15    15


void GPIO_SetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u16 Copy_u8Value);

void GPIO_SetChannelValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8 Copy_u8ChannelLength, u16 Copy_u8Value);

void GPIO_SetPortValue(u8 Copy_u8PortName, u16 Copy_u8value);

u8 GPIO_GetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u16* Copy_pu8Value);

u8 GPIO_GetChannelValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8 Copy_u8ChannelLength, u16* Copy_pu8Value);


#endif
