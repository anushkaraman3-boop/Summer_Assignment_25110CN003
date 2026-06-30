//Write a program to Reverse Array

#include <stdio.h>

int main() {
    int arr[100], n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Reversed array:\n");
    for (int i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);

    return 0;
}