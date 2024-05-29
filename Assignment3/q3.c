
/*
 * Author: Ajinkya Bothe
 * Program: Write a program to check if two strings are anagrams of each other.
 * DOC: 27/05/2024
 * */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NO_OF_CHARS 256


int checkAnagram(char str1[], char str2[]){
	int count1[NO_OF_CHARS] = {0};
	int count2[NO_OF_CHARS] = {0};
	int i=0;

	while(str1[i] != '\0' && str2[i] != '\0'){
		count1[str1[i]]++;
		count2[str2[i]]++;
		i++;
	}

	if (str1[i] != '\0' || str2[i] != '\0') return 0; 

	for (int i = 0; i < NO_OF_CHARS; i++){
        	if (count1[i] != count2[i]) return 0;
	}

	return 1;	
}

int main()
{	
	char s1[100], s2[100];
	printf("Enter first string: ");
	scanf(" %s",s1);
	
	printf("Enter second string: ");
	scanf(" %s",s2);
	
	if(checkAnagram(s1,s2)){
		printf("Given strings are Anagrams");
	}else{
		printf("Given strings are not Anagrams");
	}

	printf("\n\n");

	return EXIT_SUCCESS;
}
