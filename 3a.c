#include<reg51.h>

sbit sw1=P0^0;
sbit sw2=P0^1;
sbit sw3=P0^2;
sbit sw4=P0^3;
sbit LED1 = P1^0;
sbit LED2 = P1^1;
sbit LED3 = P1^2;
sbit LED4 = P1^3;

int main(void)
{
	P1=0X00;
	while(1)
	{
		if((sw1==0 && sw2!=0 && sw3 !=0 && sw4!=0))
		{
			LED1 = 1;
			LED2 = 0;
			LED3 = 0;
			LED4 = 0;
		}
		if((sw1!=0 && sw2==0 && sw3 !=0 && sw4!=0))
		{
			LED1 = 0;
			LED2 = 1;
			LED3 = 0;
			LED4 = 0;
		}
		if((sw1!=0 && sw2!=0 && sw3 ==0 && sw4!=0))
		{
			LED1 = 0;
			LED2 = 0;
			LED3 = 1;
			LED4 = 0;
		}
	 
		if((sw1!=0 && sw2!=0 && sw3 !=0 && sw4==0))
		{
			LED1 = 0;
			LED2 = 0;
			LED3 = 0;
			LED4 = 1;
		}
	}
}