#include<reg51.h>


sbit WAVE = P2^1;
void timer0() interrupt 1
{
	WAVE =~WAVE;
	TH0 = 0XFF;
	TL0 = 0XF5;
}

void main(void)
{
	TMOD  =0X05;
	TH0 = 0XFF;
	TL0 =0XF5;
	IE = 0X82;
	TR0 = 1;
	while(1);
}