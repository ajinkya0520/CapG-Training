


/*
 * Author: Ajinkya Bothe
 * Program: Write a program that takes a score (0-100) as input from the user and uses if statements to determine the corresponding grade:
	90-100: A
	80-89: B
	70-79: C
	60-69: D
	Below 60: F
	Print the grade.
 * DOC: 23/05/2024
 * */

#include<stdio.h>

int main()
{
	int score;

	printf("\nEnter the score:");
	scanf("%d",&score);

	if(score<=100 && score>=0){
		if(score>=90){
			printf("Your grade is: A");
		}else if(score>=80){
			printf("Your grade is: B");
		}else if(score>=70){
			printf("Your grade is: C");
		}else if(score>=60){
			printf("Your grade is: D");
		}else{
			printf("Your grade is: F");
		}
	}else{
		printf("\nInvalid score");
	}
	printf("\n\n");

	return 0;
}
