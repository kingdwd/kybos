/*
 * PinMap.cpp
 *
 *  Created on: 25.03.2016
 *      Author: struppi
 */


#include "GPIO.h"
#include <stdint.h>


#ifdef STM32F429xx

#ifdef HAL_CAN_MODULE_ENABLED
void GPIOPin::mapAsCAN1RX()
{
	GPIOPin::gpio_afconfig_t afconfig;

	switch(_portPin) {
	case 0x0B:  // port A, pin 11
	case 0x18:  // port B, pin 8
	case 0x30:  // port D, pin 0
	case 0x89:  // port I, pin 9
		afconfig = (GPIOPin::gpio_afconfig_t) GPIO_AF9_CAN1;
		break;
	default:
		while (1) { ; }
	}
	this->configure(GPIOPin::GPIO_AF_PP, GPIOPin::GPIO_NO_PULL, GPIOPin::GPIO_SPD_HIGH, afconfig);
}

void GPIOPin::mapAsCAN1TX()
{
	GPIOPin::gpio_afconfig_t afconfig;

	switch(_portPin) {
	case 0x0C:  // port A, pin 12
	case 0x19:  // port B, pin 9
	case 0x31:  // port D, pin 1
	case 0x7D:  // port H, pin 13
		afconfig = (GPIOPin::gpio_afconfig_t) GPIO_AF9_CAN1;
		break;
	default:
		while (1) { ; }
	}
	this->configure(GPIOPin::GPIO_AF_PP, GPIOPin::GPIO_NO_PULL, GPIOPin::GPIO_SPD_HIGH, afconfig);

}

void GPIOPin::mapAsCAN2RX()
{
	GPIOPin::gpio_afconfig_t afconfig;

	switch(_portPin) {
	case 0x15:  // port B, pin 5
	case 0x1C:  // port B, pin 12
		afconfig = (GPIOPin::gpio_afconfig_t) GPIO_AF9_CAN2;
		break;
	default:
		while (1) { ; }
	}
	this->configure(GPIOPin::GPIO_AF_PP, GPIOPin::GPIO_NO_PULL, GPIOPin::GPIO_SPD_HIGH, afconfig);
}

void GPIOPin::mapAsCAN2TX()
{
	GPIOPin::gpio_afconfig_t afconfig;

	switch(_portPin) {
	case 0x16:  // port B, pin 5
	case 0x1D:  // port B, pin 13
		afconfig = (GPIOPin::gpio_afconfig_t) GPIO_AF9_CAN2;
		break;
	default:
		while (1) { ; }
	}
	this->configure(GPIOPin::GPIO_AF_PP, GPIOPin::GPIO_NO_PULL, GPIOPin::GPIO_SPD_HIGH, afconfig);

}
#endif // HAL_CAN_MODULE_ENABLED


#ifdef  HAL_I2C_MODULE_ENABLED
void GPIOPin::mapAsI2C1SDA()
{
	GPIOPin::gpio_afconfig_t afconfig;

	switch(_portPin) {
	case 0x17:  // port B, pin 7
	case 0x19:  // port B, pin 9
		afconfig = (GPIOPin::gpio_afconfig_t) GPIO_AF4_I2C1;
		break;
	default:
		while (1) { ; }
	}
	this->configure(GPIOPin::GPIO_AF_OD, GPIOPin::GPIO_PULL_UP, GPIOPin::GPIO_SPD_HIGH, afconfig);
}

void GPIOPin::mapAsI2C2SDA()
{
	GPIOPin::gpio_afconfig_t afconfig;

	switch(_portPin) {
	case 0x1B:  // port B, pin 11
	case 0x50:  // port F, pin 0
	case 0x75:  // port H, pin 5
		afconfig = (GPIOPin::gpio_afconfig_t) GPIO_AF4_I2C2;
		break;
	default:
		while (1) { ; }
	}
	this->configure(GPIOPin::GPIO_AF_OD, GPIOPin::GPIO_PULL_UP, GPIOPin::GPIO_SPD_HIGH, afconfig);
}

void GPIOPin::mapAsI2C3SDA()
{
	GPIOPin::gpio_afconfig_t afconfig;

	switch(_portPin) {
	case 0x29:  // port C, pin 9
	case 0x78:  // port H, pin 8
		afconfig = (GPIOPin::gpio_afconfig_t) GPIO_AF4_I2C3;
		break;
	default:
		while (1) { ; }
	}
	this->configure(GPIOPin::GPIO_AF_OD, GPIOPin::GPIO_PULL_UP, GPIOPin::GPIO_SPD_HIGH, afconfig);
}

void GPIOPin::mapAsI2C1SCL()
{
	GPIOPin::gpio_afconfig_t afconfig;

	switch(_portPin) {
	case 0x16:  // port B, pin 6
	case 0x18:  // port B, pin 8
		afconfig = (GPIOPin::gpio_afconfig_t) GPIO_AF4_I2C1;
		break;
	default:
		while (1) { ; }
	}
	this->configure(GPIOPin::GPIO_AF_OD, GPIOPin::GPIO_PULL_UP, GPIOPin::GPIO_SPD_HIGH, afconfig);
}

void GPIOPin::mapAsI2C2SCL()
{
	GPIOPin::gpio_afconfig_t afconfig;

	switch(_portPin) {
	case 0x1A:  // port B, pin 10
	case 0x51:  // port F, pin 1
	case 0x74:  // port H, pin 4
		afconfig = (GPIOPin::gpio_afconfig_t) GPIO_AF4_I2C2;
		break;
	default:
		while (1) { ; }
	}
	this->configure(GPIOPin::GPIO_AF_OD, GPIOPin::GPIO_PULL_UP, GPIOPin::GPIO_SPD_HIGH, afconfig);
}

void GPIOPin::mapAsI2C3SCL()
{
	GPIOPin::gpio_afconfig_t afconfig;

	switch(_portPin) {
	case 0x08:  // port A, pin 8
	case 0x29:  // port C, pin 9
		afconfig = (GPIOPin::gpio_afconfig_t) GPIO_AF4_I2C3;
		break;
	default:
		while (1) { ; }
	}
	this->configure(GPIOPin::GPIO_AF_OD, GPIOPin::GPIO_PULL_UP, GPIOPin::GPIO_SPD_HIGH, afconfig);
}
#endif  // HAL_I2C_MODULE_ENABLED


#endif // STM32F429xx


