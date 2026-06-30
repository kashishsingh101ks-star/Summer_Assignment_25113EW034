#include <stdio.h>
#include <string.h>

struct Student
{
    int rollNumber;
    char name[50];
    float marks;
};

int main()
{
    struct Student students[50];
    int totalStudents = 0;
    int userChoice;

    do
    {
        printf("\n----- STUDENT RECORD MANAGEMENT SYSTEM -----\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Delete Student by Roll Number\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &userChoice);

        if (userChoice == 1)
        {
            if (totalStudents >= 50)
            {
                printf("\nSorry, the student list is full.\n");
            }
            else
            {
                printf("\nEnter roll number: ");
                scanf("%d", &students[totalStudents].rollNumber);

                printf("Enter name: ");
                scanf(" %[^\n]", students[totalStudents].name);

                printf("Enter marks: ");
                scanf("%f", &students[totalStudents].marks);

                totalStudents++;
                printf("\nStudent added successfully!\n");
            }
        }
        else if (userChoice == 2)
        {
            if (totalStudents == 0)
            {
                printf("\nNo students to show yet.\n");
            }
            else
            {
                printf("\nRoll No.\tName\t\tMarks\n");
                for (int i = 0; i < totalStudents; i++)
                {
                    printf("%d\t\t%s\t\t%.2f\n", students[i].rollNumber, students[i].name, students[i].marks);
                }
            }
        }
        else if (userChoice == 3)
        {
            int searchRoll;
            int found = 0;

            printf("\nEnter roll number to search: ");
            scanf("%d", &searchRoll);

            for (int i = 0; i < totalStudents; i++)
            {
                if (students[i].rollNumber == searchRoll)
                {
                    printf("\nStudent Found!\n");
                    printf("Name: %s\n", students[i].name);
                    printf("Marks: %.2f\n", students[i].marks);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nNo student found with roll number %d.\n", searchRoll);
            }
        }
        else if (userChoice == 4)
        {
            int deleteRoll;
            int foundIndex = -1;

            printf("\nEnter roll number to delete: ");
            scanf("%d", &deleteRoll);

            for (int i = 0; i < totalStudents; i++)
            {
                if (students[i].rollNumber == deleteRoll)
                {
                    foundIndex = i;
                    break;
                }
            }

            if (foundIndex == -1)
            {
                printf("\nNo student found with roll number %d.\n", deleteRoll);
            }
            else
            {
                for (int i = foundIndex; i < totalStudents - 1; i++)
                {
                    students[i] = students[i + 1];
                }
                totalStudents--;
                printf("\nStudent deleted successfully!\n");
            }
        }
        else if (userChoice == 5)
        {
            printf("\nExiting the program. Goodbye!\n");
        }
        else
        {
            printf("\nInvalid choice. Please try again.\n");
        }

    } while (userChoice != 5);

    return 0;
}