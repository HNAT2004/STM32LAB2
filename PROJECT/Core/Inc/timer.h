/*
 * timer.h
 *
 *  Created on: Sep 23, 2024
 *      Author: ADMIN
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

int extern timer_flag;
int timer_flag = 0;
int counter = 0;
void SetTimer(int x){
	counter = x;
	timer_flag = 0;
}
void timerRun(){
	if(counter > 0){
		counter--;
		if(counter <= 0){
			timer_flag = 1;
		}
	}
}

#endif /* INC_TIMER_H_ */
