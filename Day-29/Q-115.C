#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter First String: ");
    scanf("%s", str1);

    while (1)
    {
        printf("\n==================================");
        printf("\n   MENU DRIVEN STRING OPERATIONS");
        printf("\n==================================");
        printf("\n1. Find Length");
        printf("\n2. Copy String");
        printf("\n3. Concatenate Strings");
        printf("\n4. Compare Strings");
        printf("\n5. Reverse String");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("\nLength of String = %d\n", strlen(str1));
            break;

        case 2:

            strcpy(str2, str1);

            printf("\nCopied String = %s\n", str2);
            break;

        case 3:

            printf("\nEnter Second String: ");
            scanf("%s", str2);

            strcat(str1, str2);

            printf("Concatenated String = %s\n", str1);
            break;

        case 4:

            printf("\nEnter Second String: ");
            scanf("%s", str2);

            if (strcmp(str1, str2) == 0)
            {
                printf("Both Strings are Equal.\n");
            }
            else
            {
                printf("Strings are Not Equal.\n");
            }

            break;

        case 5:

            strrev(str1);

            printf("\nReversed String = %s\n", str1);
            break;

        case 6:

            printf("\nThank You!\n");
            return 0;

        default:

            printf("\nInvalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}