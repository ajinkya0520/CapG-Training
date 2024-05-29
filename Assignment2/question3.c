
/*
 * Author: Ajinkya Bothe
 * Program: C program to check if a number is an automorphic number.
 * DOC' 24/05/2024
 */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>

bool checkAutoMorphic(int a){
	int s = a*a;
	if(s%100 == a){
		return true;
	}else{
		return false;
	}
}



int main(){
	
	int a;

	printf("\nEnter the positive integer: ");
	scanf("%d",&a);

	if(checkAutoMorphic(a))
		printf("The number %d is AutoMorphic",a);
	else
		printf("The number %d is not AutoMorphic",a);


	printf("\n\n");

	return EXIT_SUCCESS;

}
