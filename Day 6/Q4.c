// Write a program to Find x^n without pow().

#include <stdio.h>

int main() {
    int x, n;
    long long result = 1;

    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter exponent (n): ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        result *= x;
    }

    printf("Result: %lld\n", result);

    return 0;
}