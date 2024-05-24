


/*
 * Author: Ajinkya Bothe
 * Program: Write a program that takes two numbers and an operator (+, -, *, /) as input and uses if statements to perform the corresponding arithmetic operation. Print the result.
 * DOC: 23/05/2024
 * */

#include<stdio.h>

int main()
{
	double num1,num2,ans;
	char o;

	printf("\nEnter the first number:");
	scanf("%lf",&num1);


	printf("\nEnter the second number:");
	scanf("%lf",&num2);


	printf("\nEnter the Operator from (+,-,*./)");
	scanf(" %c",&o);

	if(o == '+'){
		ans = num1+num2;
		printf("\n%lf'+'%lf'='%lf",num1,num2,ans);
	}else if(o == '-'){
		ans = num1-num2;
		printf("\n%lf'-'%lf'='%lf",num1,num2,ans);
	}else if(o == '*'){
		ans = num1*num2;
		printf("\n%lf'*'%lf'='%lf",num1,num2,ans);
	}else if(o == '/'){	
		ans = num1/num2;
		printf("\n%lf'/'%lf'='%lf",num1,num2,ans);
	}else{
		printf("\nInvalid operator");
	}
	printf("\n\n");

	return 0;
}
