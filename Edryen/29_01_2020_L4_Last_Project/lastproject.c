/*
 * lastproject.c
 *
 *  Created on: Jan 29, 2020
 *      Author: Edryen
 */
#include<stdio.h>
float median(int n1, int n2);
int main(){
	int num1=10;
	int num2=13;
	float resultat;
	printf("%.2f\n", median(num1,num2));
	resultat=median(124,315);
	printf("%.2f\n", resultat);
return 0;
}
float median(int n1, int n2){
	return (float)(n1+n2)/2;
	//float res;
	//res=(float)(n1+n2)/2;
	//return res;
}
