/*
 * simplenumber.c
 *
 *  Created on: Feb 5, 2020
 *      Author: Edryen
 */
#include<stdio.h>

void isTheNumberSimple(int number);

int main(){
	int number;
	printf("Input a number\n");
	fflush(stdout);
	scanf("%d", &number);
	isTheNumberSimple(number);
	return 0;


}
void isTheNumberSimple(int number){
	int i=1;
	int d=0;
	while(i<=number){
		if(number%i++ == 0){
			d++;
		}else
			continue;
		if(d==3)break;
	}
	printf("Number %d is %ssimple number", number, (d==2)? "":"not ");

}






