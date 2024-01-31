/*
 ============================================================================
 Name        : Continue.c
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
		if(i ==5 || i==6)
		{
			printf("coming out of the loop when i = %d\r", i);
			continue;// el continue beykamel 3ady,  try commenting continue  to see what happens
			//break;

		}
		printf("%d\r", i);

	}
}
