/*
 * main.c
 *
 *  Created on: Jan 23, 2024
 *      Author: Muham
 */

#include<stdio.h>
#include <stdlib.h>

int main()
{
	char c;
	float r;
	float area;
	float circ;


	printf("Please enter the radius : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&r);
	fflush(stdin); fflush(stdout);
	printf("please enter your operation, a for area and b for radius :");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);

	if(c == 'a'){
		area = 3.14159*r*r;
		printf("area = %f",area);
	}
	else if(c == 'b'){

		circ = 3.14159*2*r;
		printf("circumference is : %f",circ);
	}
	else
		printf("wrong choice");



	return 0;
}
