#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    int marks1, marks2, marks3, marks4, marks5;
    int total;
    float percentage;
};

int main()
{
    struct Student s[100];
    int n = 0;
    int choice;
    int i, roll, found;

    while (1)
    {
        printf("\n====================================");
        printf("\n   MARKSHEET GENERATION SYSTEM");
        printf("\n====================================");
        printf("\n1. Add Student Record");
        printf("\n2. Display All Marksheets");
        printf("\n3. Search Student");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("\nEnter Roll Number: ");
            scanf("%d", &s[n].rollNo);

            printf("Enter Student Name: ");
            scanf("%s", s[n].name);

            printf("Enter Marks of Subject 1: ");
            scanf("%d", &s[n].marks1);

            printf("Enter Marks of Subject 2: ");
            scanf("%d", &s[n].marks2);

            printf("Enter Marks of Subject 3: ");
            scanf("%d", &s[n].marks3);

            printf("Enter Marks of Subject 4: ");
            scanf("%d", &s[n].marks4);

            printf("Enter Marks of Subject 5: ");
            scanf("%d", &s[n].marks5);

            s[n].total = s[n].marks1 + s[n].marks2 + s[n].marks3 +
                         s[n].marks4 + s[n].marks5;

            s[n].percentage = s[n].total / 5.0;

            printf("\nStudent Record Added Successfully!\n");

            n++;
            break;

        case 2:

            if (n == 0)
            {
                printf("\nNo Student Records Found!\n");
            }
            else
            {
                printf("\n========== STUDENT MARKSHEETS ==========\n");

                for (i = 0; i < n; i++)
                {
                    printf("\nStudent %d\n", i + 1);
                    printf("Roll Number : %d\n", s[i].rollNo);
                    printf("Name        : %s\n", s[i].name);
                    printf("Subject 1   : %d\n", s[i].marks1);
                    printf("Subject 2   : %d\n", s[i].marks2);
                    printf("Subject 3   : %d\n", s[i].marks3);
                    printf("Subject 4   : %d\n", s[i].marks4);
                    printf("Subject 5   : %d\n", s[i].marks5);
                    printf("Total Marks : %d\n", s[i].total);
                    printf("Percentage  : %.2f%%\n", s[i].percentage);

                    if (s[i].percentage >= 75)
                        printf("Grade       : A\n");
                    else if (s[i].percentage >= 60)
                        printf("Grade       : B\n");
                    else if (s[i].percentage >= 45)
                        printf("Grade       : C\n");
                    else if (s[i].percentage >= 33)
                        printf("Grade       : D\n");
                    else
                        printf("Grade       : Fail\n");
                }
            }

            break;

        case 3:

            found = 0;

            printf("\nEnter Roll Number to Search: ");
            scanf("%d", &roll);

            for (i = 0; i < n; i++)
            {
                if (s[i].rollNo == roll)
                {
                    printf("\nStudent Found\n");
                    printf("Roll Number : %d\n", s[i].rollNo);
                    printf("Name        : %s\n", s[i].name);
                    printf("Total Marks : %d\n", s[i].total);
                    printf("Percentage  : %.2f%%\n", s[i].percentage);

                    if (s[i].percentage >= 75)
                        printf("Grade       : A\n");
                    else if (s[i].percentage >= 60)
                        printf("Grade       : B\n");
                    else if (s[i].percentage >= 45)
                        printf("Grade       : C\n");
                    else if (s[i].percentage >= 33)
                        printf("Grade       : D\n");
                    else
                        printf("Grade       : Fail\n");

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

            printf("\nThank You!\n");
            return 0;

        default:

            printf("\nInvalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}