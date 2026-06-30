#include <stdio.h>
#include <string.h>

int main()
{
    int roll[100];
    char name[100][50];
    float marks[100];

    int n = 0;
    int choice;
    int i, r, found;

    while (1)
    {
        printf("\n=================================");
        printf("\n   STUDENT RECORD SYSTEM");
        printf("\n=================================");
        printf("\n1. Add Student");
        printf("\n2. Display All Students");
        printf("\n3. Search Student");
        printf("\n4. Update Student");
        printf("\n5. Delete Student");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("\nEnter Roll Number: ");
            scanf("%d", &roll[n]);

            printf("Enter Student Name: ");
            scanf("%s", name[n]);

            printf("Enter Marks: ");
            scanf("%f", &marks[n]);

            n++;

            printf("\nStudent Record Added Successfully!\n");
            break;

        case 2:

            if (n == 0)
            {
                printf("\nNo Student Records Found!\n");
            }
            else
            {
                printf("\n----------- Student Records -----------\n");

                for (i = 0; i < n; i++)
                {
                    printf("\nStudent %d\n", i + 1);
                    printf("Roll Number : %d\n", roll[i]);
                    printf("Name        : %s\n", name[i]);
                    printf("Marks       : %.2f\n", marks[i]);
                }
            }

            break;

        case 3:

            found = 0;

            printf("\nEnter Roll Number to Search: ");
            scanf("%d", &r);

            for (i = 0; i < n; i++)
            {
                if (roll[i] == r)
                {
                    printf("\nStudent Found\n");
                    printf("Roll Number : %d\n", roll[i]);
                    printf("Name        : %s\n", name[i]);
                    printf("Marks       : %.2f\n", marks[i]);

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nStudent Record Not Found!\n");
            }

            break;

        case 4:

            found = 0;

            printf("\nEnter Roll Number to Update: ");
            scanf("%d", &r);

            for (i = 0; i < n; i++)
            {
                if (roll[i] == r)
                {
                    printf("Enter New Name: ");
                    scanf("%s", name[i]);

                    printf("Enter New Marks: ");
                    scanf("%f", &marks[i]);

                    printf("\nStudent Record Updated Successfully!\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nStudent Record Not Found!\n");
            }

            break;

        case 5:

            found = 0;

            printf("\nEnter Roll Number to Delete: ");
            scanf("%d", &r);

            for (i = 0; i < n; i++)
            {
                if (roll[i] == r)
                {
                    int j;

                    for (j = i; j < n - 1; j++)
                    {
                        roll[j] = roll[j + 1];
                        strcpy(name[j], name[j + 1]);
                        marks[j] = marks[j + 1];
                    }

                    n--;

                    printf("\nStudent Record Deleted Successfully!\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nStudent Record Not Found!\n");
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