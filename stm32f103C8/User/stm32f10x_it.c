/*
*********************************************************************************************************
*	                                  
*	模块名称 : 中断模块
*	文件名称 : stm32f10x_it.c
*	版    本 : V2.0
*	说    明 : 本文件存放所有的中断服务函数。
*********************************************************************************************************
*/

#include "stm32f10x_it.h"

#define ERR_INFO "\r\nEnter HardFault_Handler, System Halt.\r\n"

/***
    Cortex-M3 内核异常中断服务程序
***/

/**
  *	函 数 名: HardFault_Handler
  *	功能说明: 硬件失效中断服务程序。
  *	形    参：无
  *	返 回 值: 无
  **/ 
void HardFault_Handler(void)
{	
  /* 当硬件失效异常发生时进入死循环 */
  while (1)
  {
  }
}

/**
  *	函 数 名: BusFault_Handler
  *	功能说明: 总线访问异常中断服务程序。
  *	形    参：无
  *	返 回 值: 无
  **/    
void BusFault_Handler(void)
{
  /* 当总线异常时进入死循环 */
  while (1)
  {
  }
}


/************************************** DIHEELEC (END OF FILE) *******************************************/
