
/*
 * Author: Ajinkya Bothe
 * Program: Write a program to rotate an array of n elements to the right by k steps.
 * DOC: 27/05/2024
 * */

#include <stdio.h>
#include<stdlib.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateRight(int arr[], int n, int k) {
    k = k % n;

    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {

    int n,k;
    printf("\nEnter the size of Array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


    printf("\nOriginal array: ");
    printArray(arr, n);

    printf("\nEnter the number by which to shift array: ");
    scanf("%d",&k);

    rotateRight(arr, n, k);

    printf("Array rotated to the right by %d steps: ", k);
    printArray(arr, n);

    return EXIT_SUCCESS;
}
