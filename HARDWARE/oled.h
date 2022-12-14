#ifndef __OLED_H
#define __OLED_H

//#include "REG51.h"		  	 
#include "config.h"
	
#define OLED_CMD  0
#define OLED_DATA 1

#define OLED_SDA P33 //out
#define OLED_SCL P32 //OUT

//sbit OLED_RES =P1^2;//RES

#define OLED_SCL_Clr() OLED_SCL=0
#define OLED_SCL_Set() OLED_SCL=1

#define OLED_SDA_Clr() OLED_SDA=0
#define OLED_SDA_Set() OLED_SDA=1

//#define OLED_RES_Clr() OLED_RES=0
//#define OLED_RES_Set() OLED_RES=1

void OLED_ColorTurn(u8 i);
void OLED_DisplayTurn(u8 i);
void OLED_WR_Byte(u8 dat,u8 cmd);
void OLED_Set_Pos(u8 x, u8 y);
void OLED_Display_On();
void OLED_Display_Off();
void OLED_Clear();
void OLED_ShowChar(u8 x,u8 y,u8 chr,u8 sizey);
u32 oled_pow(u8 m,u8 n);
void OLED_ShowNum(u8 x,u8 y,u32 num,u8 len,u8 sizey);
void OLED_ShowString(u8 x,u8 y,u8 *chr,u8 sizey);
//void OLED_ShowChinese(u8 x,u8 y,u8 no,u8 sizey);
//void OLED_DrawBMP(u8 x,u8 y,u8 sizex, u8 sizey,u8 BMP[]);
void OLED_Init();

#endif  