/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : HAL " STM32F401 "         ************/
/************ Version : 1.00                      ************/
/************ SWC     : Seven Segment Display     ************/
/*************************************************************/
/*************************************************************/


#ifndef _SEVSEG_CONFIG_H_
#define _SEVSEG_CONFIG_H_

/* 
	Choose any Special Character to be your Error Symbol:
	A --> Char_A
	C --> Char_C
	E --> Char_E
	F --> Char_F
*/
#define SSD_ERROR           Char_E
       
u16 SSD_NUMBER_ARRAY[11]  = {SSD_NUMBER0,
	                        SSD_NUMBER1,
	                        SSD_NUMBER2,
	                        SSD_NUMBER3,
	                        SSD_NUMBER4,
	                        SSD_NUMBER5,
	                        SSD_NUMBER6,
	                        SSD_NUMBER7,
	                        SSD_NUMBER8,
	                        SSD_NUMBER9,
	                        SSD_ERROR};

#define SSD_MAX_DISPLAY		9
#define SSD_ERROR_INDEX     10


#endif
