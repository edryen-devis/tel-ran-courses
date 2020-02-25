/*
 * main.c
 *
 *  Created on: Jan 27, 2020
 *      Author: Edryen
 */
#include<stdio.h>
int main(){
	int number;
	printf("Enter your number, please");
	fflush(stdout);
	scanf("%d", &number);
	printf("We doubled your number: %d", number*2);
	return 0;
}
