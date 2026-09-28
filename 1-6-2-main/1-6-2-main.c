#include <REGX52.H>
#include"delay.h"
#include"LCD1602.h"
#include"MatrixKey.h"

unsigned char num = 0;

void main()
{
	
	LCD_Init();

	while(1)
	{
		num = matrixkey();//当键盘没有按下时,matrixkey一直是返回0值，按下后获得按键编号
		if(num!=0)//判断num是否有一个输入值，当按下按键获得一个返回值时进入，显示编号，松手后返回值为0，这时进入失败，使LCD显示编号能哦长久存在
		{
			LCD_ShowNum(1,1,num,2);
		}
		
	}
}
