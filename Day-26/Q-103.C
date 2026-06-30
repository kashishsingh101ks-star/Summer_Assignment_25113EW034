#include <stdio.h>

int main()
{
    float accountBalance = 5000.0;
    int correctPin = 1234;
    int enteredPin;
    int userChoice;
    float amount;

    printf("Welcome to the ATM!\n");
    printf("Please enter your 4-digit PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != correctPin)
    {
        printf("Sorry, that PIN is incorrect. Goodbye.\n");
        return 0;
    }

    printf("\nPIN accepted. Welcome!\n");

    do
    {
        printf("\n----- ATM MENU -----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &userChoice);

        if (userChoice == 1)
        {
            printf("\nYour current balance is: %.2f\n", accountBalance);
        }
        else if (userChoice == 2)
        {
            printf("\nEnter amount to deposit: ");
            scanf("%f", &amount);

            if (amount <= 0)
            {
                printf("Deposit amount must be positive.\n");
            }
            else
            {
                accountBalance = accountBalance + amount;
                printf("Deposit successful! New balance: %.2f\n", accountBalance);
            }
        }
        else if (userChoice == 3)
        {
            printf("\nEnter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount <= 0)
            {
                printf("Withdrawal amount must be positive.\n");
            }
            else if (amount > accountBalance)
            {
                printf("Insufficient balance! Your balance is only %.2f\n", accountBalance);
            }
            else
            {
                accountBalance = accountBalance - amount;
                printf("Withdrawal successful! New balance: %.2f\n", accountBalance);
            }
        }
        else if (userChoice == 4)
        {
            printf("\nThank you for using the ATM. Goodbye!\n");
        }
        else
        {
            printf("\nInvalid choice. Please select a valid option.\n");
        }

    } while (userChoice != 4);

    return 0;
}