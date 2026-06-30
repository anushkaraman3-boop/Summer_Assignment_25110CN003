//Program to Develop Complete Mini Project Using Arrays, Strings and Functions
//(Student Record Management System)

#include <stdio.h>

int roll[50], n;
char name[50][50];
float marks[50];

void inputRecords() {
    int i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }
}

void displayRecords() {
    int i;

    printf("\n----- Student Records -----\n");
    printf("Roll\tName\tMarks\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }
}

int main() {
    inputRecords();
    displayRecords();

    return 0;
}