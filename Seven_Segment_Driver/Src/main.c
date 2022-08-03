#include "STD_Types.h"
#include "Bit_Manipulation.h"

#include "RCC_interface.h"
#include "PORT_interface.h"
#include "GPIO_interface.h"
#include "SevSeg_interface.h"

void Delay();

int main(void)
{
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
		GPIO_SetPinValue(GPIO_PORTA, GPIO_PORTA_Pin15, GPIO_PIN_HIGH);
		SevSeg_DipalyNumber(SSG, 8);
		Delay();
		SevSeg_DipalyNumber(SSG, 0);
		Delay();
		SevSeg_DipalyNumber(SSG, 1);
		Delay();
		SevSeg_DipalyNumber(SSG, 9);
		Delay();
		SevSeg_DipalyNumber(SSG, 6);
		Delay();
		SevSeg_DipalyNumber(SSG, 23);
		Delay();
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
