#include <stdio.h>
#include <string.h>

int roll[100];
char name[100][50];
float marks[100];
int n = 0;

void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

int main()
{
    int choice;

    while (1)
    {
        printf("\n==================================");
        printf("\n   STUDENT MANAGEMENT SYSTEM");
        printf("\n==================================");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Update Student");
        printf("\n5. Delete Student");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            updateStudent();
            break;

        case 5:
            deleteStudent();
            break;

        case 6:
            printf("\nThank You!\n");
            return 0;

        default:
            printf("\nInvalid Choice!\n");
        }
    }
}

void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[n]);

    printf("Enter Name: ");
    scanf("%s", name[n]);

    printf("Enter Marks: ");
    scanf("%f", &marks[n]);

    n++;

    printf("\nStudent Added Successfully!\n");
}

void displayStudents()
{
    int i;

    if (n == 0)
    {
        printf("\nNo Records Found!\n");
        return;
    }

    printf("\n----------- Student Records -----------\n");

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", roll[i]);
        printf("Name        : %s\n", name[i]);
        printf("Marks       : %.2f\n", marks[i]);
    }
}

void searchStudent()
{
    int r, i;

    printf("\nEnter Roll Number: ");
    scanf("%d", &r);

    for (i = 0; i < n; i++)
    {
        if (roll[i] == r)
        {
            printf("\nStudent Found\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %.2f\n", marks[i]);
            return;
        }
    }

    printf("\nStudent Not Found!\n");
}

void updateStudent()
{
    int r, i;

    printf("\nEnter Roll Number: ");
    scanf("%d", &r);

    for (i = 0; i < n; i++)
    {
        if (roll[i] == r)
        {
            printf("Enter New Name: ");
            scanf("%s", name[i]);

            printf("Enter New Marks: ");
            scanf("%f", &marks[i]);

            printf("\nRecord Updated Successfully!\n");
            return;
        }
    }

    printf("\nStudent Not Found!\n");
}

void deleteStudent()
{
    int r, i, j;

    printf("\nEnter Roll Number: ");
    scanf("%d", &r);

    for (i = 0; i < n; i++)
    {
        if (roll[i] == r)
        {
            for (j = i; j < n - 1; j++)
            {
                roll[j] = roll[j + 1];
                strcpy(name[j], name[j + 1]);
                marks[j] = marks[j + 1];
            }

            n--;

            printf("\nRecord Deleted Successfully!\n");
            return;
        }
    }

    printf("\nStudent Not Found!\n");
}