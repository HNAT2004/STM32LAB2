/*
 * software_timer.c
 *
 *  Created on: Sep 23, 2024
 *      Author: ADMIN
 */

#include "main.h"
#include "software_timer.h"

const int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1, 2, 3, 4};

int timer0_flag = 0;
int timer0_counter = 0;

void setTimer0(int duration){
	timer0_counter = duration;
	timer0_flag = 0;
}

//int isTimerExpired(void){
//	if (timer_flag == 1){
//		timer_flag = 0;
//		return 1;
//	}
//	return 0;
//}

void timer_run(void){
	if(timer0_counter > 0){
		timer0_counter--;
		if(timer0_counter <= 0){
			timer0_flag = 1;
		}
	}
}

void display7SEG(int number){
	switch(number){
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

void update7SEG(int index){
	switch(index){
	case 0:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		display7SEG(led_buffer[0]);
		break;
	case 1:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		display7SEG(led_buffer[1]);
		break;
	case 2:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, SET);
		display7SEG(led_buffer[2]);
		break;
	case 3:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, SET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, SET);
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
		display7SEG(led_buffer[3]);
		break;
	default:
		break;
	}
}

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
uint8_t matrix_buffer[8] = {0xE7,0xDB,0xBD,0xBD,0x81,0xBD,0xBD,0xBD};

void updateLEDMatrix(int index){
	HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
	HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
	HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
	HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
	HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
	HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
	HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
	HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);

	switch(index){
	case 0:
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, RESET);
		break;
	default:
		break;
	}
}

void matrixOFF(){
	HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
	HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
	HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
	HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
	HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
	HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
	HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
	HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);
}

void displayA(int index) {
	updateLEDMatrix(index);
    uint8_t row_signal = matrix_buffer[index];
    HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, (row_signal & 0x01) ? SET : RESET);
    HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, (row_signal & 0x02) ? SET : RESET);
    HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, (row_signal & 0x04) ? SET : RESET);
    HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, (row_signal & 0x08) ? SET : RESET);
    HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, (row_signal & 0x10) ? SET : RESET);
    HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, (row_signal & 0x20) ? SET : RESET);
    HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, (row_signal & 0x40) ? SET : RESET);
    HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, (row_signal & 0x80) ? SET : RESET);
}

void animation_of_A(){
	for (int i = 0; i < MAX_LED_MATRIX; i++){
		updateLEDMatrix(i);
		uint8_t row_signal = matrix_buffer[i];
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, (row_signal & 0x01) ? SET : RESET);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, (row_signal & 0x02) ? SET : RESET);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, (row_signal & 0x04) ? SET : RESET);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, (row_signal & 0x08) ? SET : RESET);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, (row_signal & 0x10) ? SET : RESET);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, (row_signal & 0x20) ? SET : RESET);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, (row_signal & 0x40) ? SET : RESET);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, (row_signal & 0x80) ? SET : RESET);
		HAL_Delay(100);
	}
	matrixOFF();
	HAL_Delay(500);
	for (int i = MAX_LED_MATRIX - 1; i >= 0; i--){
		updateLEDMatrix(i);
		uint8_t row_signal = matrix_buffer[i];
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, (row_signal & 0x01) ? SET : RESET);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, (row_signal & 0x02) ? SET : RESET);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, (row_signal & 0x04) ? SET : RESET);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, (row_signal & 0x08) ? SET : RESET);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, (row_signal & 0x10) ? SET : RESET);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, (row_signal & 0x20) ? SET : RESET);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, (row_signal & 0x40) ? SET : RESET);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, (row_signal & 0x80) ? SET : RESET);
		HAL_Delay(100);
	}
	matrixOFF();
	HAL_Delay(500);
	for (int i = 0; i < MAX_LED_MATRIX; i++){
		updateLEDMatrix(i);
		uint8_t row_signal = matrix_buffer[i];
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, (row_signal & 0x01) ? SET : RESET);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, (row_signal & 0x02) ? SET : RESET);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, (row_signal & 0x04) ? SET : RESET);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, (row_signal & 0x08) ? SET : RESET);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, (row_signal & 0x10) ? SET : RESET);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, (row_signal & 0x20) ? SET : RESET);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, (row_signal & 0x40) ? SET : RESET);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, (row_signal & 0x80) ? SET : RESET);
		HAL_Delay(1);
	}
	matrixOFF();
	HAL_Delay(500);
}

