/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : MCAL                      ************/
/************ Version : 1.00                      ************/
/************ SWC     : PORT                      ************/
/*************************************************************/
/*************************************************************/

#include "STD_Types.h"
#include "Bit_Manipulation.h"

#include "PORT_registers.h"
#include "PORT_config.h"
#include "PORT_private.h"
#include "PORT_interface.h"


void PORT_voidInit(void)
{
	/* Load the mode to GPIOx_MODER register */
	GPIOA_MODER = GPIOA_Mode;
	GPIOB_MODER = GPIOB_Mode;
	GPIOC_MODER = GPIOC_Mode;
	
	/* Load the output type to GPIOx_OTYPER register */
	GPIOA_OTYPER = GPIOA_Output_Type;
	GPIOB_OTYPER = GPIOB_Output_Type;
	GPIOC_OTYPER = GPIOC_Output_Type;
	
	/* Load Speed to OSPEEDR */
	GPIOA_OSPEEDR = GPIOA_Speed ;
    GPIOB_OSPEEDR = GPIOB_Speed ;
    GPIOC_OSPEEDR = GPIOC_Speed ;
	
	/* Load Pull up or Pull down to GPIOx_PUPDR register */
	GPIOA_PUPDR = GPIOA_PUPD ;
	GPIOB_PUPDR = GPIOB_PUPD ;
	GPIOC_PUPDR = GPIOC_PUPD ;
	
	/* configuration locking */
#if Lock_key == Active_Lock
	SET_BIT(GPIOA_LCKR, GPIOx_LCKR_LCKK);
	SET_BIT(GPIOB_LCKR, GPIOx_LCKR_LCKK);
	SET_BIT(GPIOC_LCKR, GPIOx_LCKR_LCKK);
	GPIOA_LCKR = GPIOA_Lock | BitManipulationSetBits(GPIOA_LCKR, 16, 16, 0x0000);
	GPIOB_LCKR = GPIOB_Lock | BitManipulationSetBits(GPIOA_LCKR, 16, 16, 0x0000);
	GPIOC_LCKR = GPIOC_Lock | BitManipulationSetBits(GPIOA_LCKR, 16, 16, 0x0000);
	SET_BIT(GPIOA_LCKR, GPIOx_LCKR_LCKK);
	SET_BIT(GPIOB_LCKR, GPIOx_LCKR_LCKK);
	SET_BIT(GPIOC_LCKR, GPIOx_LCKR_LCKK);
#endif

	/* Alternative function selection */
	GPIOA_AFRL = BitManipulationGetBits(GPIOA_AF, 0, 32);
	GPIOB_AFRL = BitManipulationGetBits(GPIOB_AF, 0, 32);
	GPIOC_AFRL = BitManipulationGetBits(GPIOC_AF, 0 ,32);
	
	GPIOA_AFRH = BitManipulationGetBits(GPIOA_AF, 32, 32);
    GPIOB_AFRH = BitManipulationGetBits(GPIOB_AF, 32, 32);
    GPIOC_AFRH = BitManipulationGetBits(GPIOC_AF, 32, 32);
	
}
