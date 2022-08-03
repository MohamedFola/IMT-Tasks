/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : HCAL " STM32F401 "        ************/
/************ Version : 1.00                      ************/
/************ SWC     : Keypad                    ************/
/*************************************************************/
/*************************************************************/


#ifndef _KEYPAD_CONFIG_H_
#define _KEYPAD_CONFIG_H_

/* Choose the PORT you will use in the hardware for Rows and Columns */
/* NOTE: get the options form " GPIO_interface.h " file */
#define KPD_ROWS_PORT         GPIO_PORTB
#define KPD_COLUMNS_PORT      GPIO_PORTB


/* Choose the PINS you will use in the hardware for Rows and Columns */
/* NOTE: get the options form " GPIO_interface.h " file */
#define KPD_COLUMN0_PIN       GPIO_PORTB_Pin1
#define KPD_COLUMN1_PIN       GPIO_PORTB_Pin2
#define KPD_COLUMN2_PIN       GPIO_PORTB_Pin5
#define KPD_COLUMN3_PIN       GPIO_PORTB_Pin6

#define KPD_ROW0_PIN          GPIO_PORTB_Pin7
#define KPD_ROW1_PIN          GPIO_PORTB_Pin8
#define KPD_ROW2_PIN          GPIO_PORTB_Pin9
#define KPD_ROW3_PIN          GPIO_PORTB_Pin10


/* Choose the keypad characters you want */
#define KPD_ARR_VALUES        {{1, 2, 3, 4},       \
							   {5, 6, 7, 8},       \
							   {9, 10, 11, 12},    \
							   {13, 14, 15, 16}}



#endif /* _KEYPAD_CONFIG_H_ */
