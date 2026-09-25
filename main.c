#include <REGX52.H>

//unsigned int i=50000;
//void main()
//{
//	while(i--)
//	P2=0xfe;
//	while(i--)
//	P2=0xff;
//}

#include<intrins.h>

void Delay500ms(void)	//@11.0592MHz
{
	unsigned char data i, j, k;

	_nop_();
	i = 4;
	j = 129;
	k = 119;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void main()
{
	P2=0xfe;
	Delay500ms();
	P2=0xff;
	Delay500ms();
}