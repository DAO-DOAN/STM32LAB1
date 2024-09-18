/*
 * ex1.c
 *
 *  Created on: Sep 18, 2024
 *      Author: Admin
 */
#include "ex1_lab1.h"

int counter=0;
int LED_status=RED_status;

void run_ex1(){
	switch (LED_status){
		case RED_status:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin,SET);
			if (counter>=2){
				counter=0;
				LED_status=YELLOW_status;
			}
			counter++;
			break;
		case YELLOW_status:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin,SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin,RESET);
			if (counter>=2){
				counter=0;
				LED_status=RED_status;
			}
			counter++;
			break;
		default:
			break;
	}
}


