/*
 * ex2.c
 *
 *  Created on: Sep 18, 2024
 *      Author: Admin
 */


#include "ex2.h"

int status=RED_status;
int count=0;
void test_ex2(){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port,LED_RED_Pin);
	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin);
	HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin);
}
void red_off(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin,SET);
}
void yellow_off(){
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin,SET);
}
void green_off(){
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin,SET);
}
void red_on(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin,RESET);
}
void yellow_on(){
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin,RESET);
}
void green_on(){
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin,RESET);
}
void run_ex2(){
	  switch (status) {
		case RED_status:
			yellow_off();
			green_off();
			red_on();
			count++;
			if(count>=5){
				status=YELLOW_status;
				count=0;
			}
			break;
		case YELLOW_status:
			red_off();
			green_off();
			yellow_on();
			count++;
			if(count>=2){
				status=GREEN_status;
				count=0;
			}
			break;
		case GREEN_status:
			red_off();
			yellow_off();
			green_on();
			count++;
			if(count>=3){
				status=RED_status;
				count=0;
			}
			break;
		default:
			break;
	}
}
