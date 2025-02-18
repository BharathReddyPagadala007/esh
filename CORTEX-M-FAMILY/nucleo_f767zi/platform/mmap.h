#ifndef __MMAP_H_
#define __MMAP_H_

#define USART2_BASE 	(0x40004400u)

#define USART2_CR1	 *((volatile unsigned int *)(USART2_BASE + 0x00u))
#define USART2_CR2	 *((volatile unsigned int *)(USART2_BASE + 0x04u))
#define USART2_CR3	 *((volatile unsigned int *)(USART2_BASE + 0x08u))
#define USART2_BRR	 *((volatile unsigned int *)(USART2_BASE + 0x0Cu))
#define USART2_GTPR	 *((volatile unsigned int *)(USART2_BASE + 0x10u))
#define USART2_RTOR	 *((volatile unsigned int *)(USART2_BASE + 0x14u))
#define USART2_RQR	 *((volatile unsigned int *)(USART2_BASE + 0x18u))
#define USART2_ISR	 *((volatile unsigned int *)(USART2_BASE + 0x1Cu))
#define USART2_ICR	 *((volatile unsigned int *)(USART2_BASE + 0x20u))
#define USART2_RDR	 *((volatile unsigned int *)(USART2_BASE + 0x24u))
#define USART2_TDR	 *((volatile unsigned int *)(USART2_BASE + 0x28u))




#define RCC_BASE	(0x40023800u)
#define RCC_CR		*((volatile unsigned int *)(RCC_BASE + 0x00u))
#define RCC_PLLCFGR	*((volatile unsigned int *)(RCC_BASE + 0x04u))
#define RCC_CFGR	*((volatile unsigned int *)(RCC_BASE + 0x08u))
#define RCC_CIR		*((volatile unsigned int *)(RCC_BASE + 0x0Cu))
#define RCC_AHB1RSTR	*((volatile unsigned int *)(RCC_BASE + 0x10u))
#define RCC_AHB2RSTR	*((volatile unsigned int *)(RCC_BASE + 0x14u))
#define RCC_AHB3RSTR	*((volatile unsigned int *)(RCC_BASE + 0x18u))
#define RCC_APB1RSTR	*((volatile unsigned int *)(RCC_BASE + 0x20u))
#define RCC_APB2RSTR	*((volatile unsigned int *)(RCC_BASE + 0x24u))
#define RCC_AHB1ENR	*((volatile unsigned int *)(RCC_BASE + 0x30u))
#define RCC_AHB2ENR	*((volatile unsigned int *)(RCC_BASE + 0x34u))
#define RCC_AHB3ENR	*((volatile unsigned int *)(RCC_BASE + 0x38u))
#define RCC_APB1ENR	*((volatile unsigned int *)(RCC_BASE + 0x40u))
#define RCC_APB2ENR	*((volatile unsigned int *)(RCC_BASE + 0x44u))
#define RCC_AHB1LPENR	*((volatile unsigned int *)(RCC_BASE + 0x50u))
#define RCC_AHB2LPENR	*((volatile unsigned int *)(RCC_BASE + 0x54u))
#define RCC_AHB3LPENR	*((volatile unsigned int *)(RCC_BASE + 0x58u))
#define RCC_APB1LPENR	*((volatile unsigned int *)(RCC_BASE + 0x60u))
#define RCC_APB2LPENR	*((volatile unsigned int *)(RCC_BASE + 0x64u))
#define RCC_BDCR	*((volatile unsigned int *)(RCC_BASE + 0x70u))
#define RCC_CSR		*((volatile unsigned int *)(RCC_BASE + 0x74u))
#define RCC_SSCGR	*((volatile unsigned int *)(RCC_BASE + 0x80u))
#define RCC_PLLI2SCFGR	*((volatile unsigned int *)(RCC_BASE + 0x84u))
#define RCC_PLLSAICFGR	*((volatile unsigned int *)(RCC_BASE + 0x88u))
#define RCC_DCKCFGR1	*((volatile unsigned int *)(RCC_BASE + 0x8Cu))
#define RCC_DCKCFGR2	*((volatile unsigned int *)(RCC_BASE + 0x90u))







#define GPIOA_BASE	(0x40020000u)
#define GPIOA_MODER   *((volatile unsigned int *)(GPIOA_BASE + 0x00))
#define GPIOA_OTYPER  *((volatile unsigned int *)(GPIOA_BASE + 0x04))
#define GPIOA_OSPEEDR *((volatile unsigned int *)(GPIOA_BASE + 0x08))
#define GPIOA_PUPDR   *((volatile unsigned int *)(GPIOA_BASE + 0x0C))
#define GPIOA_IDR     *((volatile unsigned int *)(GPIOA_BASE + 0x10))
#define GPIOA_ODR     *((volatile unsigned int *)(GPIOA_BASE + 0x14))
#define GPIOA_BSRR    *((volatile unsigned int *)(GPIOA_BASE + 0x18))
#define GPIOA_LCKR    *((volatile unsigned int *)(GPIOA_BASE + 0x1C))
#define GPIOA_AFRL    *((volatile unsigned int *)(GPIOA_BASE + 0x20))
#define GPIOA_AFRH    *((volatile unsigned int *)(GPIOA_BASE + 0x24))




#endif
