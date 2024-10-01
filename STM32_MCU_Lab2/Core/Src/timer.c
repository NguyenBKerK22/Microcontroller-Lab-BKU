/*
 * timer.c
 *
 *  Created on: Oct 1, 2024
 *      Author: ADMIN
 */
#include "timer.h"
void setTimer1(int duration){
	count = duration/TICK;
	flag = 0;
}
void timer1Run(){
	count--;
	if(count == 0) flag = 1;
}

