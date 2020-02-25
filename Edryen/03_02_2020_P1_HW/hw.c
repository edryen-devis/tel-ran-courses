/*
 * hw.c
 *
 *  Created on: Feb 3, 2020
 *      Author: Edryen
 */

#include<stdio.h>
int isNEven(int a);
void printNEven(int a);
void isNintheRange(int a);
float average(int num1,int num2,int num3);

int main(){
	isNintheRange(10);
	int num1=2, num2=5, num3=6;
	float res=average(num1, num2, num3);
	printf("%f\n", res);
	printf("%f\n", average(4,7,12));
	return 0;
}

int isNEven(int a){
	if(a%2 == 0){
		return 0;
	}else{
		return 1;
	}
}

void printNEven(int a){
	(isNEven(a)==0)? printf("%d is even\n", a):printf("%d is odd\n", a);
}

void isNintheRange(int a){
	if(a>=0&&a<=100){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	(a>=0&&a<=100)?printf("y\n"):printf("n\n");
}

float average(int num1,int num2,int num3){
	return (float)(num1+num2+num3)/3;
}







