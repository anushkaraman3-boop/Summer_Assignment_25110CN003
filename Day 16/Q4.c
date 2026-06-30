//Program to Remove Duplicates from an Array

#include <stdio.h>

int main() {
    int n, i, j, duplicate;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array after removing duplicates:\n");

    for(i = 0; i < n; i++) {
        duplicate = 0;

        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                duplicate = 1;
                break;
            }
        }

        if(duplicate == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}