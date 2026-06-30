#include <stdio.h>

struct Bank
{
    int accountNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank acc[100];
    int n = 0;
    int choice;
    int i, accNo, found;
    float amount;

    while (1)
    {
        printf("\n==================================");
        printf("\n   BANK ACCOUNT MANAGEMENT");
        printf("\n==================================");
        printf("\n1. Create Account");
        printf("\n2. Display All Accounts");
        printf("\n3. Search Account");
        printf("\n4. Deposit Money");
        printf("\n5. Withdraw Money");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("\nEnter Account Number: ");
            scanf("%d", &acc[n].accountNo);

            printf("Enter Account Holder Name: ");
            scanf("%s", acc[n].name);

            printf("Enter Initial Balance: ");
            scanf("%f", &acc[n].balance);

            n++;

            printf("\nAccount Created Successfully!\n");
            break;

        case 2:

            if (n == 0)
            {
                printf("\nNo Account Found!\n");
            }
            else
            {
                printf("\n----------- Account Details -----------\n");

                for (i = 0; i < n; i++)
                {
                    printf("\nAccount %d\n", i + 1);
                    printf("Account No : %d\n", acc[i].accountNo);
                    printf("Name       : %s\n", acc[i].name);
                    printf("Balance    : %.2f\n", acc[i].balance);
                }
            }

            break;

        case 3:

            found = 0;

            printf("\nEnter Account Number to Search: ");
            scanf("%d", &accNo);

            for (i = 0; i < n; i++)
            {
                if (acc[i].accountNo == accNo)
                {
                    printf("\nAccount Found\n");
                    printf("Account No : %d\n", acc[i].accountNo);
                    printf("Name       : %s\n", acc[i].name);
                    printf("Balance    : %.2f\n", acc[i].balance);

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nAccount Not Found!\n");
            }

            break;

        case 4:

            found = 0;

            printf("\nEnter Account Number: ");
            scanf("%d", &accNo);

            for (i = 0; i < n; i++)
            {
                if (acc[i].accountNo == accNo)
                {
                    printf("Enter Amount to Deposit: ");
                    scanf("%f", &amount);

                    acc[i].balance = acc[i].balance + amount;

                    printf("\nDeposit Successful!\n");
                    printf("Updated Balance: %.2f\n", acc[i].balance);

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nAccount Not Found!\n");
            }

            break;

        case 5:

            found = 0;

            printf("\nEnter Account Number: ");
            scanf("%d", &accNo);

            for (i = 0; i < n; i++)
            {
                if (acc[i].accountNo == accNo)
                {
                    printf("Enter Amount to Withdraw: ");
                    scanf("%f", &amount);

                    if (amount <= acc[i].balance)
                    {
                        acc[i].balance = acc[i].balance - amount;
                        printf("\nWithdrawal Successful!\n");
                        printf("Remaining Balance: %.2f\n", acc[i].balance);
                    }
                    else
                    {
                        printf("\nInsufficient Balance!\n");
                    }

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nAccount Not Found!\n");
            }

            break;

        case 6:

            printf("\nThank You for Using Bank Management System!\n");
            return 0;

        default:

            printf("\nInvalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}