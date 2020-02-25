/*
 * bestof3.c
 *
 *  Created on: Jan 29, 2020
 *      Author: Tel-ran.de
 */

#include<stdio.h>
void printGreatest(int a, int b, int c);
int greatestNumber(int a, int b, int c);
int main(){
	printGreatest(5,12,4);
	return 0;
}
void printGreatest(int a, int b, int c){
	printf("The greatest number of %d, %d, %d is %d\n", a,b,c,greatestNumber(a,b,c));
}
int greatestNumber(int a, int b, int c){
	int greatest;
	if(a>b){
		if(a>c){
			greatest=a;
			}else{
				greatest=c;
			}

	}else{
		if(b>c){
			greatest=b;
		}else{
			greatest=c;

		}
	}
	return greatest;
}
