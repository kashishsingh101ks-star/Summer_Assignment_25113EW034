#include <stdio.h>

struct Book
{
    int bookId;
    char title[50];
    char author[50];
    int quantity;
};

int main()
{
    struct Book b[100];
    int n = 0;
    int choice;
    int i, id, found;

    while (1)
    {
        printf("\n==================================");
        printf("\n   LIBRARY MANAGEMENT SYSTEM");
        printf("\n==================================");
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Issue Book");
        printf("\n5. Return Book");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("\nEnter Book ID: ");
            scanf("%d", &b[n].bookId);

            printf("Enter Book Title: ");
            scanf("%s", b[n].title);

            printf("Enter Author Name: ");
            scanf("%s", b[n].author);

            printf("Enter Quantity: ");
            scanf("%d", &b[n].quantity);

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
                    printf("Book ID   : %d\n", b[i].bookId);
                    printf("Title     : %s\n", b[i].title);
                    printf("Author    : %s\n", b[i].author);
                    printf("Quantity  : %d\n", b[i].quantity);
                }
            }

            break;

        case 3:

            found = 0;

            printf("\nEnter Book ID to Search: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (b[i].bookId == id)
                {
                    printf("\nBook Found\n");
                    printf("Book ID   : %d\n", b[i].bookId);
                    printf("Title     : %s\n", b[i].title);
                    printf("Author    : %s\n", b[i].author);
                    printf("Quantity  : %d\n", b[i].quantity);

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
                if (b[i].bookId == id)
                {
                    if (b[i].quantity > 0)
                    {
                        b[i].quantity--;
                        printf("\nBook Issued Successfully!\n");
                    }
                    else
                    {
                        printf("\nBook Not Available!\n");
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
                if (b[i].bookId == id)
                {
                    b[i].quantity++;
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

            printf("\nThank You!\n");
            return 0;

        default:

            printf("\nInvalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}