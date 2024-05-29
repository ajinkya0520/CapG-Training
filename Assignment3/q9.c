
/*
 * Author: Ajinkya Bothe
 * Program: Write a program to sort an array of strings in lexicographic (dictionary) order.
 * DOC: 27/05/2024
 * */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swapStrings(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

void bubbleSort(char *arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                swapStrings(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void printStrings(char *arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    char *arr[] = {"apple", "banana", "orange", "grape", "kiwi"};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printStrings(arr, n);

    bubbleSort(arr, n);

    printf("\nArray sorted in lexicographic order:\n");
    printStrings(arr, n);

    return EXIT_SUCCESS;
}

