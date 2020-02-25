/*
 * switch.c
 *
 *  Created on: Jan 27, 2020
 *      Author: Edryen
 */
#include<stdio.h>
int main(){
	char answer;
	printf("Do you want me to salute you?(y/n)\n");
	fflush(stdout);
	scanf("%c", &answer);
	if(answer=='y'){
		printf("Hello!");
	}else if(answer=='n'){
		printf("Bye");
	}else{
		printf("I can't understand you");
	}
	return 0;
}
