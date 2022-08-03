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
#include "GPIO_interface.h"

void GPIO_SetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u16 Copy_u8Value)
{
	if(Copy_u8Value == GPIO_PIN_HIGH)
	{
		SET_BIT(GPIOx_BSRR_Set(Copy_u8PortName), Copy_u8PinNumber);
	}
	else
	{
		SET_BIT(GPIOx_BSRR_Reset(Copy_u8PortName), Copy_u8PinNumber);
	}
}

void GPIO_SetChannelValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8 Copy_u8ChannelLength, u16 Copy_u8Value)
{
	GPIOx_BSRR_Set(Copy_u8PortName)   = BitManipulationSetBits(GPIOx_BSRR_Set(Copy_u8PortName), Copy_u8PinNumber, Copy_u8ChannelLength, Copy_u8Value);
	GPIOx_BSRR_Reset(Copy_u8PortName) = BitManipulationSetBits(GPIOx_BSRR_Reset(Copy_u8PortName), Copy_u8PinNumber, Copy_u8ChannelLength, ~(Copy_u8Value));
	/* GPIOx_ODR(Copy_u8PortName) = BitManipulationSetBits(GPIOx_ODR(Copy_u8PortName), Copy_u8PinNumber, Copy_u8ChannelLength, Copy_u8Value); */
}

void GPIO_SetPortValue(u8 Copy_u8PortName, u16 Copy_u8Value)
{
	GPIOx_BSRR_Set(Copy_u8PortName)   = Copy_u8Value;
	GPIOx_BSRR_Reset(Copy_u8PortName) = ~(Copy_u8Value);
	/* GPIOx_ODR(Copy_u8PortName) = Copy_u8value; */
}

u8 GPIO_GetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u16* Copy_pu8Value)
{
	u8 Local_u8ErrorStatus = OK;
	
	if(Copy_pu8Value != NULL)
	{
		(*Copy_pu8Value) = READ_BIT(GPIOx_IDR(Copy_u8PortName), Copy_u8PinNumber);
	}
	else
	{
		Local_u8ErrorStatus = NULL_POINTER;
	}
	
	return Local_u8ErrorStatus;
}

u8 GPIO_GetChannelValue(u8 Copy_u8PortName, u8 Copy_u8PinNumber, u8 Copy_u8ChannelLength, u16* Copy_pu8Value)
{
	u8 Local_u8ErrorStatus = OK;
	
	if(Copy_pu8Value != NULL)
	{
		(*Copy_pu8Value) = BitManipulationGetBits(GPIOx_IDR(Copy_u8PortName), Copy_u8PinNumber, Copy_u8ChannelLength);
	}
	else
	{
		Local_u8ErrorStatus = NULL_POINTER;
	}
	
	
	return Local_u8ErrorStatus;
}
