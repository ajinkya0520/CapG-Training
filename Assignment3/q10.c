
/*
 * Author: Ajinkya Bothe
 * Program: Write a program to merge two sorted arrays into a single sorted array.
 * DOC: 27/05/2024
 * */

#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    while (i < size1) {
        result[k++] = arr1[i++];
    }

    while (j < size2) {
        result[k++] = arr2[j++];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size1, size2;

    printf("Enter size of first array: ");
    scanf("%d", &size1);
    int *arr1 = (int *)malloc(size1 * sizeof(int));

    printf("Enter elements of first array in sorted order: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &size2);
    int *arr2 = (int *)malloc(size2 * sizeof(int));

    printf("Enter elements of second array in sorted order: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    int result[size1 + size2];

    mergeArrays(arr1, size1, arr2, size2, result);

    printf("Merged sorted array: ");
    printArray(result, size1 + size2);

    free(arr1);
    free(arr2);

    return EXIT_SUCCESS;
}

