/*
 * timer.h
 *
 *  Created on: Sep 23, 2024
 *      Author: ADMIN
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int timer_flag;

void setTimer(int x);
int isTimerExpired(void);
void timerRun(void);

#endif /* INC_TIMER_H_ */
