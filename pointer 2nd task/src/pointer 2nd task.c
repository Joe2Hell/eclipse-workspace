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

int red[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
};

int blue[4][4] = {
		{21,22,23,24},
		{25,26,27,28},
		{29,30,31,32},
		{33,34,35,36}
};

int green[4][4] = {
		{41,42,43,44},
		{45,46,47,48},
		{49,50,51,52},
		{53,54,55,56}
};
int *rgb[3] = {(int *)red, (int *)blue, (int *)green};
int row = 0;
int column = 0;
int *ptr = 0;

int main(void) {
	fflush(stdin);		fflush(stdout);
	printf("Enter the row : ");
	fflush(stdin);		fflush(stdout);
	scanf("%d", &row);
	fflush(stdin);		fflush(stdout);
	printf("Enter the column : ");
	fflush(stdin);		fflush(stdout);
	scanf("%d", &column);

	if((column | row) > 3)
	{
		printf("Wrong entry please enter a number less than 4");
		fflush(stdin);		fflush(stdout);

	}else
	{
		printf("RGB of (%d.%d) is : ",row,column);

		for(int i = 0; i<3; i++)
		{
			ptr = rgb[i];
			fflush(stdin);		fflush(stdout);
			printf("%d ", *(rgb[i] + row * 4 + column));


		}

	}

	return EXIT_SUCCESS;
}
