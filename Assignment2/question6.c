

/*
 * Author: Ajinkya Bothe
 * Program: Given an array of positive integers. Your task is to find the leaders in the array. An element is leader if it is greater than all the elements to its right side. And the rightmost element is always a leader.
 * DOC' 24/05/2024
 */

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int size=0;
	printf("\nEnter size of Array:");
	scanf("%d",&size);

	int a[size];


	printf("\nEnter the array elements: ");
	for(int i=0; i<size; i++){
		scanf("%d",&a[i]);
	}

	printf("\nGiven arry is: ");
	for(int i=0; i<size; i++){
		printf("%d ",a[i]);
	}
	
	printf("\nLeader elements are: ");
	for(int i=size-1; i>=0; i--){
		int count = 0;
		for(int j=i-1; j<size; j++){
			if(a[i]<a[j]){
				count++;		
			}
		}

		if(count == 0 || i== size-1){
			printf("%d ",a[i]);
		}
	}

	printf("\n\n");

	return EXIT_SUCCESS;

}
