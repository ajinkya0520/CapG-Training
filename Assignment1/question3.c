

/*
 * Author: Ajinkya Bothe
 * Program: write a  C program that performs temperature conversions between Celsius to Fahrenheit.
 * DOC: 23/05/2024
 * */

#include<stdio.h>

int main()
{
	float d;
	float f;

	printf("\nEnter the temperature in degree celcius:");
	scanf("%f",&d);

	f = (d * 9/5) + 32;

	printf("\n%f degree celcius is equals to %f degree fahrenheit",d,f);
	printf("\n\n");

	return 0;
}
