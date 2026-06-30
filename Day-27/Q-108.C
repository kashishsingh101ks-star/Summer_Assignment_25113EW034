#include <stdio.h>
#include <string.h>

struct Student
{
    int rollNumber;
    char name[50];
    int marksMaths;
    int marksScience;
    int marksEnglish;
    int marksComputer;
    int marksHindi;
    int totalMarks;
    float percentage;
    char grade;
};

void generateMarksheet(struct Student s)
{
    printf("\n========================================\n");
    printf("            STUDENT MARKSHEET            \n");
    printf("========================================\n");
    printf("Roll Number : %d\n", s.rollNumber);
    printf("Name        : %s\n", s.name);
    printf("----------------------------------------\n");
    printf("Subject\t\tMarks (out of 100)\n");
    printf("Maths\t\t%d\n", s.marksMaths);
    printf("Science\t\t%d\n", s.marksScience);
    printf("English\t\t%d\n", s.marksEnglish);
    printf("Computer\t%d\n", s.marksComputer);
    printf("Hindi\t\t%d\n", s.marksHindi);
    printf("----------------------------------------\n");
    printf("Total Marks : %d / 500\n", s.totalMarks);
    printf("Percentage  : %.2f%%\n", s.percentage);
    printf("Grade       : %c\n", s.grade);
    printf("========================================\n");
}

char calculateGrade(float percentage)
{
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 75)
        return 'B';
    else if (percentage >= 60)
        return 'C';
    else if (percentage >= 40)
        return 'D';
    else
        return 'F';
}

int main()
{
    struct Student students[50];
    int totalStudents = 0;
    int userChoice;

    do
    {
        printf("\n----- MARKSHEET GENERATION SYSTEM -----\n");
        printf("1. Add Student Marks\n");
        printf("2. Generate Marksheet by Roll Number\n");
        printf("3. Display All Marksheets\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &userChoice) != 1)
        {
            printf("\nInvalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }
        while (getchar() != '\n');

        if (userChoice == 1)
        {
            if (totalStudents >= 50)
            {
                printf("\nSorry, the student list is full.\n");
            }
            else
            {
                struct Student newStudent;

                printf("\nEnter roll number: ");
                scanf("%d", &newStudent.rollNumber);
                while (getchar() != '\n');

                printf("Enter name: ");
                fgets(newStudent.name, sizeof(newStudent.name), stdin);
                newStudent.name[strcspn(newStudent.name, "\n")] = '\0';

                printf("Enter marks in Maths (out of 100): ");
                scanf("%d", &newStudent.marksMaths);
                while (getchar() != '\n');

                printf("Enter marks in Science (out of 100): ");
                scanf("%d", &newStudent.marksScience);
                while (getchar() != '\n');

                printf("Enter marks in English (out of 100): ");
                scanf("%d", &newStudent.marksEnglish);
                while (getchar() != '\n');

                printf("Enter marks in Computer (out of 100): ");
                scanf("%d", &newStudent.marksComputer);
                while (getchar() != '\n');

                printf("Enter marks in Hindi (out of 100): ");
                scanf("%d", &newStudent.marksHindi);
                while (getchar() != '\n');

                newStudent.totalMarks = newStudent.marksMaths +
                                         newStudent.marksScience +
                                         newStudent.marksEnglish +
                                         newStudent.marksComputer +
                                         newStudent.marksHindi;

                newStudent.percentage = (newStudent.totalMarks / 500.0) * 100;
                newStudent.grade = calculateGrade(newStudent.percentage);

                students[totalStudents] = newStudent;
                totalStudents++;

                printf("\nStudent marks added successfully!\n");
            }
        }
        else if (userChoice == 2)
        {
            int searchRoll;
            int found = 0;

            printf("\nEnter roll number to generate marksheet: ");
            scanf("%d", &searchRoll);
            while (getchar() != '\n');

            for (int i = 0; i < totalStudents; i++)
            {
                if (students[i].rollNumber == searchRoll)
                {
                    generateMarksheet(students[i]);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nNo student found with roll number %d.\n", searchRoll);
            }
        }
        else if (userChoice == 3)
        {
            if (totalStudents == 0)
            {
                printf("\nNo student records to show yet.\n");
            }
            else
            {
                for (int i = 0; i < totalStudents; i++)
                {
                    generateMarksheet(students[i]);
                }
            }
        }
        else if (userChoice == 4)
        {
            printf("\nExiting the program. Goodbye!\n");
        }
        else
        {
            printf("\nInvalid choice. Please try again.\n");
        }

    } while (userChoice != 4);

    return 0;
}