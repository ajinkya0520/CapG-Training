

/*
 * Author: Ajinkya Bothe
 * Program: Find the Missing Number in an Array.
 * DOC: 27/05/2024
 * */

#include<stdio.h>
#include<stdlib.h>


void findMissingNumbers(int arr[]){
	int n = sizeof(arr)/sizeof(arr[0]);
	int i=0;

	while(i<n){
		if(arr[i] != i){
			printf("\n%d is missing",i);
		}else{
			i++;
		}
	}
}

int main()
{	
	int a;
	printf("\nEnter size of array: ");
	scanf("%d",&a);

	int arr[a];
	printf("\nEnter the numbers");
	for(int i=0;i<a;i++){
		scanf("%d",arr[i]);
	}
	
	findMissingNumbers(arr);

	printf("\n\n");

	return EXIT_SUCCESS;
}
