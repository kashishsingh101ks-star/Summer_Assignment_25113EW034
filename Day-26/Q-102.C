#include <stdio.h>

int main()
{
    int age;
    char isCitizen;

    printf("Welcome to the Voting Eligibility Checker!\n\n");

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you a citizen of this country? (y/n): ");
    scanf(" %c", &isCitizen);

    printf("\n");

    if (age < 0 || age > 120)
    {
        printf("That doesn't look like a real age. Please enter a valid age.\n");
    }
    else if (isCitizen != 'y' && isCitizen != 'Y' && isCitizen != 'n' && isCitizen != 'N')
    {
        printf("Please answer with y or n for citizenship.\n");
    }
    else if (age >= 18 && (isCitizen == 'y' || isCitizen == 'Y'))
    {
        printf("Good news! You are eligible to vote.\n");
    }
    else if (age < 18 && (isCitizen == 'y' || isCitizen == 'Y'))
    {
        int yearsLeft = 18 - age;
        printf("Sorry, you are not eligible to vote yet.\n");
        printf("You need to wait %d more year(s) to become eligible.\n", yearsLeft);
    }
    else
    {
        printf("Sorry, you are not eligible to vote because you are not a citizen.\n");
    }

    return 0;
}