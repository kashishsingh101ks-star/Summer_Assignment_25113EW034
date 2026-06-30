#include <stdio.h>

int main()
{
    int choice;
    int score = 0;

    printf("\n=================================\n");
    printf("      QUIZ APPLICATION");
    printf("\n=================================\n");

    // Question 1
    printf("\n1. Which language is known as the mother of all programming languages?\n");
    printf("1. C\n2. Java\n3. Python\n4. Assembly\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 4)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is Assembly.\n");
    }

    // Question 2
    printf("\n2. Who developed the C programming language?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3. Bjarne Stroustrup\n4. Guido van Rossum\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is Dennis Ritchie.\n");
    }

    // Question 3
    printf("\n3. Which symbol is used to end a statement in C?\n");
    printf("1. .\n2. ;\n3. :\n4. ,\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is ;\n");
    }

    // Question 4
    printf("\n4. Which loop is guaranteed to execute at least once?\n");
    printf("1. for\n2. while\n3. do-while\n4. None\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is do-while.\n");
    }

    // Question 5
    printf("\n5. Which function is used to print output in C?\n");
    printf("1. scanf()\n2. display()\n3. printf()\n4. input()\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is printf().\n");
    }

    // Final Score
    printf("\n=================================\n");
    printf("Quiz Completed!\n");
    printf("Your Score = %d out of 5\n", score);

    if (score == 5)
    {
        printf("Excellent! Perfect Score.\n");
    }
    else if (score >= 3)
    {
        printf("Good Job! Keep Learning.\n");
    }
    else
    {
        printf("You need more practice.\n");
    }

    printf("=================================\n");

    return 0;
}
