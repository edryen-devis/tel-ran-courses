/*
 * looppractice.c
 *
 *  Created on: Feb 5, 2020
 *      Author: Edryen
 */

#include<stdio.h>
//void gagarin(int num);
void gagarin2(int num);

int main(){


//	gagarin(10);
	gagarin2(20);




	return 0;
}
/*void gagarin(int num){
	int i;
	for (i=1; i<=num; i++){
		printf("%d\n", i);

	}

	printf("Go");

}
*/
void gagarin2(int num){
	while(num!=0){
		printf("%d\n", num);
		num--;
	}

	printf("Go");

}


