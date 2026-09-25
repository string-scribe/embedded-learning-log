#include<regx52.h>
#include<intrins.h>

void Delay1ms(unsigned int xms)	//@11.0592MHz
{
	while(xms){
	unsigned char data i, j;

	_nop_();
	i = 2;
	j = 199;
	do
	{
		while (--j);
	} while (--i);
	xms--;
}
}


void main()
{
	while(1){
				P2=0xfe;
		 Delay1ms(1000);
				P2=0xfd;
		 Delay1ms(100);
				P2=0xfb;
		 Delay1ms(100);
				P2=0xf7;
		 Delay1ms(1000);	
				P2=0xef;
		 Delay1ms(100);
				P2=0xdf;
		 Delay1ms(100);	
				P2=0xbf;
		 Delay1ms(500);	
				P2=0x7f;
		 Delay1ms(500);

	}
}