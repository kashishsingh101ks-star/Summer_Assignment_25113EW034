#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
    int issued;
};

int main()
{
    struct Book b[100];
    int choice, n = 0, i, id, found;

    while (1)
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Book ID: ");
            scanf("%d", &b[n].id);

            printf("Enter Book Name: ");
            scanf(" %[^\n]", b[n].name);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", b[n].author);

            b[n].issued = 0;
            n++;

            printf("Book Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No books available.\n");
            }
            else
            {
                printf("\nBook List:\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nBook ID : %d", b[i].id);
                    printf("\nBook Name : %s", b[i].name);
                    printf("\nAuthor : %s", b[i].author);

                    if (b[i].issued == 1)
                        printf("\nStatus : Issued\n");
                    else
                        printf("\nStatus : Available\n");
                }
            }
            break;

        case 3:
            printf("Enter Book ID to search: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    printf("\nBook Found!\n");
                    printf("Book Name : %s\n", b[i].name);
                    printf("Author : %s\n", b[i].author);

                    if (b[i].issued == 1)
                        printf("Status : Issued\n");
                    else
                        printf("Status : Available\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Book not found.\n");

            break;

        case 4:
            printf("Enter Book ID to issue: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    found = 1;

                    if (b[i].issued == 0)
                    {
                        b[i].issued = 1;
                        printf("Book Issued Successfully!\n");
                    }
                    else
                    {
                        printf("Book is already issued.\n");
                    }

                    break;
                }
            }

            if (found == 0)
                printf("Book not found.\n");

            break;

        case 5:
            printf("Enter Book ID to return: ");
            scanf("%d", &id);

            found = 0;

            for (i = 0; i < n; i++)
            {
                if (b[i].id == id)
                {
                    found = 1;

                    if (b[i].issued == 1)
                    {
                        b[i].issued = 0;
                        printf("Book Returned Successfully!\n");
                    }
                    else
                    {
                        printf("Book is already available.\n");
                    }

                    break;
                }
            }

            if (found == 0)
                printf("Book not found.\n");

            break;

        case 6:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}