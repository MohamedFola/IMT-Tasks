/*
--> this library is to avoid the problems faces the memory bacasue of data types when changing from one compiler to another 
*/

#ifndef STD_Types_H_
#define STD_Types_H_

typedef unsigned char        u8;
typedef signed   char        s8;

typedef unsigned short int   u16;  
typedef signed   short int   s16;  	    

typedef unsigned long  int   u32;  
typedef signed   long  int   s32;

typedef float                f32;

typedef double               f64;


#define NULL                 0

#define OK                   1
#define NOK   				 2
#define NULL_POINTER         3

#endif