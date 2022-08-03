/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : HCAL " STM32F401 "        ************/
/************ Version : 1.00                      ************/
/************ SWC     : Keypad                    ************/
/*************************************************************/
/*************************************************************/

#include "STD_Types.h"
#include "GPIO_interface.h"

#include "KeyPad_config.h"
#include "KeyPad_interface.h"
#include "KeyPad_private.h"

u8 KPD_GetPressedKey()
{
	/* Variable to hold the pressed key */
	u8 Local_u8PressedKey = KPD_NO_PRESSED_KEY;

	/* Iterators for the two for loops, one for looping rows and the second for looping columns */
	u8 Local_u8RowIndex, Local_u8ColumnIndex;

	/* Variable to hold the readings of row pins */
	u16 Local_u16PinState;

	/* Array to hold the values of the keypad */
	/* NOTE: go to " KeyPad_config.h " to choose the values of the keypad */
	static u8 Local_u8KPDArr[KPD_ROW_NUMBER][KPD_COLUMN_NUMBER] = KPD_ARR_VALUES;

	/* Arrays to hold the pins for the rows and columns */
	/* NOTE: go to " KeyPad_config.h " to choose the pins used in hardware */
	static u8 Local_u8KPDColumnArr[KPD_COLUMN_NUMBER] = {KPD_COLUMN0_PIN, KPD_COLUMN1_PIN, KPD_COLUMN2_PIN, KPD_COLUMN3_PIN};
	static u8 Local_u8KPDRowArr[KPD_ROW_NUMBER]       = {KPD_ROW0_PIN, KPD_ROW1_PIN, KPD_ROW2_PIN, KPD_ROW3_PIN};
	
	for(Local_u8ColumnIndex = 0; Local_u8ColumnIndex < KPD_COLUMN_NUMBER; Local_u8ColumnIndex++)
	{
		/* Activate current Column */
		GPIO_SetPinValue(KPD_COLUMNS_PORT, Local_u8KPDColumnArr[Local_u8ColumnIndex], GPIO_PIN_LOW);
		
		for(Local_u8RowIndex = 0; Local_u8RowIndex < KPD_ROW_NUMBER; Local_u8RowIndex++)
		{
			/* Read current Row */
			GPIO_GetPinValue(KPD_ROWS_PORT, Local_u8KPDRowArr[Local_u8RowIndex], &Local_u16PinState);
			
			/* Check the PIN Value */
			if(GPIO_PIN_LOW == Local_u16PinState)
			{
				/* Polling(Busy Waiting) --> waiting for the user to release the button */
				while(GPIO_PIN_LOW == Local_u16PinState) GPIO_GetPinValue(KPD_ROWS_PORT, Local_u8KPDRowArr[Local_u8RowIndex], &Local_u16PinState);

				/* Put the value of the pressed key in the variable responsible for holding the pressed key */
				Local_u8PressedKey = Local_u8KPDArr[Local_u8RowIndex][Local_u8ColumnIndex];

				/* return for the function as I don't want to check the others conditions */
				return Local_u8PressedKey;
			}
		}
		
		/* Deactivate current Column */
		GPIO_SetPinValue(KPD_COLUMNS_PORT, Local_u8KPDColumnArr[Local_u8ColumnIndex], GPIO_PIN_HIGH);
	}
	
	
	return Local_u8PressedKey;
}
