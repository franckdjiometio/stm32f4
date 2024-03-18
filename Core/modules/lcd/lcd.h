/**
 * @autor: Florian von Zabiensky
 * @version: 1.0
 * @date: 14.03.2019
 *
 * This module is an interfact to the lcd library.
 */
#ifndef __LCD_H_
#define __LCD_H_

/**
 * Includes
 */
#include "stm32f4xx.h"
#include "ILI9341_STM32_Driver.h"
#include "ILI9341_GFX.h"

/**
 * Colors:
 * See ILI9341_STM32_Driver.h for the color definitions.
 */


/**
 * Function prototypes
 */
void lcd_init(void);

void lcd_draw_text_at_line(const char* text, uint8_t line, uint16_t color, uint16_t size, uint16_t background_color);
void lcd_draw_text_at_coord(const char* text, uint16_t x, uint16_t y, uint16_t color, uint16_t size, uint16_t background_color);

void lcd_fill_screen(uint16_t color);

void lcd_draw_rect(uint16_t x0, uint16_t y0, uint16_t x1, uint16_t y1, uint16_t color, uint8_t filled);
void lcd_draw_circle(uint16_t x, uint16_t y, uint16_t r, uint16_t color, uint8_t filled);
void lcd_draw_horizontal_line(uint16_t x, uint16_t y, uint16_t width, uint16_t color);
void lcd_draw_vertical_line(uint16_t x, uint16_t y, uint16_t height, uint16_t color);
void lcd_draw_pixel(uint16_t x, uint16_t y, uint16_t color);



#endif /* __LCD_H_ */
