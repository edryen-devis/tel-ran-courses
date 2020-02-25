/*
 * main.c
 *
 *  Created on: Jan 27, 2020
 *      Author: Tel-ran.de
 */
#include<stdio.h>
int main(){
	int number;
	printf("Enter your number, please\n");
	fflush(stdout);
	scanf("%d", &number);
	printf("We doubled your number: %d\n", number*2);

	int a=20;
	int b=15;
	a=(a>b)?b:a;
	printf("%d\n", a);

	printf("%d",(1<0)?10:0);
	return 0;
}
