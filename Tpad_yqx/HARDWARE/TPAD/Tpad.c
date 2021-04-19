#include "Tpad.h"

void Tpad_init(){
	
	
	
	

}



/*********Tpad扫描函数*******/
/*****判断Tpad是否被按下*****/
u8 Tpad_scan(){
u8 res=0;//the flag of button
rval=Tpad_getVal();//测量当前电容充电时间
if((rval>DEFINE_VAL)&&(rval<MAX_VAL){

}

}


void Tpad_timer2(u32 arr,u16 psc){
	GPIO_InitTypeDef GPIO_InitStructure;
	TIM_TimeBaseInitTypeDef TIM_InitStructure;
	TIM_ICInitTypeDef TIM_ICInitStructure;
	
	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA,ENABLE);
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM5,ENABLE);
	
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_AF;
	GPIO_InitStructure.GPIO_OType=GPIO_OType_PP;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_5;
	GPIO_InitStructure.GPIO_PuPd=GPIO_PuPd_NOPULL;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_100MHz;
	GPIO_Init(GPIOA,&GPIO_InitStructure);
	
	TIM_InitStructure.TIM_Prescaler=psc;
	TIM_InitStructure.TIM_Period=arr;
	TIM_InitStructure.TIM_ClockDivision=TIM_CKD_DIV1;
	TIM_InitStructure.TIM_CounterMode=TIM_CounterMode_Up;
	TIM_TimeBaseInit(TIM2,&TIM_InitStructure);
	
	TIM_ICInitStructure.TIM_Channel=TIM_Channel_1;
	TIM_ICInitStructure.TIM_ICFilter=0x00;
}