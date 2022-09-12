/*
 * stm32f103xx.h
 *
 *  Created on: Aug 23, 2022
 *      Author: dangq
 */

#ifndef STM32F103XX_H_
#define STM32F103XX_H_

#include <stdint.h>

typedef struct {
	volatile uint32_t CR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t APB2RSTR;
	volatile uint32_t APB1RSTR;
	volatile uint32_t AHBENR;
	volatile uint32_t APB2ENR;
	volatile uint32_t APB1ENR;
	volatile uint32_t BDCR;
	volatile uint32_t CSR;
	volatile uint32_t AHBRSTR;
	volatile uint32_t CFGR2;
} RCC_Type;

#define RCC_BASE 			(0x40021000u)
#define RCC 				((RCC_Type *)RCC_BASE)

typedef struct {
	volatile uint32_t CRL;
	volatile uint32_t CRH;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t BRR;
	volatile uint32_t LCKR;
} GPIO_Type;

#define GPIOA_BASE 			(0x40010800u)
#define GPIOC_BASE 			(0x40011000u)
#define GPIOA 				((GPIO_Type *)GPIOA_BASE)
#define GPIOC				((GPIO_Type *)GPIOC_BASE)

#endif /* STM32F103XX_H_ */
