/*
 * 4.c
 *
 *  Created on: Jan 27, 2020
 *      Author: Tel-ran.de
 */

#include<stdio.h>
void fan(int mode);

int main(){
	fflush(stdout);

	fan(0);

return 0;
}
void fan(int mode){
	switch(mode){
	case 0:
		printf("Power is off\n");
		break;
	case 1:
		printf("Low mode\n");
		break;
	case 2:
		printf("Normal mode\n");
		break;
	case 3:
		printf("High mode\n");
		break;
	case 4:
		printf("Wrong mode\n");
		break;
	}
}
