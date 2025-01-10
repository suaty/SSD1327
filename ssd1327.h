#ifndef __SSD1327_H
#define __SSD1327_H

#include "stm32g4xx_hal.h"

// SSD1327 OLED Display Dimensions
#define SSD1327_WIDTH  128
#define SSD1327_HEIGHT 128

#define UBYTE   uint8_t
#define UWORD   uint16_t
#define UDOUBLE uint32_t

// Fundamental Commands
#define SSD1327_DISPLAY_OFF          0xAE
#define SSD1327_DISPLAY_ON           0xAF
#define SSD1327_SET_CONTRAST         0x81
#define SSD1327_DISPLAY_ALL_ON_RESUME 0xA4
#define SSD1327_DISPLAY_ALL_ON       0xA5
#define SSD1327_NORMAL_DISPLAY       0xA6
#define SSD1327_INVERT_DISPLAY       0xA7

// Addressing Commands
#define SSD1327_SET_COLUMN_ADDRESS   0x15
#define SSD1327_SET_ROW_ADDRESS      0x75
#define SSD1327_SET_REMAP            0xA0

// Scrolling Commands
#define SSD1327_SCROLL_ENABLE        0x2F
#define SSD1327_SCROLL_DISABLE       0x2E

#define OLED_1in5_WIDTH  128		//OLED width
#define OLED_1in5_HEIGHT 128 		//OLED height

// Function Prototypes
void SSD1327_WriteCommand(uint8_t cmd);
void SSD1327_WriteData(uint8_t* data, uint16_t size);
void SSD1327_Init(void);
void SSD1327_SetContrast(uint8_t contrast);
void SSD1327_DisplayOn(void);
void SSD1327_DisplayOff(void);
void SSD1327_ClearDisplay(void);
void SSD1327_TestPattern(void);
void SSD1327_TestPattern2(void);
void SSD1327_DrawPixel(uint8_t x, uint8_t y, uint8_t color);
void SSD1327_UpdateScreen(void);
void SSD1327_DisplayText(const char *text, uint8_t x, uint8_t y, uint8_t *displayBuffer, const uint8_t font[][8]);
const uint8_t* Font_GetChar(char c);
void SSD1327_SetCursor(uint8_t x, uint8_t y);
void SSD1327_PrintChar(uint8_t x, uint8_t y, char c);
void OLED_1in5_Display(const UBYTE *Image);
void OLED_SetWindow(UBYTE Xstart, UBYTE Ystart, UBYTE Xend, UBYTE Yend);
void OLED_WriteChar(uint8_t x, uint8_t y, char c);
void OLED128_Init(void);
void draw_char(uint8_t col, uint8_t row, char c);
void set_cursor(uint8_t col, uint8_t row);
void send_data(uint8_t data);
void send_command(uint8_t cmd);
void OLED_1in5_Clear(void);
void drawLine(int x0, int y0, int x1, int y1);
void drawChar(char c, uint8_t x, uint8_t y);
void drawChar16(char c, uint8_t x, uint8_t y);
void drawString(const char *str, uint8_t x, uint8_t y);
void drawString16(const char *str, uint8_t x, uint8_t y);



#endif // __SSD1327_H
