/*************************************************************/
/*************************************************************/
/************ Author  : Mohamed Hassan Hassan     ************/
/************ Layer   : HAL " STM32F401 "         ************/
/************ Version : 1.00                      ************/
/************ SWC     : Seven Segment Display     ************/
/*************************************************************/
/*************************************************************/
/*************************************************************************

      --------------------------
     |             A            |
     |	        -------         |
0 <--|A	      ||	   ||       |
1 <--|B     F ||       || B     |
2 <--|C       ||   G   ||       |
3 <--|D		    -------         |
4 <--|E       ||       ||       |
5 <--|F	    E ||       || C     |
6 <--|G       ||       ||       |
7 <--|DP        -------	        | 
     |             D            |
      --------------------------
	   
--> Firstly for common anode : to turn a led on put '0' on the pin

                                           7 6 5 4 3 2 1 0
                                          DP G F E D C B A
for number 0 --> A, B, C, D, E, F      --> 1 1 0 0 0 0 0 0 --> 0xC0
for number 1 --> B, C                  --> 1 1 1 1 1 0 0 1 --> 0xF9
for number 2 --> A, B, D, E, G         --> 1 0 1 0 0 1 0 0 --> 0xA4
for number 3 --> A, B, C, D, G         --> 1 0 1 1 0 0 0 0 --> 0xB0
for number 4 --> B, C, F, G            --> 1 0 0 1 1 0 0 1 --> 0x99
for number 5 --> A, C, D, F, G         --> 1 0 0 1 0 0 1 0 --> 0x92
for number 6 --> A, C, D, E, F, G      --> 1 0 0 0 0 0 1 0 --> 0x82
for number 7 --> A, B, C               --> 1 1 1 1 1 0 0 0 --> 0xF8
for number 8 --> A, B, C, D, E, F, G   --> 1 0 0 0 0 0 0 0 --> 0x80
for number 9 --> A, B, C, D, F, G      --> 1 0 0 1 0 0 0 0 --> 0x90

----------------------------------------------------------------------

--> Secondly for common cathode : to turn a led on put '1' on the pin
                                  or you can easily change any '0' in 
								  common anode with '1'

                                           7 6 5 4 3 2 1 0
                                          DP G F E D C B A
for number 0 --> A, B, C, D, E, F      --> 0 0 1 1 1 1 1 1 --> 0x3F
for number 1 --> B, C                  --> 0 0 0 0 0 1 1 0 --> 0x06
for number 2 --> A, B, D, E, G         --> 0 1 0 1 1 0 1 1 --> 0x5B
for number 3 --> A, B, C, D, G         --> 0 1 0 0 1 1 1 1 --> 0x4F
for number 4 --> B, C, F, G            --> 0 1 1 0 0 1 1 0 --> 0x66
for number 5 --> A, C, D, F, G         --> 0 1 1 0 1 1 0 1 --> 0x6D
for number 6 --> A, C, D, E, F, G      --> 0 1 1 1 1 1 0 1 --> 0x7D
for number 7 --> A, B, C               --> 0 0 0 0 0 1 1 1 --> 0x07
for number 8 --> A, B, C, D, E, F, G   --> 0 1 1 1 1 1 1 1 --> 0x7F
for number 9 --> A, B, C, D, F, G      --> 0 1 1 0 1 1 1 1 --> 0x6F
*************************************************************************/


#ifndef _SEVSEG_INTERFACE_H_
#define _SEVSEG_INTERFACE_H_

#define Common_Cathode_Mode    0x00
#define Common_Anode_Mode      0xFF


typedef struct _SevSeg_ SevSeg;

struct _SevSeg_
{
	u8 Mode;
	u8 Port;
	u8 Starting_Pin;
	u8 Enable_port;
	u8 Enable_Pin;
};


void SevSeg_DipalyNumber(SevSeg Copy_SevSeg, u8 Copy_u8Number);


#endif
