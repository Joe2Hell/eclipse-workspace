/*
 ============================================================================
 Name        : Average.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Average degree of students
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int NumberOfStudents = 0;
	float Degree[NumberOfStudents];
	float Average;
	printf("Please enter the number of students : ");
	fflush(stdin);		fflush(stdout);
	scanf("%d", &NumberOfStudents);

	for(int i = 1	;	i < NumberOfStudents +1	;	i++		){
		printf("Please enter student Number %d degree: ", i);
		fflush(stdin);		fflush(stdout);
		scanf("%f", &Degree[i]);
		Average += Degree[i];


	}
printf("The average degree is : %f", Average/NumberOfStudents);
}
