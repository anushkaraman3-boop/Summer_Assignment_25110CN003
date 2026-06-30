//Program to Create a Number Guessing Game

#include <stdio.h>

int main() {
    int secret = 25, guess;

    printf("Welcome to the Number Guessing Game!\n");

    do {
        printf("Guess the number (1-50): ");
        scanf("%d", &guess);

        if(guess > secret)
            printf("Too High!\n");
        else if(guess < secret)
            printf("Too Low!\n");
        else
            printf("Congratulations! You guessed the correct number.\n");

    } while(guess != secret);

    return 0;
}
