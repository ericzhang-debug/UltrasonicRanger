/***************	功能说明	****************

本文件为STC8系列的延时程序,用户几乎可以不修改这个程序.

******************************************/

#include	"delay.h"

//========================================================================
// 函数: void delay_ms(unsigned char ms)
// 描述: 延时函数。
// 参数: ms,要延时的ms数, 这里只支持1~255ms. 自动适应主时钟.
// 返回: none.
// 版本: VER1.0
// 日期: 2021-3-9
// 备注: 
//========================================================================
void delay_ms(unsigned char ms)
{
	unsigned int i;
	do{
		i = MAIN_Fosc / 10000;
		while(--i);
	}while(--ms);
}/*
void delay_us(unsigned char us)	//@11.0592MHz
{	
	unsigned char n=0;
	for(n=0;n<us;n++){
	unsigned char i;

	_nop_();
	_nop_();
	i = 1;
	while (--i);
}*/
	/*
void delay_us(unsigned char us)	//@12MHz
{	
	unsigned char n=0;
	for(n=0;n<us;n++){

	unsigned char i;
	i = 2;
	while (--i);

}
}
*/
void delay_us(unsigned char us)		//@24.000MHz
{
	unsigned char n=0;
	for(n=0;n<us;n++){
	unsigned char i;

	i = 6;
	while (--i);}
}

