/*
 * LearnLoopFor.c
 *
 *  Created on: Feb 12, 2020
 *      Author: Tel-ran.de
 */
#include<stdio.h>
void printEvenNumber(int num);

int main(){
	printEvenNumber(13);

	int a, b, i;

	for(i=0,a=0,b=10; i<11; i++){
		a++;
		b++;
	}
	printf("a=%d, b=%d\n", a,b);



	return 0;
	}

void printEvenNumber(int num){
	if(num%2!=0)
		num=num-1;
	for(num;num>0;num=num-2){
		printf("%d\n",num);
	}


}

