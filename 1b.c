#include<reg51.h>

int main()
{
	unsigned int a=5,b=5,div;
	div = a/b;
	P2 = div;
}