#include <REGX52.H>
#include"LCD1602.H"
#include"delay.h"

int result = 0;


void main()
{	
	LCD_Init();
//	LCD_ShowChar(1,1,'A');
//	LCD_ShowString(1,3,"hello world");
//	LCD_ShowNum(1,14,123,3);
//	LCD_ShowSignedNum(2,1,-66,2);
//	LCD_ShowHexNum(2,5,0x8f,2);
//	LCD_ShowBinNum(2,8,0x8f,8 );

	
	while(1)
	{
		result++;
		delay(1000);
		LCD_ShowNum(1,1,result,3);
	}

}