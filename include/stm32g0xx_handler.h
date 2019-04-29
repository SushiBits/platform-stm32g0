/*
 * stm32g0xx_handler.h
 *
 *  Created on: Apr 29, 2019
 *      Author: technix
 */

#if defined(STM32G071xx)
  #include "stm32g071xx_handler.h"
#elif defined(STM32G081xx)
  #include "stm32g081xx_handler.h"
#elif defined(STM32G070xx)
  #include "stm32g070xx_handler.h"
#else
 #error "Please select first the target STM32G0xx device used in your application (in stm32g0xx.h file)"
#endif
