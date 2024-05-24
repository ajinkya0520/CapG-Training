


/*
 * Author: Ajinkya Bothe
 * Program: Write a program that calculates the Body Mass Index (BMI) based on user input for weight (in kg) and height (in meters). 
 *	 Use if statements to classify the BMI into categories:
	Below 18.5: Underweight
	18.5 to 24.9: Normal weight
	25 to 29.9: Overweight
	30 and above: Obesity
 * DOC: 23/05/2024
 * */

#include<stdio.h>

int main()
{
	float w;
	float h;
	float bmi;

	printf("\nEnter the weight:");
	scanf("%f",&w);


	printf("\nEnter the height:");
	scanf("%f",&h);

	bmi = w / (h*h);

	if(bmi<18.5){
		printf("\nUnderweight");
	}else if(bmi<24.9){
		printf("\nNormal Weight");
	}else if(bmi<29.9){
		printf("\nOverweight");
	}else{
		printf("\nObesity");
	}
	printf("\n\n");

	return 0;
}
