#include <stdio.h>

int main()
{
    int choice;
    float num1, num2, result;

    while (1)
    {
        printf("\n=================================");
        printf("\n     MENU DRIVEN CALCULATOR");
        printf("\n=================================");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Modulus");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 6)
        {
            printf("\nThank You!\n");
            break;
        }

        printf("\nEnter First Number: ");
        scanf("%f", &num1);

        printf("Enter Second Number: ");
        scanf("%f", &num2);

        switch (choice)
        {
        case 1:
            result = num1 + num2;
            printf("\nResult = %.2f\n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("\nResult = %.2f\n", result);
            break;

        case 3:
            result = num1 * num2;
            printf("\nResult = %.2f\n", result);
            break;

        case 4:
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("\nResult = %.2f\n", result);
            }
            else
            {
                printf("\nDivision by zero is not possible!\n");
            }
            break;

        case 5:
            printf("\nModulus = %d\n", (int)num1 % (int)num2);
            break;

        default:
            printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}