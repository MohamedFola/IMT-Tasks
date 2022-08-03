#include "STD_Types.h"
#include "Bit_Manipulation.h"

#include "RCC_interface.h"
#include "PORT_interface.h"
#include "GPIO_interface.h"

int main(void)
{
	/* initiating the system clock and peripheral clock */
    RCC_voidSysClkInit();
    RCC_u8EnablePerClk(RCC_AHB1, AHB1_GPIOB);

    /* Port init */
    PORT_voidInit();


    u16 Local_u16Data;

	while(1)
	{
		GPIO_GetChannelValue(GPIO_PORTB, GPIO_PORTB_Pin0, 3, &Local_u16Data);
		GPIO_SetChannelValue(GPIO_PORTB, GPIO_PORTB_Pin5, 3, Local_u16Data);
	}
}
