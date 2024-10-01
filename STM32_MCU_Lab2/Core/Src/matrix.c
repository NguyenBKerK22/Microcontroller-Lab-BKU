/*
 * matrix.c
 *
 *  Created on: Oct 1, 2024
 *      Author: ADMIN
 */

#include "matrix.h"
void setUpLEDMatrix(){
	HAL_GPIO_WritePin(ENM0_GPIO_Port,ENM0_Pin,SET);
	HAL_GPIO_WritePin(ENM1_GPIO_Port,ENM1_Pin,SET);
	HAL_GPIO_WritePin(ENM2_GPIO_Port,ENM2_Pin,SET);
	HAL_GPIO_WritePin(ENM3_GPIO_Port,ENM3_Pin,SET);
	HAL_GPIO_WritePin(ENM4_GPIO_Port,ENM4_Pin,SET);
	HAL_GPIO_WritePin(ENM5_GPIO_Port,ENM5_Pin,SET);
	HAL_GPIO_WritePin(ENM6_GPIO_Port,ENM6_Pin,SET);
	HAL_GPIO_WritePin(ENM7_GPIO_Port,ENM7_Pin,SET);

	HAL_GPIO_WritePin(ROW0_GPIO_Port,ROW0_Pin,SET);
	HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_Pin,SET);
	HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_Pin,SET);
	HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_Pin,SET);
	HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_Pin,SET);
	HAL_GPIO_WritePin(ROW5_GPIO_Port,ROW5_Pin,SET);
	HAL_GPIO_WritePin(ROW6_GPIO_Port,ROW6_Pin,SET);
	HAL_GPIO_WritePin(ROW7_GPIO_Port,ROW7_Pin,SET);
}
void updateLEDMatrix(int index){
	setUpLEDMatrix();
	switch (index){
			case 0:
				//DISPLAY matrix_buffer[0]
				HAL_GPIO_WritePin(ENM0_GPIO_Port,ENM0_Pin,RESET);
				if((matrix_buffer[0] & 0x01) == 0x01){
					HAL_GPIO_WritePin(ROW0_GPIO_Port,ROW0_Pin,RESET);
				}
				if((matrix_buffer[0] & 0x02) == 0x02){
					HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_Pin,RESET);
				}
				if((matrix_buffer[0] & 0x04) == 0x04){
					HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_Pin,RESET);
				}
				if((matrix_buffer[0] & 0x08) == 0x08){
					HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_Pin,RESET);
				}
				if((matrix_buffer[0] & 0x10) == 0x10){
					HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_Pin,RESET);
				}
				if((matrix_buffer[0] & 0x20) == 0x20){
					HAL_GPIO_WritePin(ROW5_GPIO_Port,ROW5_Pin,RESET);
				}
				if((matrix_buffer[0] & 0x40) == 0x40){
					HAL_GPIO_WritePin(ROW6_GPIO_Port,ROW6_Pin,RESET);
				}
				if((matrix_buffer[0] & 0x80) == 0x80){
					HAL_GPIO_WritePin(ROW7_GPIO_Port,ROW7_Pin,RESET);
				}
				break;
			case 1:
				HAL_GPIO_WritePin(ENM1_GPIO_Port,ENM1_Pin,RESET);
				if((matrix_buffer[1] & 0x01) == 0x01){
					HAL_GPIO_WritePin(ROW0_GPIO_Port,ROW0_Pin,RESET);
				}
				if((matrix_buffer[1] & 0x02) == 0x02){
					HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_Pin,RESET);
				}
				if((matrix_buffer[1] & 0x04) == 0x04){
					HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_Pin,RESET);
				}
				if((matrix_buffer[1] & 0x08) == 0x08){
					HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_Pin,RESET);
				}
				if((matrix_buffer[1] & 0x10) == 0x10){
					HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_Pin,RESET);
				}
				if((matrix_buffer[1] & 0x20) == 0x20){
					HAL_GPIO_WritePin(ROW5_GPIO_Port,ROW5_Pin,RESET);
				}
				if((matrix_buffer[1] & 0x40) == 0x40){
					HAL_GPIO_WritePin(ROW6_GPIO_Port,ROW6_Pin,RESET);
				}
				if((matrix_buffer[1] & 0x80) == 0x80){
					HAL_GPIO_WritePin(ROW7_GPIO_Port,ROW7_Pin,RESET);
				}
				break;
			case 2:
				HAL_GPIO_WritePin(ENM2_GPIO_Port,ENM2_Pin,RESET);
				if((matrix_buffer[2] & 0x01) == 0x01){
					HAL_GPIO_WritePin(ROW0_GPIO_Port,ROW0_Pin,RESET);
				}
				if((matrix_buffer[2] & 0x02) == 0x02){
					HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_Pin,RESET);
				}
				if((matrix_buffer[2] & 0x04) == 0x04){
					HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_Pin,RESET);
				}
				if((matrix_buffer[2] & 0x08) == 0x08){
					HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_Pin,RESET);
				}
				if((matrix_buffer[2] & 0x10) == 0x10){
					HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_Pin,RESET);
				}
				if((matrix_buffer[2] & 0x20) == 0x20){
					HAL_GPIO_WritePin(ROW5_GPIO_Port,ROW5_Pin,RESET);
				}
				if((matrix_buffer[2] & 0x40) == 0x40){
					HAL_GPIO_WritePin(ROW6_GPIO_Port,ROW6_Pin,RESET);
				}
				if((matrix_buffer[2] & 0x80) == 0x80){
					HAL_GPIO_WritePin(ROW7_GPIO_Port,ROW7_Pin,RESET);
				}
				break;
			case 3:
				HAL_GPIO_WritePin(ENM3_GPIO_Port,ENM3_Pin,RESET);
				if((matrix_buffer[3] & 0x01) == 0x01){
					HAL_GPIO_WritePin(ROW0_GPIO_Port,ROW0_Pin,RESET);
				}
				if((matrix_buffer[3] & 0x02) == 0x02){
					HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_Pin,RESET);
				}
				if((matrix_buffer[3] & 0x04) == 0x04){
					HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_Pin,RESET);
				}
				if((matrix_buffer[3] & 0x08) == 0x08){
					HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_Pin,RESET);
				}
				if((matrix_buffer[3] & 0x10) == 0x10){
					HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_Pin,RESET);
				}
				if((matrix_buffer[3] & 0x20) == 0x20){
					HAL_GPIO_WritePin(ROW5_GPIO_Port,ROW5_Pin,RESET);
								}
				if((matrix_buffer[3] & 0x40) == 0x40){
					HAL_GPIO_WritePin(ROW6_GPIO_Port,ROW6_Pin,RESET);
				}
				if((matrix_buffer[3] & 0x80) == 0x80){
					HAL_GPIO_WritePin(ROW7_GPIO_Port,ROW7_Pin,RESET);
				}
				break;
			case 4:
				HAL_GPIO_WritePin(ENM4_GPIO_Port,ENM4_Pin,RESET);
				if((matrix_buffer[4] & 0x01) == 0x01){
					HAL_GPIO_WritePin(ROW0_GPIO_Port,ROW0_Pin,RESET);
				}
				if((matrix_buffer[4] & 0x02) == 0x02){
					HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_Pin,RESET);
				}
				if((matrix_buffer[4] & 0x04) == 0x04){
					HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_Pin,RESET);
				}
				if((matrix_buffer[4] & 0x08) == 0x08){
					HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_Pin,RESET);
				}
				if((matrix_buffer[4] & 0x10) == 0x10){
					HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_Pin,RESET);
				}
				if((matrix_buffer[4] & 0x20) == 0x20){
					HAL_GPIO_WritePin(ROW5_GPIO_Port,ROW5_Pin,RESET);
				}
				if((matrix_buffer[4] & 0x40) == 0x40){
					HAL_GPIO_WritePin(ROW6_GPIO_Port,ROW6_Pin,RESET);
				}
				if((matrix_buffer[4] & 0x80) == 0x80){
					HAL_GPIO_WritePin(ROW7_GPIO_Port,ROW7_Pin,RESET);
				}
					break;
			case 5:
				HAL_GPIO_WritePin(ENM5_GPIO_Port,ENM5_Pin,RESET);
				if((matrix_buffer[5] & 0x01) == 0x01){
					HAL_GPIO_WritePin(ROW0_GPIO_Port,ROW0_Pin,RESET);
				}
				if((matrix_buffer[5] & 0x02) == 0x02){
					HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_Pin,RESET);
				}
				if((matrix_buffer[5] & 0x04) == 0x04){
					HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_Pin,RESET);
				}
				if((matrix_buffer[5] & 0x08) == 0x08){
					HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_Pin,RESET);
				}
				if((matrix_buffer[5] & 0x10) == 0x10){
					HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_Pin,RESET);
				}
				if((matrix_buffer[5] & 0x20) == 0x20){
					HAL_GPIO_WritePin(ROW5_GPIO_Port,ROW5_Pin,RESET);
				}
				if((matrix_buffer[5] & 0x40) == 0x40){
					HAL_GPIO_WritePin(ROW6_GPIO_Port,ROW6_Pin,RESET);
				}
				if((matrix_buffer[5] & 0x80) == 0x80){
					HAL_GPIO_WritePin(ROW7_GPIO_Port,ROW7_Pin,RESET);
				}
					break;
			case 6:
				HAL_GPIO_WritePin(ENM6_GPIO_Port,ENM6_Pin,RESET);
				if((matrix_buffer[6] & 0x01) == 0x01){
					HAL_GPIO_WritePin(ROW0_GPIO_Port,ROW0_Pin,RESET);
				}
				if((matrix_buffer[6] & 0x02) == 0x02){
					HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_Pin,RESET);
				}
				if((matrix_buffer[6] & 0x04) == 0x04){
					HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_Pin,RESET);
				}
				if((matrix_buffer[6] & 0x08) == 0x08){
					HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_Pin,RESET);
				}
				if((matrix_buffer[6] & 0x10) == 0x10){
					HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_Pin,RESET);
				}
				if((matrix_buffer[6] & 0x20) == 0x20){
					HAL_GPIO_WritePin(ROW5_GPIO_Port,ROW5_Pin,RESET);
				}
				if((matrix_buffer[6] & 0x40) == 0x40){
					HAL_GPIO_WritePin(ROW6_GPIO_Port,ROW6_Pin,RESET);
				}
				if((matrix_buffer[6] & 0x80) == 0x80){
					HAL_GPIO_WritePin(ROW7_GPIO_Port,ROW7_Pin,RESET);
				}
				break;
			case 7:
				HAL_GPIO_WritePin(ENM7_GPIO_Port,ENM7_Pin,RESET);
				if((matrix_buffer[7] & 0x01) == 0x01){
					HAL_GPIO_WritePin(ROW0_GPIO_Port,ROW0_Pin,RESET);
				}
				if((matrix_buffer[7] & 0x02) == 0x02){
					HAL_GPIO_WritePin(ROW1_GPIO_Port,ROW1_Pin,RESET);
				}
				if((matrix_buffer[7] & 0x04) == 0x04){
					HAL_GPIO_WritePin(ROW2_GPIO_Port,ROW2_Pin,RESET);
				}
				if((matrix_buffer[7] & 0x08) == 0x08){
					HAL_GPIO_WritePin(ROW3_GPIO_Port,ROW3_Pin,RESET);
				}
				if((matrix_buffer[7] & 0x10) == 0x10){
					HAL_GPIO_WritePin(ROW4_GPIO_Port,ROW4_Pin,RESET);
				}
				if((matrix_buffer[7] & 0x20) == 0x20){
					HAL_GPIO_WritePin(ROW5_GPIO_Port,ROW5_Pin,RESET);
				}
				if((matrix_buffer[7] & 0x40) == 0x40){
					HAL_GPIO_WritePin(ROW6_GPIO_Port,ROW6_Pin,RESET);
				}
				if((matrix_buffer[7] & 0x80) == 0x80){
					HAL_GPIO_WritePin(ROW7_GPIO_Port,ROW7_Pin,RESET);
				}
					break;
			default:
				break;
		}
}
void updateLEDMatrixBuffer(int num){
	switch(num){
	case 0:
		matrix_buffer[0] = 0x00;
		matrix_buffer[1] = 0x7E;
		matrix_buffer[2] = 0x81;
		matrix_buffer[3] = 0x81;
		matrix_buffer[4] = 0x81;
		matrix_buffer[5] = 0x81;
		matrix_buffer[6] = 0x7E;
		matrix_buffer[7] = 0x00;
		break;
	case 1:
		matrix_buffer[0] = 0x00;
		matrix_buffer[1] = 0x00;
		matrix_buffer[2] = 0x84;
		matrix_buffer[3] = 0xFE;
		matrix_buffer[4] = 0x80;
		matrix_buffer[5] = 0x00;
		matrix_buffer[6] = 0x00;
		matrix_buffer[7] = 0x00;
		break;
	case 2:
		matrix_buffer[0] = 0x00;
		matrix_buffer[1] = 0x84;
		matrix_buffer[2] = 0xC2;
		matrix_buffer[3] = 0xA2;
		matrix_buffer[4] = 0x92;
		matrix_buffer[5] = 0x8C;
		matrix_buffer[6] = 0x00;
		matrix_buffer[7] = 0x00;
		break;
	case 3:
		matrix_buffer[0] = 0x00;
		matrix_buffer[1] = 0x42;
		matrix_buffer[2] = 0x92;
		matrix_buffer[3] = 0x9A;
		matrix_buffer[4] = 0x96;
		matrix_buffer[5] = 0x62;
		matrix_buffer[6] = 0x00;
		matrix_buffer[7] = 0x00;
		break;
	case 4:
		matrix_buffer[0] = 0x00;
		matrix_buffer[1] = 0x30;
		matrix_buffer[2] = 0x28;
		matrix_buffer[3] = 0x24;
		matrix_buffer[4] = 0xFE;
		matrix_buffer[5] = 0x20;
		matrix_buffer[6] = 0x00;
		matrix_buffer[7] = 0x00;
		break;
	case 5:
		matrix_buffer[0] = 0x00;
		matrix_buffer[1] = 0x5E;
		matrix_buffer[2] = 0x92;
		matrix_buffer[3] = 0x92;
		matrix_buffer[4] = 0x92;
		matrix_buffer[5] = 0x62;
		matrix_buffer[6] = 0x00;
		matrix_buffer[7] = 0x00;
		break;
	case 6:
		matrix_buffer[0] = 0x00;
		matrix_buffer[1] = 0x7C;
		matrix_buffer[2] = 0x92;
		matrix_buffer[3] = 0x92;
		matrix_buffer[4] = 0x92;
		matrix_buffer[5] = 0x64;
		matrix_buffer[6] = 0x00;
		matrix_buffer[7] = 0x00;
		break;
	case 7:
		matrix_buffer[0] = 0x00;
		matrix_buffer[1] = 0x02;
		matrix_buffer[2] = 0x02;
		matrix_buffer[3] = 0xF2;
		matrix_buffer[4] = 0x0A;
		matrix_buffer[5] = 0x06;
		matrix_buffer[6] = 0x00;
		matrix_buffer[7] = 0x00;
		break;
	case 8:
		matrix_buffer[0] = 0x00;
		matrix_buffer[1] = 0x6C;
		matrix_buffer[2] = 0x92;
		matrix_buffer[3] = 0x92;
		matrix_buffer[4] = 0x92;
		matrix_buffer[5] = 0x6C;
		matrix_buffer[6] = 0x00;
		matrix_buffer[7] = 0x00;
		break;
	case 9:
		matrix_buffer[0] = 0x00;
		matrix_buffer[1] = 0x4C;
		matrix_buffer[2] = 0x92;
		matrix_buffer[3] = 0x92;
		matrix_buffer[4] = 0x92;
		matrix_buffer[5] = 0x7C;
		matrix_buffer[6] = 0x00;
		matrix_buffer[7] = 0x00;
		break;
	}
}
void shiftLeft(){
	uint8_t temp = matrix_buffer[0];
	for(int i=1;i<8;i++){
		matrix_buffer[i-1] = matrix_buffer[i];
	}
	matrix_buffer[7] = temp;
}
