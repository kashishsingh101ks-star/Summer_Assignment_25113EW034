#include <stdio.h>

int main()
{
    int score = 0;
    int userAnswer;
    int totalQuestions = 5;

    printf("Welcome to the Quiz Application!\n");
    printf("Answer each question by entering 1, 2, 3, or 4.\n\n");

    printf("Q1. What is the capital of France?\n");
    printf("1. Berlin\n2. Madrid\n3. Paris\n4. Rome\n");
    printf("Your answer: ");
    scanf("%d", &userAnswer);
    while (getchar() != '\n'); 

    if (userAnswer == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! The correct answer was Paris.\n\n");
    }


    printf("Q2. Which language is mainly used for Android app development?\n");
    printf("1. Python\n2. Kotlin\n3. Swift\n4. C++\n");
    printf("Your answer: ");
    scanf("%d", &userAnswer);
    while (getchar() != '\n');

    if (userAnswer == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! The correct answer was Kotlin.\n\n");
    }

    printf("Q3. How many continents are there on Earth?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Your answer: ");
    scanf("%d", &userAnswer);
    while (getchar() != '\n');

    if (userAnswer == 3)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! The correct answer was 7.\n\n");
    }

    printf("Q4. Who wrote the Ramayana?\n");
    printf("1. Vyasa\n2. Valmiki\n3. Kalidasa\n4. Tulsidas\n");
    printf("Your answer: ");
    scanf("%d", &userAnswer);
    while (getchar() != '\n');

    if (userAnswer == 2)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! The correct answer was Valmiki.\n\n");
    }

    printf("Q5. What is the chemical symbol for water?\n");
    printf("1. H2O\n2. O2\n3. CO2\n4. NaCl\n");
    printf("Your answer: ");
    scanf("%d", &userAnswer);
    while (getchar() != '\n');

    if (userAnswer == 1)
    {
        printf("Correct!\n\n");
        score++;
    }
    else
    {
        printf("Wrong! The correct answer was H2O.\n\n");
    }

    printf("----- Quiz Over -----\n");
    printf("You scored %d out of %d.\n", score, totalQuestions);

    if (score == totalQuestions)
    {
        printf("Excellent! You got a perfect score!\n");
    }
    else if (score >= 3)
    {
        printf("Good job! You did pretty well.\n");
    }
    else
    {
        printf("Don't worry, you can do better next time. Keep practicing!\n");
    }

    return 0;
}