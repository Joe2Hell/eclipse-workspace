/*
 * main.c
 *
 *  Created on: Jan 31, 2024
 *      Author: Muham
 */

#include <stdio.h>
#include <stdlib.h>


int main (void){
	int Num,i;
	int Sum = 0;
	printf("Please enter a number : ");
	fflush(stdin);	fflush(stdout);
	scanf("%d",&Num);

	for(i = 0 ; i<=Num ;i++){
		Sum += i;
	}
	printf("the summation between 1 and %d is : %d",Num ,Sum);

}

