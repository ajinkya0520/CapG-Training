
/*
 * Author: Ajinkya Bothe
 * Program:  To calculate Area and Circumference of a circle.
 * DOC: 23/05/2024
 * */

#include<stdio.h>
#define PI 3.14

int main()
{
	float r;
	float area;

	printf("\nEnter radius of circle:");
	scanf("%f",&r);

	area = PI * r * r;

	printf("\nArea of the circle with radius %f is %f",r,area);
	printf("\n\n");

	return 0;
}
