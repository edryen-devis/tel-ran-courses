/*
 * internalsum.c
 *
 *  Created on: Feb 5, 2020
 *      Author: Tel-ran.de
 */

#include<stdio.h>
int sumDigitis(int num);

int main(){

	printf("Internal sum is %d", sumDigitis(67624));

	return 0;
}

int sumDigitis(int num){
	int sum=0;
	while(num!=0){
		sum=sum+num%10;
		num=num/10;
	}
	return sum;
}
