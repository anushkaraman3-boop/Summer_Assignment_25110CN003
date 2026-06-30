//Program to Create a Quiz Application

#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("***** Simple Quiz *****\n");

    printf("\nQ1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
        score++;

    printf("\nQ2. Which language is used for system programming?\n");
    printf("1. C\n2. HTML\n3. CSS\n4. SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
        score++;

    printf("\nQ3. How many days are there in a leap year?\n");
    printf("1. 364\n2. 365\n3. 366\n4. 367\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}