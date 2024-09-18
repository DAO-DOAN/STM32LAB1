/*
 * ex5.c
 *
 *  Created on: Sep 18, 2024
 *      Author: Admin
 */

#include "ex5.h"

 int status5=RED_status;
 int count5=7;
 int count5_2=0;
 void display7SEG1(int num){
 	switch (num) {
 		case 0:
 			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
 			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
 			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
 			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
 			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
 			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
 			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
 			break;
 		case 1:
 			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
 			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
 			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
 			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
 			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
 			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
 			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
 			break;
 		case 2:
 			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
 			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
 			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
 			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
 			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
 			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
 			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
 			break;
 		case 3:
 			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
 			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
 			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
 			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
 			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
 			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
 			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
 			break;
 		case 4:
 			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
 			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
 			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
 			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
 			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
 			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
 			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
 			break;
 		case 5:
 			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
 			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
 			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
 			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
 			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
 			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
 			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
 			break;
 		case 6:
 			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
 			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
 			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
 			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
 			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
 			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
 			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
 			break;
 		case 7:
 			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
 			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
 			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
 			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
 			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
 			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
 			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
 			break;
 		case 8:
 			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
 			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
 			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
 			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
 			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
 			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
 			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
 			break;
 		case 9:
 			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
 			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
 			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
 			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
 			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
 			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
 			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
 			break;
 		default:
 			break;
 	}
 }

 void display7SEG2(int num){
 	switch (num) {
 		case 0:
 			HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
 			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
 			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG9_Pin, RESET);
 			HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
 			HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, RESET);
 			HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
 			HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, SET);
 			break;
 		case 1:
 			HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, SET);
 			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
 			HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
 			HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, SET);
 			HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
 			HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, SET);
 			HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, SET);
 			break;
 		case 2:
 			HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
 			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
 			HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, SET);
 			HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
 			HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, RESET);
 			HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, SET);
 			HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
 			break;
 		case 3:
 			HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
 			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG7_Pin, RESET);
 			HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
 			HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
 			HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
 			HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, SET);
 			HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
 			break;
 		case 4:
 			HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, SET);
 			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
 			HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
 			HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, SET);
 			HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
 			HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
 			HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
 			break;
 		case 5:
 			HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
 			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, SET);
 			HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
 			HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
 			HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
 			HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
 			HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
 			break;
 		case 6:
 			HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
 			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, SET);
 			HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
 			HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
 			HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, RESET);
 			HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
 			HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
 			break;
 		case 7:
 			HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
 			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
 			HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
 			HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, SET);
 			HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
 			HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, SET);
 			HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, SET);
 			break;
 		case 8:
 			HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
 			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
 			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG9_Pin, RESET);
 			HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
 			HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, RESET);
 			HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
 			HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
 			break;
 		case 9:
 			HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
 			HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
 			HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
 			HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
 			HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
 			HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
 			HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
 			break;
 		default:
 			break;
 	}
 }

 void run_ex5(){
	display7SEG1(count5);

	switch (status5){
			case RED_status:
				HAL_GPIO_WritePin(LED11_GPIO_Port,LED11_Pin,SET);
				HAL_GPIO_WritePin(LED7_GPIO_Port,LED7_Pin,SET);
				HAL_GPIO_WritePin(LED12_GPIO_Port,LED12_Pin,RESET);
				HAL_GPIO_WritePin(LED6_GPIO_Port,LED6_Pin,RESET);
				HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin,RESET);
				HAL_GPIO_WritePin(LED5_GPIO_Port,LED5_Pin,RESET);
				if (count5>=6 && count5<=7){
					count5_2=count5-6;
					HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin,SET);
					HAL_GPIO_WritePin(LED10_GPIO_Port,LED10_Pin,SET);
					HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin,RESET);
					HAL_GPIO_WritePin(LED9_GPIO_Port,LED9_Pin,RESET);
					HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin,RESET);
					HAL_GPIO_WritePin(LED8_GPIO_Port,LED8_Pin,RESET);

				}
				if (count5>=3 && count5<6){
					count5_2=count5-3;
					HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin,RESET);
					HAL_GPIO_WritePin(LED10_GPIO_Port,LED10_Pin,RESET);
					HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin,RESET);
					HAL_GPIO_WritePin(LED9_GPIO_Port,LED9_Pin,RESET);
					HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin,SET);
					HAL_GPIO_WritePin(LED8_GPIO_Port,LED8_Pin,SET);
				}
				if (count5>=1 && count5<3){
					count5_2=count5-1;
					HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin,RESET);
					HAL_GPIO_WritePin(LED10_GPIO_Port,LED10_Pin,RESET);
					HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin,SET);
					HAL_GPIO_WritePin(LED9_GPIO_Port,LED9_Pin,SET);
					HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin,RESET);
					HAL_GPIO_WritePin(LED8_GPIO_Port,LED8_Pin,RESET);
				}
				if (count5>=0 && count5<1){
					count5_2=8;
					HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin,SET);
					HAL_GPIO_WritePin(LED10_GPIO_Port,LED10_Pin,SET);
					HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin,RESET);
					HAL_GPIO_WritePin(LED9_GPIO_Port,LED9_Pin,RESET);
					HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin,RESET);
					HAL_GPIO_WritePin(LED8_GPIO_Port,LED8_Pin,RESET);
				}
				if (count5<0){
					count5_2=7;
					status5=GREEN_status;
					count5=5;
				}
				count5--;
				break;
			case YELLOW_status:
				count5_2=count5;
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
				if (count5<=0){
					status5=RED_status;
					count5=7;
				}
				count5--;
				break;
			case GREEN_status:
				count5_2=count5+2;
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
				if (count5<=0){
					status5=YELLOW_status;
					count5=2;
				}
				count5--;
				break;
			default:
				break;
		}
	display7SEG2(count5_2);

}
