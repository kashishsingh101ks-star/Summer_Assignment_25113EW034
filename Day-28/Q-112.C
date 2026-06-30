#include <stdio.h>

struct Contact
{
    int id;
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact c[100];
    int n = 0;
    int choice;
    int i, id, found, j;

    while (1)
    {
        printf("\n==================================");
        printf("\n   CONTACT MANAGEMENT SYSTEM");
        printf("\n==================================");
        printf("\n1. Add Contact");
        printf("\n2. Display All Contacts");
        printf("\n3. Search Contact");
        printf("\n4. Update Contact");
        printf("\n5. Delete Contact");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("\nEnter Contact ID: ");
            scanf("%d", &c[n].id);

            printf("Enter Name: ");
            scanf("%s", c[n].name);

            printf("Enter Phone Number: ");
            scanf("%s", c[n].phone);

            printf("Enter Email: ");
            scanf("%s", c[n].email);

            n++;

            printf("\nContact Added Successfully!\n");
            break;

        case 2:

            if (n == 0)
            {
                printf("\nNo Contacts Available!\n");
            }
            else
            {
                printf("\n----------- Contact List -----------\n");

                for (i = 0; i < n; i++)
                {
                    printf("\nContact %d\n", i + 1);
                    printf("ID          : %d\n", c[i].id);
                    printf("Name        : %s\n", c[i].name);
                    printf("Phone No.   : %s\n", c[i].phone);
                    printf("Email       : %s\n", c[i].email);
                }
            }

            break;

        case 3:

            found = 0;

            printf("\nEnter Contact ID to Search: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (c[i].id == id)
                {
                    printf("\nContact Found\n");
                    printf("ID          : %d\n", c[i].id);
                    printf("Name        : %s\n", c[i].name);
                    printf("Phone No.   : %s\n", c[i].phone);
                    printf("Email       : %s\n", c[i].email);

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nContact Not Found!\n");
            }

            break;

        case 4:

            found = 0;

            printf("\nEnter Contact ID to Update: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (c[i].id == id)
                {
                    printf("Enter New Name: ");
                    scanf("%s", c[i].name);

                    printf("Enter New Phone Number: ");
                    scanf("%s", c[i].phone);

                    printf("Enter New Email: ");
                    scanf("%s", c[i].email);

                    printf("\nContact Updated Successfully!\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nContact Not Found!\n");
            }

            break;

        case 5:

            found = 0;

            printf("\nEnter Contact ID to Delete: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (c[i].id == id)
                {
                    for (j = i; j < n - 1; j++)
                    {
                        c[j] = c[j + 1];
                    }

                    n--;

                    printf("\nContact Deleted Successfully!\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nContact Not Found!\n");
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