/*
*********************************************************************************************************
*
*	模块名称 : 主程序模块
*	文件名称 : main.c
*	版    本 : V1.0
*	说    明 : STM32H7模板例程
*
*	修改记录 :
*		版本号   日期         作者        说明
*		V1.0    2018-03-29   Eric2013     1. CMSIS软包版本 V5.3.0
*                                         2. HAL库版本 V1.2.0
*
*	Copyright (C), 2018-2030, 安富莱电子 www.armfly.com
*
*********************************************************************************************************
*/	
#include "bsp.H"



/*
*********************************************************************************************************
*	函 数 名: main
*	功能说明: 标准c程序入口。
*	形    参: 无
*	返 回 值: 无
*********************************************************************************************************
*/
int main(void)
{
	
	bsp_Init(); /* 外设初始化 */
	
	
	while (1)
	{
		BSP_LED_Off(LED3);
		BSP_LED_On(LED1);
		HAL_Delay(100);
		
		BSP_LED_Off(LED1);
		BSP_LED_On(LED2);
		HAL_Delay(100);
		
		BSP_LED_Off(LED2);
		BSP_LED_On(LED3);
		HAL_Delay(100);
	}
}

/***************************** 安富莱电子 www.armfly.com (END OF FILE) *********************************/
