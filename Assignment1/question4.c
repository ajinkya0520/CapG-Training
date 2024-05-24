


/*
 * Author: Ajinkya Bothe
 * Program: Write a program to convert Binary to decimal.
 * DOC: 23/05/2024
 * */

#include<stdio.h>

int convert(int n){
	
	int dec = 0;
	int base =1;
	int temp = n;

	while(temp){
		int last = temp%10;
		temp /= 10;
		dec += last*base;
		base*=2;
	}
	return dec;
}

int main(){

	long long a;
	printf("Enter the binary number:");
	scanf("%lld",&a);

	printf("%lld converts to %d in decimal",a,convert(a));
	printf("\n\n");

	return 0;
}
