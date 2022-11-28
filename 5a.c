#include<reg51.h>
sbit t0=P3^4;

void main(void)
{
	t0 =1;//input port
	TMOD =0X05;
	while(1)
	{
		TH0 = 0XFF;
		TL0 = 0XF5;
		TR0 = 1;
		while(TF0 == 0)
		{
			P1 = TL0;
		}
		TR0 = 0;
		TF0 =0;
	}
}