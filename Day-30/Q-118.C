#include <stdio.h>
#include <string.h>

int main()
{
    int bookId[100];
    char bookName[100][50];
    char author[100][50];
    int quantity[100];

    int n = 0;
    int choice;
    int id, i, found, j;

    while (1)
    {
        printf("\n==================================");
        printf("\n     MINI LIBRARY SYSTEM");
        printf("\n==================================");
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Issue Book");
        printf("\n5. Return Book");
        printf("\n6. Delete Book");
        printf("\n7. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("\nEnter Book ID: ");
            scanf("%d", &bookId[n]);

            printf("Enter Book Name: ");
            scanf("%s", bookName[n]);

            printf("Enter Author Name: ");
            scanf("%s", author[n]);

            printf("Enter Number of Copies: ");
            scanf("%d", &quantity[n]);

            n++;

            printf("\nBook Added Successfully!\n");
            break;

        case 2:

            if (n == 0)
            {
                printf("\nNo Books Available!\n");
            }
            else
            {
                printf("\n----------- Library Books -----------\n");

                for (i = 0; i < n; i++)
                {
                    printf("\nBook %d\n", i + 1);
                    printf("Book ID     : %d\n", bookId[i]);
                    printf("Book Name   : %s\n", bookName[i]);
                    printf("Author Name : %s\n", author[i]);
                    printf("Copies      : %d\n", quantity[i]);
                }
            }

            break;

        case 3:

            found = 0;

            printf("\nEnter Book ID to Search: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (bookId[i] == id)
                {
                    printf("\nBook Found\n");
                    printf("Book ID     : %d\n", bookId[i]);
                    printf("Book Name   : %s\n", bookName[i]);
                    printf("Author Name : %s\n", author[i]);
                    printf("Copies      : %d\n", quantity[i]);

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nBook Not Found!\n");
            }

            break;

        case 4:

            found = 0;

            printf("\nEnter Book ID to Issue: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (bookId[i] == id)
                {
                    if (quantity[i] > 0)
                    {
                        quantity[i]--;
                        printf("\nBook Issued Successfully!\n");
                    }
                    else
                    {
                        printf("\nBook is Not Available!\n");
                    }

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nBook Not Found!\n");
            }

            break;

        case 5:

            found = 0;

            printf("\nEnter Book ID to Return: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (bookId[i] == id)
                {
                    quantity[i]++;
                    printf("\nBook Returned Successfully!\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nBook Not Found!\n");
            }

            break;

        case 6:

            found = 0;

            printf("\nEnter Book ID to Delete: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (bookId[i] == id)
                {
                    for (j = i; j < n - 1; j++)
                    {
                        bookId[j] = bookId[j + 1];
                        strcpy(bookName[j], bookName[j + 1]);
                        strcpy(author[j], author[j + 1]);
                        quantity[j] = quantity[j + 1];
                    }

                    n--;

                    printf("\nBook Deleted Successfully!\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nBook Not Found!\n");
            }

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