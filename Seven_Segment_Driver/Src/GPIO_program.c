/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : MCAL                      ************/
/************ Version : 1.00                      ************/
/************ SWC     : GPIO                      ************/
/*************************************************************/
/*************************************************************/

#include "STD_Types.h"
#include "Bit_Manipulation.h"

#include "GPIO_registers.h"
#include "GPIO_private.h"
#include "GPIO_config.h"
#include "GPIO_interface.h"

void GPIO_SetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u16 Copy_u8Value)
{
	u8 Local_u8PinNumber = (Copy_u8PinNumber) + (16 * (Copy_u8Value == GPIO_PIN_LOW));
	SET_BIT(GPIOx_BSRR(Copy_u8PortName), Local_u8PinNumber);
}

void GPIO_SetChannelValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8 Copy_u8ChannelLength, u16 Copy_u8Value)
{
	GPIOx_ODR(Copy_u8PortName) = BitManipulationSetBits(GPIOx_ODR(Copy_u8PortName), Copy_u8PinNumber, Copy_u8ChannelLength, Copy_u8Value);
}

void GPIO_SetPortValue(u8 Copy_u8PortName, u16 Copy_u8value)
{
	GPIOx_ODR(Copy_u8PortName) = Copy_u8value;
}

void GPIO_GetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u16* Copy_pu8Value)
{
	(*Copy_pu8Value) = READ_BIT(GPIOx_IDR(Copy_u8PortName), Copy_u8PinNumber);
}

void GPIO_GetChannelValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8 Copy_u8ChannelLength, u16* Copy_pu8Value)
{
	(*Copy_pu8Value) = BitManipulationGetBits(GPIOx_IDR(Copy_u8PortName), Copy_u8PinNumber, Copy_u8ChannelLength);
}
