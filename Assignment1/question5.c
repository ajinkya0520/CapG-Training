

/*
 * Author: Ajinkya Bothe
 * Program: program to find given number is Odd or Even
 * DOC: 23/05/2024
 * */

#include<stdio.h>

int main()
{
	int a;

	printf("\nEnter the number:");
	scanf("%d",&a);

	if(a%2==0){
		printf("\nGiven number is even");
	}else{
		printf("\nGiven number is odd");
	}
	printf("\n\n");

	return 0;
}
