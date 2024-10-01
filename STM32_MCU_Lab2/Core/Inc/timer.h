/*
 * timer.h
 *
 *  Created on: Oct 1, 2024
 *      Author: ADMIN
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_
#define TICK 10
extern int timer_1,flag_1;
extern int timer_2,flag_2;
void setTimer1(int duration);
void timer1Run();
void setTimer2(int duration);
void timer2Run();
#endif /* INC_TIMER_H_ */
