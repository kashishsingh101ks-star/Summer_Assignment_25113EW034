#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int choice;
    int value, pos;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    while (1)
    {
        printf("\n==================================");
        printf("\n   MENU DRIVEN ARRAY OPERATIONS");
        printf("\n==================================");
        printf("\n1. Display Array");
        printf("\n2. Insert Element");
        printf("\n3. Delete Element");
        printf("\n4. Search Element");
        printf("\n5. Find Largest Element");
        printf("\n6. Find Smallest Element");
        printf("\n7. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("\nArray Elements are:\n");

            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }

            printf("\n");
            break;

        case 2:

            printf("\nEnter Position (1 to %d): ", n + 1);
            scanf("%d", &pos);

            printf("Enter Element: ");
            scanf("%d", &value);

            if (pos < 1 || pos > n + 1)
            {
                printf("Invalid Position!\n");
            }
            else
            {
                for (i = n; i >= pos; i--)
                {
                    arr[i] = arr[i - 1];
                }

                arr[pos - 1] = value;
                n++;

                printf("Element Inserted Successfully!\n");
            }

            break;

        case 3:

            printf("\nEnter Position to Delete: ");
            scanf("%d", &pos);

            if (pos < 1 || pos > n)
            {
                printf("Invalid Position!\n");
            }
            else
            {
                for (i = pos - 1; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }

                n--;

                printf("Element Deleted Successfully!\n");
            }

            break;

        case 4:

            printf("\nEnter Element to Search: ");
            scanf("%d", &value);

            for (i = 0; i < n; i++)
            {
                if (arr[i] == value)
                {
                    printf("Element Found at Position %d\n", i + 1);
                    break;
                }
            }

            if (i == n)
            {
                printf("Element Not Found!\n");
            }

            break;

        case 5:

            value = arr[0];

            for (i = 1; i < n; i++)
            {
                if (arr[i] > value)
                {
                    value = arr[i];
                }
            }

            printf("Largest Element = %d\n", value);
            break;

        case 6:

            value = arr[0];

            for (i = 1; i < n; i++)
            {
                if (arr[i] < value)
                {
                    value = arr[i];
                }
            }

            printf("Smallest Element = %d\n", value);
            break;

        case 7:

            printf("\nThank You!\n");
            return 0;

        default:

            printf("\nInvalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}