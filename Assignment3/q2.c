
/*
 * Author: Ajinkya Bothe
 * Program: Write a program to remove duplicate characters from a string.
 * DOC: 27/05/2024
 * */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char* removeDuplicates(char str[]){
	int n = sizeof(str)/sizeof(str[0]);
	int index = 0;

	for(int i=0; i<n; i++){
		int j=0;
		for(j=0; j<i; j++){
			if(str[i] == str[j]){
				break;
			}
		}
		if(i == j){
			str[index++] = str[i];
		}
	}
	str[index] = '\0';

	return str;
}


int main()
{
	char s[100];
	
	printf("Enter the string: ");
	scanf("%[^\n]s",s);
        printf("Given string is: %s", s);

	printf("\nString after removing duplicates is: %s",removeDuplicates(s));			
	

	printf("\n\n");

	return EXIT_SUCCESS;
}
