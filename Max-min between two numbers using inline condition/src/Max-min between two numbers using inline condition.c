/*
 ============================================================================
 Name        : Max-min.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int first,second,min;

	printf("please enter two number : \n");
	fflush(stdin);	fflush(stdout);
	scanf("%d %d", &first, &second);
	fflush(stdin);	fflush(stdout);
	min = (first < second)?first:second;

	printf("The minimum number is %d\r\n", min);
	//return EXIT_SUCCESS;
}
