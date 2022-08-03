/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : MCAL                      ************/
/************ Version : 1.00                      ************/
/************ SWC     : RCC                       ************/
/*************************************************************/
/*************************************************************/

#include "STD_Types.h"
#include "Bit_Manipulation.h"

#include "RCC_registers.h"
#include "RCC_private.h"
#include "RCC_config.h"
#include "RCC_interface.h"


void RCC_voidSysClkInit(void)
{
	
#if Clock_Security == Enabled
	SET_BIT(RCC_CR, RCC_CR_CSSON);
	
#endif

	
#if HSE_Mode == Enabled || PLL_Source == PLL_HSE

	/* enable HSE source */
	DIGITAL_SET_OR_CLEAR(RCC_CR, RCC_CR_HSEBYP, HSE_Source);

	/* enable HSE */
	SET_BIT(RCC_CR, RCC_CR_HSEON);                   
	
	/* wait until HSE oscillator is stable */
	while(READ_BIT(RCC_CR, RCC_CR_HSERDY) == 0); 
	
#endif
	
#if HSI_Mode == Enabled || PLL_Source == PLL_HSI
	
	/* enable HSI */
	SET_BIT(RCC_CR, RCC_CR_HSION);
	
	/* wait until HSI oscillator is stable */
	while(READ_BIT(RCC_CR, RCC_CR_HSIRDY) == 0);    
	
#endif

#if PLL_Mode == Enabled
	
	/* Select the PLL Clock Source */
	DIGITAL_SET_OR_CLEAR(RCC_PLLCFGR, RCC_PLLCFGR_PLLSRC, PLL_Source);
	
	/* Select PLLQ */
	RCC_PLLCFGR = BitManipulationSetBits(RCC_PLLCFGR, RCC_PLLCFGR_PLLQ0, 4, PLLQ);
	
	/* Select PLLP */
	RCC_PLLCFGR = BitManipulationSetBits(RCC_PLLCFGR, RCC_PLLCFGR_PLLP0, 2, PLLP);
	
	/* Select PLLM */
	RCC_PLLCFGR = BitManipulationSetBits(RCC_PLLCFGR, RCC_PLLCFGR_PLLM0, 6, PLLM);
	
	/* Select PLLN */
	RCC_PLLCFGR = BitManipulationSetBits(RCC_PLLCFGR, RCC_PLLCFGR_PLLN, 9, PLLN);
	
	/* enable PLLN */
	SET_BIT(RCC_CR, RCC_CR_PLLON);
	
	/* wait until PLL is locked */
	while(READ_BIT(RCC_CR, RCC_CR_PLLRDY) == 0); 

#endif


	/* Select the SYSCLK Source */
	RCC_CFGR = BitManipulationSetBits(RCC_CFGR, RCC_CFGR_SW0, 2, RCC_SYSCLK);
	

	/* AHB & APB1 & APB2 Configurations */
	RCC_CFGR = BitManipulationSetBits(RCC_CFGR, RCC_CFGR_PPRE2, 3, APB2_PreScaler);
	RCC_CFGR = BitManipulationSetBits(RCC_CFGR, RCC_CFGR_PPRE1, 3, APB1_PreScaler);
	RCC_CFGR = BitManipulationSetBits(RCC_CFGR, RCC_CFGR_HPRE, 4, AHB_PreScaler);

}


u8 RCC_u8EnablePerClk(u8 Copy_u8Bus,u8 Copy_u8Peripheral)
{
	u8 Local_u8ErrorStatus = OK;
	
	if(Copy_u8Peripheral < Peripheral_Max_Number)
	{
		switch(Copy_u8Bus)
		{
			case RCC_AHB1: SET_BIT(RCC_AHB1ENR, Copy_u8Peripheral); break;
			case RCC_AHB2: SET_BIT(RCC_AHB2ENR, Copy_u8Peripheral); break;
			case RCC_APB1: SET_BIT(RCC_APB1ENR, Copy_u8Peripheral); break;
			case RCC_APB2: SET_BIT(RCC_APB2ENR, Copy_u8Peripheral); break;
		}
	}
	else
	{
		Local_u8ErrorStatus = NOK;
	}
	
	return Local_u8ErrorStatus;
}


u8 RCC_u8DisablePerClk(u8 Copy_u8Bus,u8 Copy_u8Peripheral)
{
	u8 Local_u8ErrorStatus = OK;
	
	if(Copy_u8Peripheral < Peripheral_Max_Number)
	{
		switch(Copy_u8Bus)
		{
			case RCC_AHB1: CLEAR_BIT(RCC_AHB1ENR, Copy_u8Peripheral); break;
			case RCC_AHB2: CLEAR_BIT(RCC_AHB2ENR, Copy_u8Peripheral); break;
			case RCC_APB1: CLEAR_BIT(RCC_APB1ENR, Copy_u8Peripheral); break;
			case RCC_APB2: CLEAR_BIT(RCC_APB2ENR, Copy_u8Peripheral); break;
		}
	}
	else
	{
		Local_u8ErrorStatus = NOK;
	}
	
	return Local_u8ErrorStatus;
}
