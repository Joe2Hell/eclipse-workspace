/*
 ============================================================================
 Name        : Area.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float radius,area,circum;
	char choice = 0;
	printf("Please enter the radius :\n");
	fflush(stdin);	fflush(stdout);
	scanf("%f",&radius);
	fflush(stdin);	fflush(stdout);
	printf("Please enter operation :\n");
	fflush(stdin);	fflush(stdout);
	scanf("%c",&choice);
	fflush(stdin);	fflush(stdout);

	switch(choice){
	case'A':
	case'a':{
		area = 3.14 * radius * radius;
		fflush(stdin);	fflush(stdout);
		printf("Area is %f",area);
		fflush(stdin);	fflush(stdout);
	}break;
	case'C':
	case'c':{
		circum = 3.14 * 2 * radius;
		fflush(stdin);	fflush(stdout);
		printf("The circumference is %f", circum);
		fflush(stdin);	fflush(stdout);
	}break;


	break;
	default: printf("Wrong choice!");
	}
}
