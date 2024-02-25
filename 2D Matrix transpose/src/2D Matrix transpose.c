/*
 ============================================================================
 Name        : 2D.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float Matrix[3][3];
	//float MatrixT[3][3];
	int r = 0;
	int c = 0;

	for(int i = 0 ; i < 3 ; i++){

		for( int j = 0 ; j < 3 ; j++){
			printf("Please enter the element of row %d and column %d : ", r, c);
			fflush(stdin);	fflush(stdout);
			scanf("%f",&Matrix[r][c]);
			c++;
		}r++;	c=0;
	}
r = 0;
c = 0;
	printf("Your matrix is :\n");

	for(int i = 0 ; i < 3 ; i++){

		for( int j = 0 ; j < 3 ; j++){
				printf("%f  ",Matrix[r][c]);
				c++;
			}printf("\n");
			r++;	c=0;
		}
	r = 0;
	c = 0;
printf("Your matrix's Transpose is :\n");
for(int i = 0 ; i < 3 ; i++){

			for( int j = 0 ; j < 3 ; j++){
				printf("%f  ",Matrix[r][c]);
				r++;
			}printf("\n");
			c++;	r=0;
		}

}
