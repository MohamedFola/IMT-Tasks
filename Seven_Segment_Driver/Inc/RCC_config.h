/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : MCAL                      ************/
/************ Version : 1.00                      ************/
/************ SWC     : RCC                       ************/
/*************************************************************/
/*************************************************************/

#ifndef _RCC_CONFIG_H_
#define _RCC_CONFIG_H_


/********************************
	Clock Security Options:
		1) Enabled 
		2) Disabled 
********************************/
#define Clock_Security    Disabled


/************************************************************************************************************************************************ 
	Options:
		1) Enabled   --> to enable source of clock not to choose it as system clock
		2) Disabled  --> to disable source of clock
		
	NOTE --> you can enable all of them but only one will be used for System clock and you have to choose this one at the next configuration
************************************************************************************************************************************************/
#define HSE_Mode   Enabled
#define HSI_Mode   Disabled
#define PLL_Mode   Disabled


/********************
	SYSCLK Options:
		1) RCC_HSE
		2) RCC_HSI
		3) RCC_PLL
********************/
#define RCC_SYSCLK  RCC_HSE


/*************************************************************************************************/
/****************** If You Choose HSE as SYSCLK Set these Configurations *************************/
/*************************************************************************************************/

/****************************************************************************************************************
	Options:
		1) HSE_BYPASS       --> if you use external clock source ' using one pin OSCIN '
		2) HSE_NOT_BYPASS   --> if you use external crystal/ceramic oscillator ' using two pins OSCIN/OSCOUT '
****************************************************************************************************************/
#define HSE_Source  HSE_NOT_BYPASS  


/*************************************************************************************************/
/****************** If You Choose PLL as SYSCLK Set these Configurations *************************/
/*************************************************************************************************/

/*********************************************
	Main and Audio PLL Clock Source Options:
		1) PLL_HSI 
		2) PLL_HSE 
*********************************************/
#define PLL_Source    PLL_HSE


/*******************************************************************************************
	PLLQ: Main PLL (PLL) division factor for USB OTG FS, SDIO and random number generator 
	clocks
	PLLQ Options: number between 1 and 15 or Choose PLL_Default
*******************************************************************************************/
#define PLLQ  PLLQ_Default


/*****************************************************************
	PLLP: Main PLL (PLL) division factor for main system clock
	PLLP Options:
		1) PLLP_2
		2) PLLP_4
		3) PLLP_6
		4) PLLP_8
		5) PLLP_Default
*****************************************************************/
#define PLLP  PLLP_Default


/*********************************************************************
	PLLN: Main PLL (PLL) multiplication factor for VCO
	PLLN Options: Choose number between 2 and 432 or PLLN_Default
*********************************************************************/
#define PLLN  PLLN_Default


/*************************************************************************************
	PLLM: Division factor for the main PLL (PLL) and audio PLL (PLLI2S) input clock
	PLLM Options: Choose number between 2 and 63 or PLLM_Default
*************************************************************************************/
#define PLLM  PLLM_Default



/*************************************************************************************************/
/*********************** Microcontroller Clock Output Configuration ******************************/
/*************************************************************************************************/

/********************************************
	Microcontroller Clock Output Options:
		1) Enabled
		2) Disabled
********************************************/
#define MCO1_Mode   Disabled
#define MCO2_Mode   Disabled  


/*******************************************************
	Microcontroller Clock Output Pre-scaler Options:
		1) No_Division
		2) Division_By_2
		3) Division_By_3
		4) Division_By_4
		5) Division_By_5
*******************************************************/
#define MCO1_PreScaler    No_Division
#define MCO2_PreScaler    No_Division



/*************************************************************************************************/
/************************* AHB & APB1 & APB2 Configurations  *************************************/
/*************************************************************************************************/

/**************************************
	APB1 & APB2 Pre-Scaler Options:
	 1) AHB_Clock_Not_Divided
	 2) AHB_Clock_Divided_By_2
	 3) AHB_Clock_Divided_By_4
	 4) AHB_Clock_Divided_By_8
	 5) AHB_Clock_Divided_By_16
**************************************/
#define APB1_PreScaler    AHB_Clock_Not_Divided
#define APB2_PreScaler    AHB_Clock_Not_Divided

/*************************************
	AHB Pre-Scaler Options:
	 1) System_Clock_Not_Divided
	 2) System_Clock_Divided_By_2
	 3) System_Clock_Divided_By_4
	 4) System_Clock_Divided_By_8
	 5) System_Clock_Divided_By_16
	 6) System_Clock_Divided_By_64
	 7) System_Clock_Divided_By_128
	 8) System_Clock_Divided_By_256
	 9) System_Clock_Divided_By_512
*************************************/
#define AHB_PreScaler    System_Clock_Not_Divided



#endif /* _RCC_CONFIG_H_ */
