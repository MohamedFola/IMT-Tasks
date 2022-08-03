#include "STD_Types.h"
#include "Bit_Manipulation.h"

#include "Software_Delay.h"

#include "RCC_interface.h"
#include "PORT_interface.h"
#include "GPIO_interface.h"
#include "LCD_interface.h"

int main(void)
{
	char Local_u8Data[LCD_Special_Character_Size] = {
			  	  	  	  	  	  	  	  	       0b00010001,
												   0b00010001,
												   0b00010001,
												   0b00010001,
												   0b00011111,
												   0b00010001,
												   0b00010001,
												   0b00010001
												   };

	RCC_voidSysClkInit();
	RCC_u8EnablePerClk(RCC_AHB1, AHB1_GPIOA);
	RCC_u8EnablePerClk(RCC_AHB1, AHB1_GPIOC);

	PORT_voidInit();

	LCD_voidInit();

	LCD_voidSendString("ABCDEFGHOO", LCD_Row_1, LCD_Column_8);

	LCD_voidWriteNumber(23, LCD_Row_2, LCD_Column_9);






	while(1)
	{
//		LCD_voidSendString("1n78jhgieo5984whteoitwi");
//
//		_delay_ms(3000);
//
//		LCD_voidSendCommand(LCD_Clear_Display);
//
//		LCD_voidSetCursor(LCD_Row_1, LCD_Column_1);
//
//		LCD_voidSendString("aBcD");
//
//		_delay_ms(3000);

	}
}
