//Program to Find Missing Number in an Array

#include <stdio.h>

int main() {
    int n, i, sum = 0, expectedSum;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n - 1];

    printf("Enter %d elements: ", n - 1);
    for(i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    expectedSum = n * (n + 1) / 2;

    printf("Missing Number = %d\n", expectedSum - sum);

    return 0;
}