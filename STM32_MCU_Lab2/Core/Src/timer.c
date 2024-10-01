/*
 * timer.c
 *
 *  Created on: Oct 1, 2024
 *      Author: ADMIN
 */
#include "timer.h"
void setTimer1(int duration){
	timer_1 = duration/TICK;
	flag_1 = 0;
}
void timer1Run(){
	timer_1--;
	if(timer_1 == 0) flag_1 = 1;
}
void setTimer2(int duration){
	timer_2 = duration/TICK;
	flag_2 = 0;
}
void timer2Run(){
	timer_2--;
	if(timer_2 == 0) flag_2 = 1;
}
