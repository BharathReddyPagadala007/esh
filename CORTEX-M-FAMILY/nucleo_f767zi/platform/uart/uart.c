/**
 * Copyright <year> <author>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 **/

#include "uart.h"

void uart_init(void) {
        USART2_CR1 &= ~(1 << 13);    // Disable UART
  	USART2_BRR = 0x8c;           // Set baud to 115200
  	USART2_CR1 |= (1<<3)|(1<<2); // Enable tx/rx
  	USART2_CR1 |= 1 << 13;       // Enable the uart

}

void uart_putc(char c) {
	  while (!((USART2_ISR >> 7) & 1)) {
    		// loop
  	  }	

  	USART2_TDR = c;
 	if (c == '\n')
    	
	uart_putc('\r');

}

int uart_getc(void) {
	 if ((USART2_ISR >> 5) & 1) return USART2_TDR;
  return -1;
}
