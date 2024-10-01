/*
 * matrix.h
 *
 *  Created on: Oct 1, 2024
 *      Author: ADMIN
 */

#ifndef INC_MATRIX_H_
#define INC_MATRIX_H_
#include "main.h"
extern uint8_t matrix_buffer[8];
void updateLEDMatrix(int index);
void setUpLEDMatrix();
void updateLEDMatrixBuffer(int num);
#endif /* INC_MATRIX_H_ */
