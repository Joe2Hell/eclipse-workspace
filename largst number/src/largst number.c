/*
 ============================================================================
 Name        : largst.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,c,p;


	printf("Please enter 3 numbers :");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	fflush(stdin); fflush(stdout);
	scanf("%f",&c);

	if(a > b)
	{
		p = a;
	}
	else
	{
		p = b;
	}
	if (p > c)
	{
		printf("the largest number is : %f",p);
	}
	else
	{
		printf("the largest number is : %f",c);
	}

}
