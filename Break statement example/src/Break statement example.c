/*
 ============================================================================
 Name        : Break.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	for(int i = 0; i<10; i++)
	{
		if(i ==5)
		{
			printf("coming out of the loop when i = %d\r", i);
			break;// el break beytl3na bra el for loop kolha,  try commenting break to see what happens


		}
		printf("%d\r", i);

	}
}
