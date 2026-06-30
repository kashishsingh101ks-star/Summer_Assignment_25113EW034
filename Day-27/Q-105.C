#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n = 0;
    int choice, i;
    int roll, found;

    while (1)
    {
        printf("\n==============================");
        printf("\n STUDENT RECORD MANAGEMENT");
        printf("\n==============================");
        printf("\n1. Add Student");
        printf("\n2. Display All Students");
        printf("\n3. Search Student");
        printf("\n4. Delete Student");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("\nEnter Roll Number: ");
            scanf("%d", &s[n].roll);

            printf("Enter Name: ");
            scanf("%s", s[n].name);

            printf("Enter Marks: ");
            scanf("%f", &s[n].marks);

            n++;
            printf("Student Record Added Successfully!\n");
            break;

        case 2:

            if (n == 0)
            {
                printf("\nNo Records Found!\n");
            }
            else
            {
                printf("\n------ Student Records ------\n");

                for (i = 0; i < n; i++)
                {
                    printf("\nStudent %d\n", i + 1);
                    printf("Roll Number : %d\n", s[i].roll);
                    printf("Name        : %s\n", s[i].name);
                    printf("Marks       : %.2f\n", s[i].marks);
                }
            }
            break;

        case 3:

            found = 0;

            printf("\nEnter Roll Number to Search: ");
            scanf("%d", &roll);

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    printf("\nStudent Found\n");
                    printf("Roll Number : %d\n", s[i].roll);
                    printf("Name        : %s\n", s[i].name);
                    printf("Marks       : %.2f\n", s[i].marks);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("Student Record Not Found!\n");
            }

            break;

        case 4:

            found = 0;

            printf("\nEnter Roll Number to Delete: ");
            scanf("%d", &roll);

            for (i = 0; i < n; i++)
            {
                if (s[i].roll == roll)
                {
                    int j;

                    for (j = i; j < n - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }

                    n--;
                    found = 1;
                    printf("Student Record Deleted Successfully!\n");
                    break;
                }
            }

            if (found == 0)
            {
                printf("Student Record Not Found!\n");
            }

            break;

        case 5:

            printf("\nThank You!\n");
            return 0;

        default:

            printf("\nInvalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}