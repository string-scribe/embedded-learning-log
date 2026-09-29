#include <REGX52.H>
#include"delay.h"
#include"LCD1602.h"
#include"MatrixKey.h"

unsigned int password = 0;
unsigned char keynum,i = 0;

void main()
{
	
	LCD_Init();
	LCD_ShowString(1,1,"PassWord:");
	while(1)
	{
		keynum = matrixkey();
		if(keynum!=0)
		{
			if(keynum<=10&&i<4)
			{
				password=password*10;
				password=password+keynum%10;
				LCD_ShowNum(2,1,password,4);
				i++;
			}
			
			if(keynum==11)
			{
					if(password==2345)//密码
						{
							LCD_ShowString(1,14,"OK ");
							password = 0;
							i = 0;
							LCD_ShowNum(2,1,password,4);
						}
			
			
					else
						{
							LCD_ShowString(1,14,"err");
							password = 0;
							i = 0;
							LCD_ShowNum(2,1,password,4);
						}
			}

			
			if(keynum==12)
			{
				password = 0;
				i = 0;
				LCD_ShowNum(2,1,password,4);
			}
		}
		
	}
}
