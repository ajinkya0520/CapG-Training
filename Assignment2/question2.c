
/*
 * Author: Ajinkya Bothe
 * Program: Write a program that prompts the user for a positive integer and then reports the closest integer having a whole number square root.
 * DOC' 24/05/2024
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int a;

	printf("\nEnter the positive integer: ");
	scanf("%d",&a);
	
	int b = sqrt(a);

	if((a-(b*b))<((b+1)*(b+1))-a){
		printf("The closest integer having a whole number square root is %d",(b*b));
	}else if((a-(b*b))>((b+1)*(b+1))-a){	
		printf("The closest integer having a whole number square root is %d",((b+1)*(b+1)));
	}else{
		printf("The number is equidistance from whole number square roots %d and %d",(b*b),((b+1)*(b+1)));
	}

	printf("\n\n");

	return EXIT_SUCCESS;

}
