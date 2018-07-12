/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "hw_cfg.h"
#include "stdio.h"
#include "beep.h"
/** @addtogroup STM32F0xx_StdPeriph_Examples
  * @{
  */

/** @addtogroup TIM_TimeBase
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
__IO uint32_t TimingDelay;
extern __IO uint8_t function_flag;
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
void TIM_PWM_Config(void);
/**
  * @brief  Main program.
  * @param  None
  * @retval None
  */
int main(void)
{
  beep_init();
  /* Infinite loop */
  while (1)
  {
    if(function_flag == 0x0023)
    {
      beep_commit();
    }
  }
}



/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

