#include <REGX52.H>

//void main()
//{
//	P2=~0xfe;//1110 1110
//	while(1)
//	{
//		
//	}
//	}


	unsigned int i=50000;

void main()
{
	while(1)
	{
		while(i--)
			P2=~0X01;
		while(i--)
			P2=~0x02;
		while(i--)
			P2=~0x04;
		while(i--)
			P2=~0x08;
		while(i--)
			P2=~0x10;
		while(i--)
			P2=~0x20;
		while(i--)
			P2=~0x40;
		while(i--)
			P2=~0x80;
	}
}

//void main()
//{
//	unsigned int i=50000;
//	while(1)
//	{
//		while(i--)
//		P2=0x55;
//		while(i--)
//		P2=~0x55;	
//	}
//}
