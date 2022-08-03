#include "STD_Types.h"
#include "Bit_Manipulation.h"

#include "RCC_interface.h"
#include "PORT_interface.h"
#include "GPIO_interface.h"
#include "SevSeg_interface.h"
#include "KeyPad_interface.h"

void Delay();

int main(void)
{
	u8 Local_u8Data;

	/* RCC System clock init */
	RCC_voidSysClkInit();

	/* RCC Peripheral clock init */
	RCC_u8EnablePerClk(RCC_AHB1, AHB1_GPIOA);
	RCC_u8EnablePerClk(RCC_AHB1, AHB1_GPIOB);
	RCC_u8EnablePerClk(RCC_AHB1, AHB1_GPIOC);

	/* Port init */
	PORT_voidInit();

	SevSeg SSG = {Common_Anode_Mode, GPIO_PORTA, GPIO_PORTA_Pin0, GPIO_PORTB, GPIO_PORTB_Pin0};

	while(1)
	{
		do
		{
				Local_u8Data = KPD_GetPressedKey();
		}while(Local_u8Data == KPD_NO_PRESSED_KEY);

		SevSeg_DipalyNumber(SSG, Local_u8Data);

	}

	return 0;
}

void Delay()
{
	for(int i=0; i<2000000; i++)
	{
		asm("NOP");
	}
}
