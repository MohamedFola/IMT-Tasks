/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : HAL " STM32F401 "         ************/
/************ Version : 1.00                      ************/
/************ SWC     : Seven Segment Display     ************/
/*************************************************************/
/*************************************************************/


#include "STD_Types.h"
#include "Bit_Manipulation.h"

#include "GPIO_Interface.h"

#include "SevSeg_interface.h"
#include "SevSeg_private.h"
#include "SevSeg_config.h"


void SevSeg_DipalyNumber(SevSeg Copy_SevSeg, u8 Copy_u8Number)
{
	/* 
		This Equation is used to limit the indices used to the array if the user entered a wrong index. 
		if the user entered a number between 0 - 10 the SSD will display the the corresponding value of this index.
		but if the user entered a number greater than the array size the index will be the index of Error.
	*/
	u8 SSD_NUMBER_INDEX = ((Copy_u8Number <= SSD_MAX_DISPLAY) * Copy_u8Number) + (SSD_ERROR_INDEX * (Copy_u8Number > SSD_MAX_DISPLAY));
	
	GPIO_SetPinValue(Copy_SevSeg.Enable_port, Copy_SevSeg.Enable_Pin, READ_BIT(Copy_SevSeg.Mode, 0));
	
	GPIO_SetChannelValue(Copy_SevSeg.Port, Copy_SevSeg.Starting_Pin, 8, (Copy_SevSeg.Mode) ^ (SSD_NUMBER_ARRAY[SSD_NUMBER_INDEX]));
}
