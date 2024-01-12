#include "user.h"
#include "oled.h"
#include "delay.h"
#include "led.h"


void dispaly(void)
{
	u8 s;
	OLED_DrawBMP(0,0,128,8,(unsigned char *)BMP1);
	GUI_DrawFont16(0,0,"多功能健康监测仪",0);
	for(s=0;s<100;s++)
	{
		Moving_progress_bar(s,6);
		delay_ms(15);
	}
}

void dispaly_1(void)
{
	//GUI_DrawFont16(0,0,"多功能健康监测仪",0);
//	GUI_DrawFont16(0,0,"体温",0);
//	OLED_ShowString(32,0,":",16);
//	GUI_DrawFont16(85,0,"℃",0);
	
	GUI_DrawFont16(0,2,"心率",0);
	OLED_ShowString(32,2,":",16);
	OLED_ShowString(70,2,"T/M",16);
	
	GUI_DrawFont16(0,4,"血氧",0);
	OLED_ShowString(32,4,":",16);
	OLED_ShowString(70,4,"%",16);
	
	GUI_DrawFont16(0,6,"结果",0);
	OLED_ShowString(32,6,":",16);
}
