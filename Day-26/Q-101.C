#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secretNumber, userGuess, totalAttempts;
    srand(time(0));

    secretNumber = (rand() % 100) + 1;78;
    totalAttempts = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I am thinking of a number between 1 and 100. Can you guess it?\n\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &userGuess);
        totalAttempts++;

        if (userGuess > secretNumber)
        {
            printf("Too high! Try again.\n\n");
        }
        else if (userGuess < secretNumber)
        {
            printf("Too low! Try again.\n\n");
        }
        else
        {
            printf("\nCongratulations! You guessed it right!\n");
            printf("The number was %d and you guessed it in %d attempts.\n", secretNumber, totalAttempts);
        }

    } while (userGuess != secretNumber);

    return 0;
}