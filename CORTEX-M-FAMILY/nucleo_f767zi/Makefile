#
# Copyright <2025> <BharathReddyPagadala>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

TOOLCHAIN_PREFIX ?= arm-none-eabi-
OPTIMIZATION     = g

STARTUP	   = cortex-m

# Provide the size of the memory
#
#
ROM_BASE_PHYSICAL = 0x8000000
ROM_SIZE = 2048K

RAM_BASE_PHYSICAL  = 0x20000000
RAM_SIZE           = 512K

# Provide the base of the uart on which the shell
# should be available on.
UART_BASE_PHYSICAL = 0x10000000

# If you have your own layout file that should be used by the linker, set this
# variable to point to the layout file.
#USER_LAYOUT_FILE = platform/layout.ld

# Set this as 1 to use a lite version of the shell \
# This disables support for the following: \
#   * printf formatting \
#   * long integers in printf \
#   * memory manipulation utilities \
#   * command history in prompt \
# Skip the next 4 defines in this file if using SHELL_LITE
# SHELL_LITE = 1

# Uncomment to use printf() without the formatting support
# DEFINES += -DSHELL_PRINTF_LITE

# Uncomment to use printf() without the long integer
# formatting support. Valid only if SHELL_PRINTF_LITE is not defined
DEFINES += -DSHELL_NO_PRINTF_LL

# Uncomment to skip compiling the memory manipulation utilities.
# DEFINES += -DSHELL_NO_UTILS

# Uncomment to disable the command history on the prompt
# DEFINES += -DSHELL_NO_HISTORY

# ------------------------------------------------------------------------
#
#  stm32f767zi  ====> cortex-m7	
#  -----------
#  v7e-m/      -----  base option  --->/nofp/
#  v7e-m+fp/   -----  single precision fp-->hard/ hardware based or softfp/ software based
#  v7e-m+dp/   -----  double precision fp-->hard/ or softfp/ 
#	
#  with v7e-m --there is support for
#             ---dsp  simd 
#       
#  -mfpu=fpv5-d16  ----> if ur using floating point  d16 means   16 double-precision registers d0-d15
#   
#  -mfloat-abi=hard    or      softfp 
#
#
#
#
#
TOOLCHAIN_VERSION := $(shell $(TOOLCHAIN_PREFIX)gcc -dumpversion)
LIB_GCC_PATH = /usr/lib/gcc/arm-none-eabi/$(TOOLCHAIN_VERSION)/thumb/v7e-m/nofp/
DEFINES   += -mcpu=cortex-m7 -mthumb -mtune=cortex-m7
ASM_FLAGS += -march=armv7e-m
LD_FLAGS  = -lgcc -L$(LIB_GCC_PATH)

# Set this variable to point to the shell directory
SHELL_ROOT=../../shell
-include $(SHELL_ROOT)/Makefile

# ------------------------ User targets below this line ------------------------
# OpenOCD specific variables
#OPENOC_CONFIG_FILE =/usr/share/openocd/scripts/target/stm32f7x.cfg
OPENOC_CONFIG_FILE = interface/stlink.cfg -f target/stm32f7x.cfg 
OPENOC_FILE_UPLOAD ="program $(PROJECT).elf verify reset exit"
# openocd -f interface/stlink.cfg -f target/stm32f7x.cfg -c "program main.elf verify reset exit"
#
#
#

### upload: Uploads the binary to the board
upload: $(PROJECT).elf
	openocd -f $(OPENOC_CONFIG_FILE) -c $(OPENOC_FILE_UPLOAD)

### debug: Launches OpenOCD with gdb server. To be executed before 'make gdb'
debug: $(PROJECT).elf upload
	@echo "target extended-remote localhost:3333" > $(PROJECT).gdb
	@echo "monitor reset halt" >> $(PROJECT).gdb
	@echo "GDB server active..."
	@echo "Use Ctrl+C to close the server!"
	@sudo openocd -f $(OPENOC_CONFIG_FILE) 2>/dev/null

### gdb: Launches GDB and conncts to the target . To  be executed after 'make debug'
gdb: $(PROJECT).elf
	@gdb-multiarch -q $^ --command=$(PROJECT).gdb	
