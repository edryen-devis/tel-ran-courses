/*
 * main.c
 *
 *  Created on: Jan 27, 2020
 *      Author: Tel-ran.de
 */

#include<stdio.h>
int main(){
	int a;
	printf("Enter number\n");
	fflush(stdout);
	scanf("%d", &a);
	if(a>5){
		printf("%d > 5\n", a);
	}else if (a<5){
		printf("%d < 5\n", a);
	} else {
		printf("%d =5", a);
	}
	return 0;
}
