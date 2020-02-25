/*
 * loopinloop.c
 *
 *  Created on: Feb 10, 2020
 *      Author: Tel-ran.de
 */

#include<stdio.h>
//void printStars(int num, int row);

int main(){
//	printStars(28,5);

	return 0;
}

/*void printStars(int num, int row){
	int i=1; int j=i;
	while (i<=num){
		if(j<row){
			printf("*");
			j++;
		}else{
			printf("*\n");
			j=1;
		}
		i++;
	}

}*/

int countNumber(int num){
	int i;
	for(i=0; num!=0; i++){
		num=num/10;
		printf("i: %d, num: %d\n", i,num)
	}
