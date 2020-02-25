/*
 * massivesP2.c
 *
 *  Created on: Feb 12, 2020
 *      Author: Tel-ran.de
 */

#include<stdio.h>
void pow2(int num);
void pow2array(int arr[]);

int main(){
	fflush(stdout);
	int num=10;
	printf("Value in main before pow2 %d\n", num);
	pow2(num);
	printf("Value in main after pow2 %d\n", num);
	printf("\n");

	int arr[]={10,20};
	printf("Value in main before array %d\n", arr[0]);
	pow2array(arr);
	printf("Value in main after array %d\n", arr[0]);
	printf("\n");

	return 0;
}

void pow2(int num){
	num=num*num;
	printf("Value in pow2 is %d\n", num);
}

void pow2array(int arr[]){
	arr[0]=arr[0]*arr[0];
	printf("Value in pow2array is %d\n", arr[0]);
}



