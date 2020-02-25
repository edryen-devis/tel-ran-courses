/*
 * pr.c
 *
 *  Created on: Feb 22, 2020
 *      Author: Tel-ran.de
 */
int main(){

 printf("Open Lesson \n");
 printf("I'm programmer \n");

 int a=12;
 printf ("Integer a = %d blablabla \n",a);
a=18;
printf("Integer a=%d \n",a);
a=7+8;
printf("Ravno = %d \n",a);
int res = 15+6;
printf ("res = %d \n",res);

res=add10 (10000);
printf ("res = %d \n",res);
	return 0;
}

int add10 (int salary){
	return salary+10;
}
