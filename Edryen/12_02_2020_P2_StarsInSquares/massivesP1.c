/*
 * massivesP1.c
 *
 *  Created on: Feb 12, 2020
 *      Author: Tel-ran.de
 */

#include<stdio.h>
void printArray(int arr[], int size);

int main(){
	/*int size=5;
	int array[size];
	int array[0]=1;
	int array[1]=4;

	int array1[]={3,5,6,7,8};

	int array2[10]={6,7,12};*/
	printArray(6, 8);

	return 0;
}
void printArray(int arr[], int size){
	int i;
	for(i=0; i<size; i++){
		printf("arr[%d] = %d\n", i, arr[i] );
	}

}




