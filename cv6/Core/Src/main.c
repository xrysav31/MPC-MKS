/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "sct.h"
#include "1wire.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */
#define CONVERT_T_DELAY 750
#define BUTTON_DELAY 10

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
ADC_HandleTypeDef hadc;

UART_HandleTypeDef huart2;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_USART2_UART_Init(void);
static void MX_ADC_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */
	static const int16_t data[] = {1689,1669,1649,1630,1611,1593,1575,1557,1540,1523,1507,1491,1475,1459,1444,1429,1415,1401,1387,1373,1360,1347,1334,1321,1309,1297,1285,1274,1262,1251,1240,1230,1219,1209,1199,
			1189,1180,1170,1161,1152,1143,1135,1126,1118,1110,1102,1094,1086,1078,1071,1064,1057,1050,1043,1036,1030,1023,1017,1010,1004,998,992,987,981,975,970,964,959,954,949,944,939,934,929,924,920,915,911,
			906,902,898,894,889,885,881,877,873,869,866,862,858,855,851,847,844,840,837,834,830,827,824,820,817,814,811,808,805,802,799,796,793,790,787,784,782,779,776,773,771,768,765,763,760,757,755,752,750,
			747,745,742,740,737,735,733,730,728,726,723,721,719,716,714,712,709,707,705,703,701,698,696,694,692,690,688,685,683,681,679,677,675,673,671,669,667,665,663,661,659,657,655,653,651,649,647,645,643,
			641,639,637,635,634,632,630,628,626,624,622,621,619,617,615,613,612,610,608,606,604,603,601,599,597,596,594,592,591,589,587,585,584,582,580,579,577,576,574,572,571,569,567,566,564,563,561,559,558,
			556,555,553,552,550,549,547,546,544,543,541,540,538,537,535,534,532,531,529,528,526,525,524,522,521,519,518,517,515,514,513,511,510,508,507,506,504,503,502,500,499,498,497,495,494,493,491,490,489,
			488,486,485,484,483,481,480,479,478,476,475,474,473,472,470,469,468,467,466,464,463,462,461,460,459,457,456,455,454,453,452,451,449,448,447,446,445,444,443,442,441,439,438,437,436,435,434,433,432,
			431,430,429,428,427,425,424,423,422,421,420,419,418,417,416,415,414,413,412,411,410,409,408,407,406,405,404,403,402,401,400,399,398,397,396,395,394,393,392,391,390,389,388,387,386,385,384,383,382,
			381,380,379,378,377,376,375,374,373,372,371,370,369,368,367,366,365,364,363,362,361,360,359,358,357,356,355,354,353,352,351,350,349,348,347,346,346,345,344,343,342,341,340,339,338,337,336,335,334,
			333,332,331,330,329,328,327,326,325,324,323,322,321,321,320,319,318,317,316,315,314,313,312,311,310,309,308,307,306,305,304,303,302,302,301,300,299,298,297,296,295,294,293,292,291,290,289,288,287,
			286,286,285,284,283,282,281,280,279,278,277,276,275,274,274,273,272,271,270,269,268,267,266,265,264,263,263,262,261,260,259,258,257,256,255,254,254,253,252,251,250,249,248,247,246,246,245,244,243,
			242,241,240,239,238,238,237,236,235,234,233,232,232,231,230,229,228,227,226,225,225,224,223,222,221,220,219,219,218,217,216,215,214,214,213,212,211,210,209,208,208,207,206,205,204,203,203,202,201,
			200,199,198,198,197,196,195,194,194,193,192,191,190,189,189,188,187,186,185,184,184,183,182,181,180,180,179,178,177,176,175,175,174,173,172,171,171,170,169,168,167,166,166,165,164,163,162,162,161,
			160,159,158,157,157,156,155,154,153,152,152,151,150,149,148,148,147,146,145,144,143,143,142,141,140,139,138,137,137,136,135,134,133,132,132,131,130,129,128,127,126,126,125,124,123,122,121,120,120,
			119,118,117,116,115,114,113,113,112,111,110,109,108,107,106,105,105,104,103,102,101,100,99,98,97,96,95,95,94,93,92,91,90,89,88,87,86,85,84,83,83,82,81,80,79,78,77,76,75,74,73,72,71,70,69,68,67,66,
			65,64,63,62,61,60,60,59,58,57,56,55,54,53,52,51,50,49,48,47,46,45,44,43,42,41,40,39,38,37,36,35,34,33,32,31,29,28,27,26,25,24,23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,2,1,0,-1,-2,-3,-4,
			-5,-6,-7,-8,-9,-10,-11,-12,-14,-15,-16,-17,-18,-19,-20,-21,-22,-23,-24,-25,-27,-28,-29,-30,-31,-32,-33,-34,-35,-37,-38,-39,-40,-41,-42,-43,-44,-46,-47,-48,-49,-50,-51,-52,-54,-55,-56,-57,-58,-60,-61,
			-62,-63,-64,-65,-67,-68,-69,-70,-72,-73,-74,-75,-76,-78,-79,-80,-82,-83,-84,-85,-87,-88,-89,-91,-92,-93,-95,-96,-97,-99,-100,-101,-103,-104,-105,-107,-108,-110,-111,-113,-114,-115,-117,-118,-120,-121,
			-123,-124,-126,-127,-129,-131,-132,-134,-135,-137,-139,-140,-142,-144,-145,-147,-149,-150,-152,-154,-155,-157,-159,-161,-163,-164,-166,-168,-170,-172,-174,-176,-178,-180,-182,-184,-186,-188,-190,-192,
			-194,-196,-198,-200,-202,-204,-206,-209,-211,-213,-215,-217,-220,-222,-224,-227,-229,-231,-234,-236,-238,-241,-243,-246,-248,-251,-253,-256,-258,-261,-263,-266,-269,-271,-274,-276,-279,-282,-284,-287,
			-290,-293,-295,-298,-301,-304,-306,-309,-312,-315,-318,-321,-323,-326,-329,-332,-335,-338,-341,-344,-346,-349,-352,-355,-358,-361,-364,-367,-370,-372,-375,-378,-381,-384,-387,-389,-392,-395,-398,-401,
			-403,-406,-409,-411,-414,-416,-419,-422,-424,-427,-429,-431,-434,-436
	};

	static enum {TEMP_ADC, TEMP_NTC, DEFAULT} state = DEFAULT;
  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART2_UART_Init();
  MX_ADC_Init();
  /* USER CODE BEGIN 2 */

  sct_init();
  OWInit();
  HAL_ADCEx_Calibration_Start(&hadc);
  HAL_ADC_Start(&hadc);

  uint32_t last_tick = 0;
  uint32_t last_button = 0;
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
	while (1) {
		/* USER CODE END WHILE */

		/* USER CODE BEGIN 3 */
		static int16_t temp_18b20;
		if (HAL_GetTick() > last_tick + CONVERT_T_DELAY) {
			OWConvertAll();
			OWReadTemperature(&temp_18b20);
			last_tick = HAL_GetTick();
		}

		int16_t addata = data[HAL_ADC_GetValue(&hadc)];

		if (HAL_GetTick() > last_button + BUTTON_DELAY) {
			if (HAL_GPIO_ReadPin(S1_GPIO_Port, S1_Pin) == GPIO_PIN_RESET) {
				state = TEMP_ADC;
			}
			if (HAL_GPIO_ReadPin(S2_GPIO_Port, S2_Pin) == GPIO_PIN_RESET) {
				state = TEMP_NTC;
			}
			last_button = HAL_GetTick();
		}

		switch (state) {

		case DEFAULT:
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
			sct_value(0);
		break;

		case TEMP_ADC:
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_SET);
			sct_value(temp_18b20 / 10);
		break;

		case TEMP_NTC:
			HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);
			sct_value(addata);
		break;

		}
		HAL_Delay(50);
	}
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI|RCC_OSCILLATORTYPE_HSI14;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSI14State = RCC_HSI14_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.HSI14CalibrationValue = 16;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL12;
  RCC_OscInitStruct.PLL.PREDIV = RCC_PREDIV_DIV1;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_1) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief ADC Initialization Function
  * @param None
  * @retval None
  */
static void MX_ADC_Init(void)
{

  /* USER CODE BEGIN ADC_Init 0 */

  /* USER CODE END ADC_Init 0 */

  ADC_ChannelConfTypeDef sConfig = {0};

  /* USER CODE BEGIN ADC_Init 1 */

  /* USER CODE END ADC_Init 1 */

  /** Configure the global features of the ADC (Clock, Resolution, Data Alignment and number of conversion)
  */
  hadc.Instance = ADC1;
  hadc.Init.ClockPrescaler = ADC_CLOCK_ASYNC_DIV1;
  hadc.Init.Resolution = ADC_RESOLUTION_10B;
  hadc.Init.DataAlign = ADC_DATAALIGN_RIGHT;
  hadc.Init.ScanConvMode = ADC_SCAN_DIRECTION_FORWARD;
  hadc.Init.EOCSelection = ADC_EOC_SINGLE_CONV;
  hadc.Init.LowPowerAutoWait = DISABLE;
  hadc.Init.LowPowerAutoPowerOff = DISABLE;
  hadc.Init.ContinuousConvMode = ENABLE;
  hadc.Init.DiscontinuousConvMode = DISABLE;
  hadc.Init.ExternalTrigConv = ADC_SOFTWARE_START;
  hadc.Init.ExternalTrigConvEdge = ADC_EXTERNALTRIGCONVEDGE_NONE;
  hadc.Init.DMAContinuousRequests = DISABLE;
  hadc.Init.Overrun = ADC_OVR_DATA_OVERWRITTEN;
  if (HAL_ADC_Init(&hadc) != HAL_OK)
  {
    Error_Handler();
  }

  /** Configure for the selected ADC regular channel to be converted.
  */
  sConfig.Channel = ADC_CHANNEL_1;
  sConfig.Rank = ADC_RANK_CHANNEL_NUMBER;
  sConfig.SamplingTime = ADC_SAMPLETIME_1CYCLE_5;
  if (HAL_ADC_ConfigChannel(&hadc, &sConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN ADC_Init 2 */

  /* USER CODE END ADC_Init 2 */

}

/**
  * @brief USART2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART2_UART_Init(void)
{

  /* USER CODE BEGIN USART2_Init 0 */

  /* USER CODE END USART2_Init 0 */

  /* USER CODE BEGIN USART2_Init 1 */

  /* USER CODE END USART2_Init 1 */
  huart2.Instance = USART2;
  huart2.Init.BaudRate = 38400;
  huart2.Init.WordLength = UART_WORDLENGTH_8B;
  huart2.Init.StopBits = UART_STOPBITS_1;
  huart2.Init.Parity = UART_PARITY_NONE;
  huart2.Init.Mode = UART_MODE_TX_RX;
  huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart2.Init.OverSampling = UART_OVERSAMPLING_16;
  huart2.Init.OneBitSampling = UART_ONE_BIT_SAMPLE_DISABLE;
  huart2.AdvancedInit.AdvFeatureInit = UART_ADVFEATURE_NO_INIT;
  if (HAL_UART_Init(&huart2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART2_Init 2 */

  /* USER CODE END USART2_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOF_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED1_Pin|LD2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED2_Pin|SCT_NOE_Pin|SCT_CLK_Pin|SCT_SDI_Pin
                          |SCT_NLA_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(DQ_GPIO_Port, DQ_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin : B1_Pin */
  GPIO_InitStruct.Pin = B1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_FALLING;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(B1_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : S2_Pin S1_Pin */
  GPIO_InitStruct.Pin = S2_Pin|S1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : LED1_Pin LD2_Pin */
  GPIO_InitStruct.Pin = LED1_Pin|LD2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED2_Pin SCT_NOE_Pin SCT_CLK_Pin SCT_SDI_Pin
                           SCT_NLA_Pin */
  GPIO_InitStruct.Pin = LED2_Pin|SCT_NOE_Pin|SCT_CLK_Pin|SCT_SDI_Pin
                          |SCT_NLA_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pin : DQ_Pin */
  GPIO_InitStruct.Pin = DQ_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_OD;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(DQ_GPIO_Port, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
