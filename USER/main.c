#include "config.h"
#include "delay.h"
#include "init.h"
#include "oled.h"
#include "HCSR40.h"
#include <stdio.h>

#define TRIG  P54 //pp
#define ECHO P55	//pullin
#define SDA P33 //pp
#define SCL P32 //pp

void main()
{
	char distance_array[15];
	double distance;
	EA = 1;
	
	GPIO_init();
	
	OLED_Init();
	OLED_ColorTurn(0);
  OLED_DisplayTurn(0);
	//START
	delay_ms(100);
	OLED_Clear();
	OLED_ShowString(30,2,"Loading...",16);
	OLED_ShowString(80,7,"V1.01",8);
	delay_ms(200);
	OLED_Clear();
	while(1)
	{
		//English Display
		OLED_ShowString(10,1,"Distance:",16);
		
		//Chinese Display
		
		
		HCSR40_SEND();
		while(ECHO==0);
		StartTimer();
		while(ECHO==1);
		StopTimer();
		
		distance=GetDistance();
		//OLED_ShowString(20,5,&distance,16);
		//char distance_array[(sizeof(distance)+5)];
		
		sprintf(distance_array,"%.4f",distance);
		OLED_ShowString(10,4,distance_array,16);
		
		
		delay_ms(200);
	}
}