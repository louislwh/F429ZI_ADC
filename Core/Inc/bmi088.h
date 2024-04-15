/*
 * bmi088.h
 *
 *  Created on: Apr 14, 2024
 *      Author: liwaiho
 */

#ifndef INC_BMI088_H_
#define INC_BMI088_H_

#include "stm32f4xx_hal.h"


/* Accelerometer Register Map */
#define BMI088_ACC_SOFTRESET		0x7E
#define BMI088_ACC_PWR_CTRL			0x7D
#define BMI088_ACC_PWR_CONF			0x7C
#define BMI088_ACC_SELF_TEST		0x6D
#define BMI088_INT_MAP_DATA			0x58
#define BMI088_INT2_IO_CTRL			0x54
#define BMI088_INT1_IO_CTRL			0x53
#

#endif /* INC_BMI088_H_ */
