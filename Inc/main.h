/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2019 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H__
#define __MAIN_H__

/* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define RSTN_Pin GPIO_PIN_5
#define RSTN_GPIO_Port GPIOE
#define EXT_INTR_Pin GPIO_PIN_13
#define EXT_INTR_GPIO_Port GPIOC
#define EXT_INTR_EXTI_IRQn EXTI15_10_IRQn
#define LDO_4_Pin GPIO_PIN_0
#define LDO_4_GPIO_Port GPIOH
#define MUX2_EN_Pin GPIO_PIN_1
#define MUX2_EN_GPIO_Port GPIOH
#define MUX1_COM_Pin GPIO_PIN_0
#define MUX1_COM_GPIO_Port GPIOC
#define REED_SW1_Pin GPIO_PIN_1
#define REED_SW1_GPIO_Port GPIOC
#define REED_SW_Pin GPIO_PIN_0
#define REED_SW_GPIO_Port GPIOA
#define BAT_LVL_Pin GPIO_PIN_1
#define BAT_LVL_GPIO_Port GPIOA
#define PA2_Pin GPIO_PIN_2
#define PA2_GPIO_Port GPIOA
#define RST_SHT_Pin GPIO_PIN_3
#define RST_SHT_GPIO_Port GPIOA
#define ADC6_Pin GPIO_PIN_4
#define ADC6_GPIO_Port GPIOA
#define MIP_SCLK_Pin GPIO_PIN_5
#define MIP_SCLK_GPIO_Port GPIOA
#define MIP_SDI_Pin GPIO_PIN_7
#define MIP_SDI_GPIO_Port GPIOA
#define ADC5_Pin GPIO_PIN_4
#define ADC5_GPIO_Port GPIOC
#define MUX2_COM_Pin GPIO_PIN_0
#define MUX2_COM_GPIO_Port GPIOB
#define P2_0_Pin GPIO_PIN_2
#define P2_0_GPIO_Port GPIOB
#define MIP_CS_Pin GPIO_PIN_8
#define MIP_CS_GPIO_Port GPIOE
#define MIP_EXTMODE_Pin GPIO_PIN_10
#define MIP_EXTMODE_GPIO_Port GPIOB
#define MUX1_EN_Pin GPIO_PIN_11
#define MUX1_EN_GPIO_Port GPIOB
#define LDO_1_Pin GPIO_PIN_13
#define LDO_1_GPIO_Port GPIOB
#define BUZZER_Pin GPIO_PIN_14
#define BUZZER_GPIO_Port GPIOB
#define PD10_Pin GPIO_PIN_10
#define PD10_GPIO_Port GPIOD
#define PD11_Pin GPIO_PIN_11
#define PD11_GPIO_Port GPIOD
#define PD12_Pin GPIO_PIN_12
#define PD12_GPIO_Port GPIOD
#define PD13_Pin GPIO_PIN_13
#define PD13_GPIO_Port GPIOD
#define MIP_DISP_Pin GPIO_PIN_6
#define MIP_DISP_GPIO_Port GPIOC
#define RED_ON_Pin GPIO_PIN_7
#define RED_ON_GPIO_Port GPIOC
#define ADC_DATA_Pin GPIO_PIN_8
#define ADC_DATA_GPIO_Port GPIOC
#define ADC_CLK_Pin GPIO_PIN_9
#define ADC_CLK_GPIO_Port GPIOC
#define ADC_CS_Pin GPIO_PIN_8
#define ADC_CS_GPIO_Port GPIOA
#define TX1_Pin GPIO_PIN_9
#define TX1_GPIO_Port GPIOA
#define RX1_Pin GPIO_PIN_10
#define RX1_GPIO_Port GPIOA
#define LDO_3_Pin GPIO_PIN_11
#define LDO_3_GPIO_Port GPIOA
#define LDO_2_Pin GPIO_PIN_12
#define LDO_2_GPIO_Port GPIOA
#define PA15_Pin GPIO_PIN_15
#define PA15_GPIO_Port GPIOA
#define MIP_EXTCOMIN_Pin GPIO_PIN_4
#define MIP_EXTCOMIN_GPIO_Port GPIOD
#define TX_BLE_Pin GPIO_PIN_5
#define TX_BLE_GPIO_Port GPIOD
#define RX_BLE_Pin GPIO_PIN_6
#define RX_BLE_GPIO_Port GPIOD
#define RESET_BLE_Pin GPIO_PIN_7
#define RESET_BLE_GPIO_Port GPIOD
#define PB3_Pin GPIO_PIN_3
#define PB3_GPIO_Port GPIOB
#define PB4_Pin GPIO_PIN_4
#define PB4_GPIO_Port GPIOB
#define PB7_Pin GPIO_PIN_7
#define PB7_GPIO_Port GPIOB
#define SCL_Pin GPIO_PIN_8
#define SCL_GPIO_Port GPIOB
#define SDA_Pin GPIO_PIN_9
#define SDA_GPIO_Port GPIOB

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
