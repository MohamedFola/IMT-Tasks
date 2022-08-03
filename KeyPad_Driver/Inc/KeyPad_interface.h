/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : HCAL " STM32F401 "        ************/
/************ Version : 1.00                      ************/
/************ SWC     : Keypad                    ************/
/*************************************************************/
/*************************************************************/


#ifndef _KEYPAD_INTERFACE_H_
#define _KEYPAD_INTERFACE_H_

/* The default value if no key is pressed */
#define KPD_NO_PRESSED_KEY    0xFF

u8 KPD_GetPressedKey();


#endif /* _KEYPAD_INTERFACE_H_ */
