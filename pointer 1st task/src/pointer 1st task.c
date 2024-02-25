/*
 ============================================================================
 Name        : pointer.c
 Author      : masyof
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int op1[5] = {1,2,3,4,5};
int op2[5] = {6,7,8,9,10};
int result[5] = {0,0,0,0,0};

int *collect[3] = {op1, op2, result};

int *ptr=0;;




int main(void) {
	int *ptr;
	    for (int i = 0; i < 5; i++) {
	        for (int j = 0; j < 2; j++) {
	            ptr = collect[j] +i;

	            printf("The address of array no %d element %d is %d \t",j+1,i, (int *)ptr);

	        }
	        *ptr = *(collect[0] + i) + *(collect[1] + i);

	        printf("The total is %d\n", *ptr);

	    }

	return EXIT_SUCCESS;
}

