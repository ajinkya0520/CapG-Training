/*
 * Author: Ajinkya Bothe
 * Program: Write a program to perform simple arithmetic operation on two integers.
 * DOC: 23/05/2024
 * */

#include<stdio.h>

int main()
{
	int a;
	int b;
	int ans;

	printf("\nEnter first number:");
	scanf("%d",&a);


	printf("\nEnter second number:");
	scanf("%d",&b);

	ans=a+b;

	printf("\nAddition of %d and %d is %d",a,b,ans);
	printf("\n\n");

	return 0;
}
