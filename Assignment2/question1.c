/*
 * Author: Ajinkya Bothe
 * Program: Write a program that prompts the user for a positive integer and then computes the sum of all the digits of the number.
 * DOC' 24/05/2024
 */

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int a;

	printf("\nEnter the positive integer: ");
	scanf("%d",&a);
	
	int rem = 0;
	while(a !=0){
		rem += a % 10;
		a /= 10;
	}

	printf("\nSum of all digits is %d",rem);

	printf("\n\n");

	return EXIT_SUCCESS;

}
