


/*
 * Author: Ajinkya Bothe
 * Program: Write a program to reverse the order of words in a given string.
 * DOC: 27/05/2024
 * */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void reverseSubstring(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

void reverseWords(char *str) {
    reverseSubstring(str, str + strlen(str) - 1);

    char *start = str;
    char *end = str;
    while (*end) {
        if (*end == ' ') {
            reverseSubstring(start, end - 1);
            start = end + 1;
        }
        end++;
    }
    reverseSubstring(start, end - 1);
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; 

    reverseWords(str);

    printf("Reversed string: %s\n", str);

    return EXIT_SUCCESS;
}
