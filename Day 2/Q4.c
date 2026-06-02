// Write a program to Check whether a number is palindrom.

#include <stdio.h>

int main() {
    int n, ori, rev = 0, x;

    printf("Enter a number: ");
    scanf("%d", &n);

    ori = n;

    while (n != 0) {
        x = n% 10;
        rev = rev * 10 + x;
        n = n / 10;
    }

    if (ori == rev)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}

