#include<reg51.h>

void MSdelay(unsigned int itime)
{
	unsigned int i,j;
	for(i=0;i<itime;i++)
	for(j=0;j<1275;j++);
}

void main(void)
{
	unsigned char mynum[]="ABCDEF";
	unsigned char y,z;
	code unsigned char mydata[]="0123456789";
	for(y=0;y<6;y++)
	{
		P1=mynum[y];
		MSdelay(1000);
	}
	for(z=0;z<10;z++)
	{
		P2=mydata[z];
		MSdelay(1000);
	}
}