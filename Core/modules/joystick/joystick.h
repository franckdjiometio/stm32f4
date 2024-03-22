/*
 * joystick.h
 *
 *  Created on: Mar 22, 2024
 *  Author: Franck Djiometio
 */

#ifndef MODULES_JOYSTICK_JOYSTICK_H_
#define MODULES_JOYSTICK_JOYSTICK_H_

/*
 * Includes
 */
#include "stm32f4xx.h"

/*
 * Makros
 */
#define JOY_A GPIO_PIN_6
#define JOY_B GPIO_PIN_9
#define JOY_C GPIO_PIN_10
#define JOY_D GPIO_PIN_11
#define JOY_CTR GPIO_PIN_12

#define JOY_UP JOY_D
#define JOY_RIGHT JOY_C
#define JOY_DOWN JOY_A
#define JOY_LEFT JOY_B
#define JOY_PRESS JOY_CTR

/*
 * Functions Prototypes
 */

void joystick_init(void);
uint16_t joystick_read(void);

#endif /* MODULES_JOYSTICK_JOYSTICK_H_ */
