/*
 * StmLcdController.h
 *
 *  Created on: 15.02.2015
 *      Author: struppi
 */

#ifndef STM32LCDCONTROLLER_H_
#define STM32LCDCONTROLLER_H_

#include "../kybos.h"

#ifdef HAS_LCD_CONTROLLER


#include GENERATE_HAL_INCLUDE(STM32_FAMILY,)
#include GENERATE_HAL_INCLUDE(STM32_FAMILY, _lcd)


class Stm32LcdController
{

public:
	static Stm32LcdController* getInstance();
	int setup();
	int writeData(uint32_t RAMRegisterIndex, uint32_t RAMRegisterMask, uint32_t Data);
	int update();
private:
	int init();
	Stm32LcdController();
	static Stm32LcdController* _instance;
	LCD_HandleTypeDef _hlcd;
};


#endif // HAS_LCD_CONTROLLER


#endif /* STM32LCDCONTROLLER_H_ */
