#include "delay.h"
#include "HCSR40.h"
void	HCSR40_SEND()
{
	P54=0;
	delay_us(2);
	P54=1;
	delay_us(10);
	P54=0;
	delay_us(10);
}

unsigned int GetTime()
{
	unsigned int time = 0;
	time=TH0*256+TL0;
	return time;
}

void StartTimer()
{
	TH0=0;
	TL0=0;
	TR0=1;
}

void StopTimer()
{
	TR0=0;
}

double GetDistance()
{
	double distance;
	distance=(double)GetTime()*0.0017;
	return distance;
}