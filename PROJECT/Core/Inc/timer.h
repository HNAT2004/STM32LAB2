/*
 * timer.h
 *
 *  Created on: Sep 23, 2024
 *      Author: ADMIN
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

<<<<<<< HEAD
extern int timer_flag;

void setTimer(int x);
int isTimerExpired(void);
void timerRun(void);
void display7SEG(int number);
void update7SEG(int index);
=======
int extern timer_flag;
int timer_flag = 0;
int counter = 0;

void setTimer(int x){
	counter = x;
	timer_flag = 0;
}

int isTimerExpired(){
	if (timer_flag == 1){
		timer_flag = 0;
		return 1;
	}
	return 0;
}

void timerRun(){
	if(counter > 0){
		counter--;
		if(counter <= 0){
			timer_flag = 1;
		}
	}
}
>>>>>>> 9941bbf6ecd672048379992db45154c467b9d62d

#endif /* INC_TIMER_H_ */
