#include<regx52.h>

unsigned char num_type[]={0xbf,0x86,0xdb,0xcf,0xe6,0xed,0xfd,0x87,0xff,0xef};

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
	
	P0 = num_type[number];
}

void main()
{
	nixie(6,6);

	while(1)
	{
		
	}
}