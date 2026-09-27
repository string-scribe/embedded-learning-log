#include<regx52.h>
#include<intrins.h>

void delay(unsigned int xms)	//@11.0592MHz
{
	unsigned char data i, j;
	while(xms--)
		{
		_nop_();
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
		
		}
}

void main()
{
	unsigned char LED = 0;
	P2=0xfe;		
	while(1)
	{	

		if(P3_1==0)
		{
			delay(20);
			while(P3_1==0)
			delay(20);
			
			LED++;				
			if(LED>=8)
				LED=0;
			P2=~(0x01<<LED);
		}
		if(P3_0==0)
		{
			delay(20);
			while(P3_0==0)
			delay(20);
	
			if(LED==0)
				LED=8;
			LED--;
			P2=~(0x01<<LED);

		}
	}
}