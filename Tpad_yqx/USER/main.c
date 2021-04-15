#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"

//ALIENTEK 探索者STM32F407开发板 实验1
//跑马灯实验 -库函数版本
//技术支持：www.openedv.com
//淘宝店铺：http://eboard.taobao.com  
//广州市星翼电子科技有限公司  
//作者：正点原子 @ALIENTEK

int main(void)
{ 
 
	delay_init(168);		  //初始化延时函数
	LED_Init();		        //初始化LED端口
	Tpad_init();          //初始化TPAD
	
  /**下面是通过直接操作库函数的方式实现IO控制**/	
	
	while(1)
	{
	
	}
}


