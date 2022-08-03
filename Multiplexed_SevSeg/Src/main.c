#include "STD_Types.h"
#include "Bit_Manipulation.h"

#include "RCC_interface.h"
#include "PORT_interface.h"
#include "GPIO_interface.h"
#include "SevSeg_interface.h"

void delay_ms(u8 Copy_u8Input);

int main(void)
{
	RCC_voidSysClkInit();
	RCC_u8EnablePerClk(RCC_AHB1, AHB1_GPIOA);

	PORT_voidInit();

	SevSeg SevenSegment1 = {Common_Anode_Mode, GPIO_PORTA, GPIO_PORTA_Pin0, GPIO_PORTA, GPIO_PORTA_Pin11};
	SevSeg SevenSegment2 = {Common_Anode_Mode, GPIO_PORTA, GPIO_PORTA_Pin0, GPIO_PORTA, GPIO_PORTA_Pin12};

	while(1)
	{
		SevSeg_DipalyNumber(SevenSegment1, 8);
		delay_ms(10);
		GPIO_SetPinValue(GPIO_PORTA, GPIO_PORTA_Pin11, GPIO_PIN_LOW);
		SevSeg_DipalyNumber(SevenSegment2, 7);
		delay_ms(10);
		GPIO_SetPinValue(GPIO_PORTA, GPIO_PORTA_Pin12, GPIO_PIN_LOW);
	}

	return 0;
}


void delay_ms(u8 Copy_u8Input)
{
	for(int i = 0; i < 1000 * Copy_u8Input; i++)
	{
		asm("NOP");
	}
}
