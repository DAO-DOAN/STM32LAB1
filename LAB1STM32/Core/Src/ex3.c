/*
 * ex3.c
 *
 *  Created on: Sep 18, 2024
 *      Author: Admin
 */

#include "ex3.h"

int status3=RED_status;
int count3=6;

void run_ex3(){
	switch (status3){
		case RED_status:
			HAL_GPIO_WritePin(LED11_GPIO_Port,LED11_Pin,SET);
			HAL_GPIO_WritePin(LED7_GPIO_Port,LED7_Pin,SET);
			HAL_GPIO_WritePin(LED12_GPIO_Port,LED12_Pin,RESET);
			HAL_GPIO_WritePin(LED6_GPIO_Port,LED6_Pin,RESET);
			HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin,RESET);
			HAL_GPIO_WritePin(LED5_GPIO_Port,LED5_Pin,RESET);

			if (count3>=6 && count3<=7){
				HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin,SET);
				HAL_GPIO_WritePin(LED10_GPIO_Port,LED10_Pin,SET);
				HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin,RESET);
				HAL_GPIO_WritePin(LED9_GPIO_Port,LED9_Pin,RESET);
				HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin,RESET);
				HAL_GPIO_WritePin(LED8_GPIO_Port,LED8_Pin,RESET);
			}
			if (count3>=3 && count3<6){
				HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin,RESET);
				HAL_GPIO_WritePin(LED10_GPIO_Port,LED10_Pin,RESET);
				HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin,RESET);
				HAL_GPIO_WritePin(LED9_GPIO_Port,LED9_Pin,RESET);
				HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin,SET);
				HAL_GPIO_WritePin(LED8_GPIO_Port,LED8_Pin,SET);
			}
			if (count3>=1 && count3<3){
				HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin,RESET);
				HAL_GPIO_WritePin(LED10_GPIO_Port,LED10_Pin,RESET);
				HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin,SET);
				HAL_GPIO_WritePin(LED9_GPIO_Port,LED9_Pin,SET);
				HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin,RESET);
				HAL_GPIO_WritePin(LED8_GPIO_Port,LED8_Pin,RESET);
			}
			if (count3>=0 && count3<1){
				HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin,SET);
				HAL_GPIO_WritePin(LED10_GPIO_Port,LED10_Pin,SET);
				HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin,RESET);
				HAL_GPIO_WritePin(LED9_GPIO_Port,LED9_Pin,RESET);
				HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin,RESET);
				HAL_GPIO_WritePin(LED8_GPIO_Port,LED8_Pin,RESET);
			}
			if (count3<0){
				status3=GREEN_status;
				count3=6;
			}
			count3--;
			break;
		case YELLOW_status:
			HAL_GPIO_WritePin(LED11_GPIO_Port,LED11_Pin,RESET);
			HAL_GPIO_WritePin(LED7_GPIO_Port,LED7_Pin,RESET);
			HAL_GPIO_WritePin(LED12_GPIO_Port,LED12_Pin,SET);
			HAL_GPIO_WritePin(LED6_GPIO_Port,LED6_Pin,SET);
			HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin,RESET);
			HAL_GPIO_WritePin(LED5_GPIO_Port,LED5_Pin,RESET);
			HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin,SET);
			HAL_GPIO_WritePin(LED10_GPIO_Port,LED10_Pin,SET);
			HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin,RESET);
			HAL_GPIO_WritePin(LED9_GPIO_Port,LED9_Pin,RESET);
			HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin,RESET);
			HAL_GPIO_WritePin(LED8_GPIO_Port,LED8_Pin,RESET);
			if (count3<=0){
				status3=RED_status;
				count3=7;
			}
			count3--;
			break;
		case GREEN_status:
			HAL_GPIO_WritePin(LED11_GPIO_Port,LED11_Pin,RESET);
			HAL_GPIO_WritePin(LED7_GPIO_Port,LED7_Pin,RESET);
			HAL_GPIO_WritePin(LED12_GPIO_Port,LED12_Pin,RESET);
			HAL_GPIO_WritePin(LED6_GPIO_Port,LED6_Pin,RESET);
			HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin,SET);
			HAL_GPIO_WritePin(LED5_GPIO_Port,LED5_Pin,SET);
			HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin,SET);
			HAL_GPIO_WritePin(LED10_GPIO_Port,LED10_Pin,SET);
			HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin,RESET);
			HAL_GPIO_WritePin(LED9_GPIO_Port,LED9_Pin,RESET);
			HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin,RESET);
			HAL_GPIO_WritePin(LED8_GPIO_Port,LED8_Pin,RESET);
			if (count3<=0){
				status3=YELLOW_status;
				count3=2;
			}
			count3--;
			break;
		default:
			break;
	}
}
