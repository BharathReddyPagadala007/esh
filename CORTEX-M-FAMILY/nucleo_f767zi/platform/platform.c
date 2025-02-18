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

#include "shell.h"
#include "uart.h"
#include "mmap.h"

void set_gpio_af(){

  RCC_APB1ENR |= 1 << 17 | 1<<24;
  RCC_AHB1ENR |= 0x1;

  // USART2 Tx, Rx (PA2, PA3)  Alternate function mode
  GPIOA_MODER   |=  (0b10 << 4) | (0b10 << 6);

  // USART2 Tx (PA2) Output push-pull (reset state)
  GPIOA_OTYPER  &=  ~( 1 << 2);

  // USART2 Rx (PA3)  High speed
  GPIOA_OSPEEDR |=  (0b11 << 4);

  // USART2 Tx (PA2), RX (PA3) Alternate function 7 USART
  GPIOA_AFRL    |=  (0b0111 << 8) | (0b0111 << 12);



}



void platform_init(void) {
  /**
   * User can do other configurations here.
   * E.g clocks, enable/disable blocks
   */

  /* Initialize the UART */
  uart_init();

  /* Register with shell, a function to get a character from the uart */
  set_read_char(uart_getc);

  /* Register with shell, a function to send a character to the uart */
  set_write_char(uart_putc);
}
