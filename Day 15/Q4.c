//Write a program to Move Zeroes to End

#include <stdio.h>

int main() {
    int arr[100], n, j = 0, temp;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }

    printf("Array after moving zeroes to end:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}