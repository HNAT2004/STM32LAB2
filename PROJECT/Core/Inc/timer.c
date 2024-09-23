/*
 * timer.c
 *
 *  Created on: Sep 23, 2024
 *      Author: ADMIN
 */

#include "main.h"
#include <timer.h>

int timer_flag = 0;
int counter = 0;

void setTimer(int x){
	counter = x;
	timer_flag = 0;
}

int isTimerExpired(void){
	if (timer_flag == 1){
		timer_flag = 0;
		return 1;
	}
	return 0;
}

void timerRun(void){
	if(counter > 0){
		counter--;
		if(counter <= 0){
			timer_flag = 1;
		}
	}
}
