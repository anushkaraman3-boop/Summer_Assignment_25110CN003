// Write a program to Generate Fibonacci series. 

#include <stdio.h>

int main() {
    int n, a = 0, b = 1, nt;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        nt = a + b;
        a = b;
        b = nt;
    }

    return 0;
}  




