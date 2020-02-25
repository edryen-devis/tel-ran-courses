/*
 * avtoban.c
 *
 *  Created on: Feb 3, 2020
 *      Author: Edryen
 */

#include<stdio.h>
void calcFine(int speedFine, int lineFine);
int getMaxSpeed(int line);
int getTypeAuto(float weight, int axis);
int checkSpeed(int maxSpeed, float currentSpeed);
int checkline(int line, int typeAuto);
void checkAll(int line, float weight, int axis, float currentSpeed);

int main(){
	float currentSpeed=110;
	float weight=3400;
	int axis=2;
	int line=1;

	checkAll(line,weight,axis,currentSpeed);
	return 0;
}

void checkAll(int line, float weight, int axis, float currentSpeed){
	int maxSpeedLine=getMaxSpeed(line);
	int typeAuto=getTypeAuto(weight, axis);
	int lineFine=checkLine(line, typeAuto);
	int speedFine=checkSpeed(maxSpeedLine, currentSpeed);
	calcFine(speedFine, lineFine);
}

int getMaxSpeed(int line){
	switch(line){
	case 1:
		return 130;
		break;
	case 2:
		return 110;
		break;
	case 3:
		return 90;
		break;
	default:
		printf("error\n");
		return -1;
	}
}

int getTypeAuto(float weight, int axis){
	if(weight <= 3500){
		return 1;
	}if(weight>3500 && axis>2){
		return 2;
	}
	return 3;
}
int checkLine(int line, int typeAuto){
	if(line<3&&typeAuto==2){
		return 100;
	}if(line == 1 && typeAuto == 3){
		return 100;
	}
	return 0;
}
int checkSpeed(int maxSpeed, float currentSpeed){
	float res=currentSpeed - maxSpeed;
	if(res<10){
		return 0;
	}if(res>=10 && res<20){
		return 30;
	}if(res>=20 && res<30){
		return 100;
	}if(res>=30 && res<50){
		return 250;
	}if(res>50){
		printf("You are pedestrian now\n");
		return 5000;
	}
}

void calcFine(int speedFine, int lineFine){
	if(speedFine>0 || lineFine>0){
		printf("Dear Driver\n");
		printf("Speed fine is: %d\n", speedFine);
		printf("Line fine is: %d\n", lineFine);
		printf("Total fine is: %d\n", speedFine+lineFine);
		printf("Have a nice day!\n");
	}else{printf("Have a nice day!\n");

	}
}

































