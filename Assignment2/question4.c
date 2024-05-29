

/*
 * Author: Ajinkya Bothe
 * Program: Write a C program to determine whether a given positive integer is an Armstrong number.
 * DOC' 24/05/2024
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

bool checkArmstrong(int a){
	int s=0;
	int d=0;
	int b = a;

	d = 1+log10(a);

	while(a!=0){
		int rem = a%10;
		s += (rem*rem*rem);
		a /= 10;
	}

	if(s == b){
		return true;
	}else{
		return false;
	}
}



int main(){
	
	int a;

	printf("\nEnter the positive integer: ");
	scanf("%d",&a);

	if(checkArmstrong(a))
		printf("Armstrong Number");
	else
		printf("Not an Armstrong Number");


	printf("\n\n");

	return EXIT_SUCCESS;

}
