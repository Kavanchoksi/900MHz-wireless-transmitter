
#ifndef _MCU_SPI_H_
#define _MCU_SPI_H_
#include "stm32l4xx_hal.h"

#define EPD_W21_SPI_SPEED 0x02

//#define EPD_W21_VPP_0	P4 &= ~0x80
//#define EPD_W21_VPP_1	P4 |= 0x80

//#define EPD_W21_MOSI_0	GPIO_ResetBits(GPIOD, GPIO_Pin_10)
//#define EPD_W21_MOSI_1	GPIO_SetBits(GPIOD, GPIO_Pin_10)

//#define EPD_W21_CLK_0	GPIO_ResetBits(GPIOD, GPIO_Pin_9)
//#define EPD_W21_CLK_1	GPIO_SetBits(GPIOD, GPIO_Pin_9)

//#define EPD_W21_CS_0	GPIO_ResetBits(GPIOD, GPIO_Pin_8)
//#define EPD_W21_CS_1	GPIO_SetBits(GPIOD, GPIO_Pin_8)

//#define EPD_W21_DC_0	GPIO_ResetBits(GPIOE, GPIO_Pin_15)
//#define EPD_W21_DC_1	GPIO_SetBits(GPIOE, GPIO_Pin_15)

//#define EPD_W21_RST_0	GPIO_ResetBits(GPIOE, GPIO_Pin_14)
//#define EPD_W21_RST_1	GPIO_SetBits(GPIOE, GPIO_Pin_14)

#define EPD_W21_MOSI_0	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_RESET);
#define EPD_W21_MOSI_1	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,GPIO_PIN_SET);

#define EPD_W21_CLK_0	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_RESET);
#define EPD_W21_CLK_1	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,GPIO_PIN_SET);

#define EPD_W21_CS_0	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_RESET);
#define EPD_W21_CS_1	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,GPIO_PIN_SET);

#define EPD_W21_DC_0	HAL_GPIO_WritePin(GPIOC,GPIO_PIN_5,GPIO_PIN_RESET);
#define EPD_W21_DC_1	HAL_GPIO_WritePin(GPIOC,GPIO_PIN_5,GPIO_PIN_SET);

#define EPD_W21_RST_0	HAL_GPIO_WritePin(GPIOC,GPIO_PIN_4,GPIO_PIN_RESET);
#define EPD_W21_RST_1	HAL_GPIO_WritePin(GPIOC,GPIO_PIN_4,GPIO_PIN_SET);

#define EPD_W21_BS_0	//ABHISHEK
//#define EPD_W21_BS_0	GPIO_ResetBits(GPIOE, GPIO_Pin_11)
//#define EPD_W21_BS_1	P2 |= 0x01

#define isEPD_W21_BUSY HAL_GPIO_ReadPin(GPIOB,GPIO_PIN_1) // for solomen solutions


extern void driver_delay_us(unsigned int xus);
extern void driver_delay_xms(unsigned long xms);

void SPI_Write(unsigned char value);
void EPD_W21_WriteDATA(unsigned char command);
void EPD_W21_WriteCMD(unsigned char command);
void EPD_W21_WriteCMD_p1(unsigned char command,unsigned char para);
void EPD_W21_WriteCMD_p2(unsigned char command,unsigned char para1,unsigned char para2);
void EPD_W21_Write(unsigned char *value, unsigned char datalen);

void EPD_W21_WriteDispRam(unsigned char XSize,unsigned int YSize,
							unsigned char *Dispbuff);

void EPD_W21_WriteDispRamMono(unsigned char XSize,unsigned int YSize,
							unsigned char dispdata);
void EPD_W21_WriteDispRamVGray4(unsigned char XSize,unsigned int YSize);
void EPD_W21_WriteDispRamHGray4(unsigned char XSize,unsigned int YSize);
void EPD_W21_WriteDispRamChessboardMono(unsigned char XSize,
										unsigned int YSize,
										unsigned char Mode);
void EPD_W21_WriteDispRamVline(unsigned char XSize,unsigned int YSize);
void EPD_W21_WriteDispRamHline(unsigned char XSize,unsigned int YSize);
void EPD_W21_WriteDispRamDotArray(unsigned char XSize,unsigned int YSize);

#endif  //#ifndef _MCU_SPI_H_

/***********************************************************
						end file
***********************************************************/
