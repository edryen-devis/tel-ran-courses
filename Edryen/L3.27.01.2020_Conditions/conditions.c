/*
 * conditions.c
 *
 *  Created on: Jan 27, 2020
 *      Author: Edryen
 */
#include<stdio.h>
int main(){
	int a;
	printf("Enter number\n");
	fflush(stdout);
	scanf("%d\n", &a);
	if(a>5){
		printf("%d > 5\n", a);
	}else if (a<5){
		printf("%d < 5\n", a);
	} else {
		printf("%d =5\n", a);
	}
	return 0;
}
