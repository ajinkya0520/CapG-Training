
/*
 * Author: Ajinkya Bothe
 * Program: Remove the duplicate elements in the given array of intergers.
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
	
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(a[i]==a[j]){
				for(int k=j; k<size-1; k++){
					a[k]=a[k+1];
				}
				size--;
				j--;
			}
		}
	}


	printf("\nArry after removing duplicate elements: ");
	for(int i=0; i<size; i++){
		printf("%d ",a[i]);
	}

	printf("\n\n");

	return EXIT_SUCCESS;

}
