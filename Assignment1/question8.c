


/*
 * Author: Ajinkya Bothe
 * Program: Write a program that takes a temperature value as input and uses if statements to print advice based on the temperature:
	Above 30: "It's hot outside, stay hydrated!"
	Between 20 and 30: "The weather is nice and warm."
	Between 10 and 19: "It's a bit chilly, wear a jacket."
	Below 10: "It's cold outside, stay warm!"
 * DOC: 23/05/2024
 * */

#include<stdio.h>

int main()
{
	int temp;

	printf("\nEnter the temp:");
	scanf("%d",&temp);

	if(temp>30){
		printf("\nIt's hot outside, stay hydrated!");
	}else if(temp>20){
		printf("\nThe weather is nice and warm.");
	}else if(temp>10){
		printf("\nIt's a bit chilly, wear a jacket.");
	}else{
		printf("\nIt's cold outside, stay warm!");
	}
	printf("\n\n");

	return 0;
}
