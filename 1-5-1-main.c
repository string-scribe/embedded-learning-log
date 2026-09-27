#include<regx52.h>

void nixie(unsigned char location,number)
{
	switch(location)
	{
		case 1:
			P2_4=1;P2_3=1;P2_2=1;break;
		case 2:
			P2_4=1;P2_3=1;P2_2=0;break;
		case 3:
			P2_4=1;P2_3=0;P2_2=1;break;
		case 4:
			P2_4=1;P2_3=0;P2_2=0;break;
		case 5:
			P2_4=0;P2_3=1;P2_2=1;break;
		case 6:
			P2_4=0;P2_3=1;P2_2=0;break;
		case 7:
			P2_4=0;P2_3=0;P2_2=1;break;
		case 8:
			P2_4=0;P2_3=0;P2_2=0;break;			
	}
	
	switch(number)
	{
		case 0:
			P0=0xbf;break;
		case 1:		
			P0=0x86;break;
		case 2:		
			P0=0xdb;break;
		case 3:		
			P0=0xcf;break;
		case 4:		
			P0=0xe6;break;
		case 5:		
			P0=0xed;break;
		case 6:		
			P0=0xfd;break;
		case 7:		
			P0=0x87;break;
		case 8:																
			P0=0xff;break;
		case 9:																		
			P0=0xef;break;
		
	}
}

void main()
{
	nixie(6,6);

	while(1)
	{
		
	}
}