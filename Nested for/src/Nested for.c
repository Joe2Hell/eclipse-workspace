/*
 ============================================================================
 Name        : Nested.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	int i;	int j;
	printf("please enter number of rows :");
	fflush(stdin);	fflush(stdout);
	scanf("%d", &num);
	for(i = 0; i < num; i++)
	{
		for(j = 0+i ;j < num; j++)
			{
				printf("%d ",j);

			}
		printf("\n");

	}




}

