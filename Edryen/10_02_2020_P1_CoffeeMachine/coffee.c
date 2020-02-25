/*
 * coffee.c
 *
 *  Created on: Feb 10, 2020
 *      Author: Edryen
 */

#include<stdio.h>

void coffeeMachine(int choice);
void latte();
void americano();
void espresso();
void cappuccino();
void addCoffee(int quantity);
void addWater(int quantity);
void addMilk(int quantity);


int main(){
	fflush(stdout);
	printf("Enter number of drink\n");
	int choice;


	scanf("%d", &choice);

	coffeeMachine(choice);

	return 0;
}

void coffeeMachine(int choice){
	switch (choice){

	case 1:
		latte();
		break;
	case 2:
		americano();
		break;
	case 3:
		espresso();
		break;
	case 4:
		cappuccino();
		break;
	default:
		printf("Error, no drink selected.\n");
	}
}

void latte(){
	printf("You selected Latte\n");
	addCoffee(5);
	addWater(40);
	addMilk(80);
	printf("Your Latte is ready\n");
}

void americano(){
	printf("You selected Americano\n");
	addCoffee(8);
	addWater(100);
	printf("Your Americano is ready\n");
}

void espresso(){
	printf("You selected Espresso\n");
	addCoffee(8);
	addWater(30);
	printf("Your Espresso is ready\n");
}

void cappuccino(){
	printf("You selected Cappuccino\n");
	addCoffee(8);
	addWater(80);
	addMilk(40);
	printf("Your Cappuccino is ready\n");
}

void addCoffee(int quantity){
	printf("Adding %d g of coffee\n", quantity);
}

void addWater(int quantity){
	printf("Adding %d ml of water\n", quantity);
}

void addMilk(int quantity){
	printf("Adding %d ml of milk\n", quantity);
}
