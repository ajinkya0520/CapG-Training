


/*
 * Author: Ajinkya Bothe
 * Program: program to find largest of three numbers
 * DOC: 23/05/2024
 * */

#include<stdio.h>

int main()
{
	int a,b,c;

	printf("\nEnter the first number:");
	scanf("%d",&a);

	
	printf("\nEnter the second number:");
	scanf("%d",&b);


	printf("\nEnter the third number:");
	scanf("%d",&c);

	if(a>b){
		if(a>c){
			printf("\n%d is the largest",a);
		}else{
			printf("\n%d is the largest",c);
		}
	}else if(b>c){
		printf("\n%d is the largest",b);
	}else{
		printf("\n%d is the largest",c);
	}
	printf("\n\n");

	return 0;
}
