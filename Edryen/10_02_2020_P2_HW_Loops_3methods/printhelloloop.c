/*
 * printhelloloop.c
 *
 *  Created on: Feb 10, 2020
 *      Author: Edryen
 */

#include<stdio.h>
void printHello(int num);

int main(){
	printHello(5);

	return 0;
}
void printHello(int num){
	int i;
	for (i=1; i!=num; i++){
		printf("%d Hello!", i);
		num--;
	}
}

