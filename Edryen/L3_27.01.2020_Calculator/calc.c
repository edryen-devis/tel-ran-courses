/*
 * calc.c
 *
 *  Created on: Jan 27, 2020
 *      Author: Edryen
 */
#include<stdio.h>
int main(){
	fflush(stdout);
	int a=3;
	switch(a){
	case 0:
		printf("%d\n",0);
		break;
	case 1:
		printf("%d\n",1);
		break;
	case 2:
		printf("%d\n",2);
		break;
	case 3:
		printf("%d\n",3);
		break;
	default:
		printf("%d\n",-1);
	}
	return 0;
}










