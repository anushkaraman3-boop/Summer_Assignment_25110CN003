//Program to Create Mini Library System

#include <stdio.h>

int main() {
    int n, i;
    int bookId[20];
    char title[20][50];

    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &bookId[i]);

        printf("Enter Book Title: ");
        scanf("%s", title[i]);
    }

    printf("\n----- Library Records -----\n");
    printf("Book ID\tTitle\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\n", bookId[i], title[i]);
    }

    return 0;
}