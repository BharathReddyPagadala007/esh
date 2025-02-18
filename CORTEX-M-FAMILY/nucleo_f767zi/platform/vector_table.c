/*
 *  @author: BharathReddyPagadala
 *
 *
 */








#include<stdint.h>

extern int _STACK_TOP_;  //RESET HANDLER ENTRY POINT
extern void reset_handler(void);

void default_handler(){
  while(1){

  }
}


uint32_t vector_table[] __attribute__((section(".init_vector")))={
	(uint32_t)&_STACK_TOP_, 	//Initial Stack Pointer
	(uint32_t)reset_handler,	//Reset Handler
	(uint32_t)default_handler,	//NMI
	(uint32_t)default_handler,	//HARD Fault
	(uint32_t)default_handler,	//Mem Manage
	(uint32_t)default_handler,	//BusFault
	(uint32_t)default_handler,	//UsageFault
	0,				//RESERVED___0x0000_001C
	0,				//RESERVED___0x0000_0020
	0,				//RESERVED___0x0000_0024
	0,				//RESERVED___0x0000_0028
	(uint32_t)default_handler,	//SVCall_____0x0000_002C
	(uint32_t)default_handler,	//DebugMonitor_0x0000_0030
	0,				//RESERVED___0x0000_0034
	(uint32_t)default_handler,	//PendSV
	(uint32_t)default_handler,	//SysTick
	(uint32_t)default_handler,	//WWDG
	(uint32_t)default_handler,	//PVD
	(uint32_t)default_handler,	//TAMP_STAMP
	(uint32_t)default_handler,	//RTC_WKUP
	(uint32_t)default_handler,	//FLASH
	(uint32_t)default_handler,	//RCC
	(uint32_t)default_handler,	//EXTI0
	(uint32_t)default_handler,	//EXTI1
	(uint32_t)default_handler,	//EXTI2
	(uint32_t)default_handler,	//EXTI3
	(uint32_t)default_handler,	//EXTI4
	(uint32_t)default_handler,	//DMA1_Stream0
	(uint32_t)default_handler,	//DMA1_Stream1
	(uint32_t)default_handler,	//DMA1_Stream2
	(uint32_t)default_handler,	//DMA1_Stream2
	(uint32_t)default_handler,	//DMA1_Stream3
	(uint32_t)default_handler,	//DMA1_Stream4
	(uint32_t)default_handler,	//DMA1_Stream5
	(uint32_t)default_handler,	//DMA1_Stream6
	(uint32_t)default_handler,	//ADC
	(uint32_t)default_handler,	//CAN1_TX
	(uint32_t)default_handler,	//CAN1_RXO
	(uint32_t)default_handler,	//CAN1_RX1
	(uint32_t)default_handler,	//CAN1_SCE
	(uint32_t)default_handler,	//EXTI9_5
	(uint32_t)default_handler,	//TIM1_BRK_TIM9
	(uint32_t)default_handler,	//TIM1_UP_TIM10
	(uint32_t)default_handler,	//TIM1_TRG_COM_TIM11
	(uint32_t)default_handler,	//TIM1_CC
	(uint32_t)default_handler,	//TIM2
	(uint32_t)default_handler,	//TIM3
	(uint32_t)default_handler,	//TIM4
	(uint32_t)default_handler,	//I2C1_EV
	(uint32_t)default_handler,	//I2C1_ER
	(uint32_t)default_handler,	//I2C2_EV
	(uint32_t)default_handler,	//I2C2_ER
	(uint32_t)default_handler,	//SPI1
	(uint32_t)default_handler,	//SPI2
	(uint32_t)default_handler,	//USART1
	(uint32_t)default_handler,	//USART2
	(uint32_t)default_handler,	//USART3
	(uint32_t)default_handler,	//EXTI15_10
	(uint32_t)default_handler,	//RTC_ALARM
	(uint32_t)default_handler,	//OTG_FS_WKUP
	(uint32_t)default_handler,	//TIM8_BRK_TIM2
	(uint32_t)default_handler,	//TIM8_UP_TIM13
	(uint32_t)default_handler,	//TIM8_TRG_COM_TIM14
	(uint32_t)default_handler,	//TIM8_CC
	(uint32_t)default_handler,	//DMA1_Stream&
	(uint32_t)default_handler,	//FMC
	(uint32_t)default_handler,	//SDMMC1
	(uint32_t)default_handler,	//TIM5
	(uint32_t)default_handler,	//SPI3
	(uint32_t)default_handler,	//UART4
	(uint32_t)default_handler,	//UART5
	(uint32_t)default_handler,	//TIM6_DAC
	(uint32_t)default_handler,	//TIM7
	(uint32_t)default_handler,	//DMA2_Stream0
	(uint32_t)default_handler,	//DMA2_Stream1
	(uint32_t)default_handler,	//DMA2_Stream2
	(uint32_t)default_handler,	//DMA2_Stream3
	(uint32_t)default_handler,	//DMA2_Stream4
	(uint32_t)default_handler,	//ETH
	(uint32_t)default_handler,	//ETH_WKUP
	(uint32_t)default_handler,	//CAN2_TX
	(uint32_t)default_handler,	//CAN2_RX0
	(uint32_t)default_handler,	//CAN2_RX1
	(uint32_t)default_handler,	//CAN2_SCE
	(uint32_t)default_handler,	//OTG_FS
	(uint32_t)default_handler,	//DMA2_Stream5
	(uint32_t)default_handler,	//DMA2_Stream6
	(uint32_t)default_handler,	//USART6
	(uint32_t)default_handler,	//I2C3_EV		
	(uint32_t)default_handler,	//I2C3_ER
	(uint32_t)default_handler,	//OTG_HS_EP1_OUT
	(uint32_t)default_handler,	//OTG_HS_EP1_IN
	(uint32_t)default_handler,	//OTG_HS_WKUP
	(uint32_t)default_handler,	//OTG_HS
	(uint32_t)default_handler,	//DCMI
	(uint32_t)default_handler,	//CRYP
	(uint32_t)default_handler,	//HASH_RNG
	(uint32_t)default_handler,	//FPU
	(uint32_t)default_handler,	//UART7
	(uint32_t)default_handler,	//UART8
	(uint32_t)default_handler,	//SPI4
	(uint32_t)default_handler,	//SPI5
	(uint32_t)default_handler,	//SPI6
	(uint32_t)default_handler,	//SAI1
	(uint32_t)default_handler,	//LCD-TFT_GBL_I
	(uint32_t)default_handler,	//LCD-TFT_GEr_I
	(uint32_t)default_handler,	//DMA2D
	(uint32_t)default_handler,	//SAI2
	(uint32_t)default_handler,	//QUADSPI
	(uint32_t)default_handler,	//LP TIMR 1
	(uint32_t)default_handler,	//HDMI-CEC
	(uint32_t)default_handler,	//I2C4_EV
	(uint32_t)default_handler,	//I2C4_ER
	(uint32_t)default_handler,	//SPDIFRX
	(uint32_t)default_handler,	//DSIHOST
	(uint32_t)default_handler,	//DFSDM1_FLT0
	(uint32_t)default_handler,	//DFSDM1_FLT1
	(uint32_t)default_handler,	//DFSDM1_FLT2
	(uint32_t)default_handler,	//DFSDM1_FLT3
	(uint32_t)default_handler,	//SDMMC2
	(uint32_t)default_handler,	//CAN3_TX
	(uint32_t)default_handler,	//CAN3_RX0
	(uint32_t)default_handler,	//CAN3_RX1
	(uint32_t)default_handler,	//CAN3_SCE
	(uint32_t)default_handler,	//JPEG
	(uint32_t)default_handler,	//MDIOS
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler,	
	(uint32_t)default_handler	
};































