/*
 * led_blink.c
 *
 *  Created on: Mar 18, 2024
 *  Author: Franck Djiometio
 */

/*
 * Includes
 */
#include "led_blink.h"
#include "main.h"

void led_set_on(int led_pin) {
	if (led_pin == LD3_Pin) {
		HAL_GPIO_WritePin(GPIOG, LD3_Pin, GPIO_PIN_SET); // LED ON
	} else if (led_pin == LD4_Pin) {
		HAL_GPIO_WritePin(GPIOG, LD4_Pin, GPIO_PIN_SET); // LED ON
	}
}

void led_set_off(int led_pin) {
	if (led_pin == LD3_Pin) {
		HAL_GPIO_WritePin(GPIOG, LD3_Pin, GPIO_PIN_RESET); // LED OFF
	} else if (led_pin == LD4_Pin) {
		HAL_GPIO_WritePin(GPIOG, LD4_Pin, GPIO_PIN_RESET); // LED OFF
	}
}
