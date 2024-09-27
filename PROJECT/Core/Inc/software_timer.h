/*
 * software_timer.h
 *
 *  Created on: Sep 23, 2024
 *      Author: ADMIN
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_flag;

void setTimer0(int x);
int isTimerExpired(void);
void timer_run(void);
void display7SEG(int number);
void update7SEG(int index);
void updateClockBuffer(void);
void updateLEDMatrix(int index);
void displayA(int index);

#endif /* INC_SOFTWARE_TIMER_H_ */
