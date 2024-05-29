
/*
 * Author: Ajinkya Bothe
 * Program: Write a program to find all common elements in two given arrays.
 * DOC: 27/05/2024
 * */

#include<stdio.h>
#include<stdlib.h>

void findCommonElements(int arr1[], int size1, int arr2[], int size2) {
    int i = 0, j = 0;

    printf("Common elements: ");

    while (i < size1 && j < size2) {
        if (arr1[i] == arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else {
            j++;
        }
    }

    printf("\n");
}

int main() {

    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter the first array: ");
    for(int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter the second array: ");
    for(int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    findCommonElements(arr1, n1, arr2, n2);

    return EXIT_SUCCESS;
}

