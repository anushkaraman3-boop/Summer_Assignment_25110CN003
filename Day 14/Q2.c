//Write a program for Frequency of an Element

#include <stdio.h>

int main() {
    int arr[100], n, key, count = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            count++;
    }

    printf("Frequency of %d = %d\n", key, count);

    return 0;
}