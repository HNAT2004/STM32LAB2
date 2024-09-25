/*
 * timer.h
 *
 *  Created on: Sep 23, 2024
 *      Author: ADMIN
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int timer0_flag;
extern int hour;
extern int minute;
extern int second;

void setTimer0(int x);

int isTimerExpired(void);
void timer_run(void);
void display7SEG(int number);
void update7SEG(int index);
void updateClockBuffer(void);
#endif /* INC_TIMER_H_ */
