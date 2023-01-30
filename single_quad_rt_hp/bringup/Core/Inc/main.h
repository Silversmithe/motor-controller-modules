/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ENC_A_Pin GPIO_PIN_0
#define ENC_A_GPIO_Port GPIOA
#define ENC_B_Pin GPIO_PIN_1
#define ENC_B_GPIO_Port GPIOA
#define NFLT_Pin GPIO_PIN_4
#define NFLT_GPIO_Port GPIOA
#define NSLP_Pin GPIO_PIN_5
#define NSLP_GPIO_Port GPIOA
#define PWM_Pin GPIO_PIN_6
#define PWM_GPIO_Port GPIOA
#define DIR_Pin GPIO_PIN_7
#define DIR_GPIO_Port GPIOA
#define SW_LIMIT_Pin GPIO_PIN_1
#define SW_LIMIT_GPIO_Port GPIOB
#define SRAM_NCS_Pin GPIO_PIN_12
#define SRAM_NCS_GPIO_Port GPIOB
#define SRAM_SPI_SCK_Pin GPIO_PIN_13
#define SRAM_SPI_SCK_GPIO_Port GPIOB
#define SRAM_SPI_MISO_Pin GPIO_PIN_14
#define SRAM_SPI_MISO_GPIO_Port GPIOB
#define SRAM_SPI_MOSI_Pin GPIO_PIN_15
#define SRAM_SPI_MOSI_GPIO_Port GPIOB
#define SRAM_NHOLD_Pin GPIO_PIN_8
#define SRAM_NHOLD_GPIO_Port GPIOA
#define LED_STAT_Pin GPIO_PIN_5
#define LED_STAT_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
