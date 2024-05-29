/*
 * Author: Ajinkya Bothe
 * Program: Given an array of integers, write a program to find all duplicate elements in the array.
 * DOC: 27/05/2024
 * */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size;
	printf("\nEnter the size: ");
	scanf("%d",&size);
	
	int a[size];
	printf("\nEnter %d array elements: ",size);
	for(int i=0; i<size; i++){
		scanf("%d",&a[i]);
	}

	printf("\nGiven array is: ");
	for(int i=0; i<size; i++){
		printf("%d ",a[i]);
	}

	printf("\nThis array has following duplicates: ");
       	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(a[i] == a[j]){
				printf("%d ",a[i]);
			}
		}
	}	

	

	printf("\n\n");

	return EXIT_SUCCESS;
}
