/***************	����˵��	****************

���ļ�ΪSTC8ϵ�е���ʱ����,�û��������Բ��޸��������.

******************************************/

#include	"delay.h"

//========================================================================
// ����: void delay_ms(unsigned char ms)
// ����: ��ʱ������
// ����: ms,Ҫ��ʱ��ms��, ����ֻ֧��1~255ms. �Զ���Ӧ��ʱ��.
// ����: none.
// �汾: VER1.0
// ����: 2021-3-9
// ��ע: 
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

