#include <stdio.h>
#include <string.h>

struct Employee
{
    int employeeId;
    char name[50];
    char department[30];
    float salary;
};

int main()
{
    struct Employee employees[50];
    int totalEmployees = 0;
    int userChoice;

    do
    {
        printf("\n----- EMPLOYEE RECORD MANAGEMENT SYSTEM -----\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Update Employee Salary\n");
        printf("5. Delete Employee by ID\n");
        printf("6. Exit\n");
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
            if (totalEmployees >= 50)
            {
                printf("\nSorry, the employee list is full.\n");
            }
            else
            {
                printf("\nEnter employee ID: ");
                scanf("%d", &employees[totalEmployees].employeeId);
                while (getchar() != '\n');

                printf("Enter name: ");
                fgets(employees[totalEmployees].name, sizeof(employees[totalEmployees].name), stdin);
                employees[totalEmployees].name[strcspn(employees[totalEmployees].name, "\n")] = '\0';

                printf("Enter department: ");
                fgets(employees[totalEmployees].department, sizeof(employees[totalEmployees].department), stdin);
                employees[totalEmployees].department[strcspn(employees[totalEmployees].department, "\n")] = '\0';

                printf("Enter salary: ");
                scanf("%f", &employees[totalEmployees].salary);
                while (getchar() != '\n');

                totalEmployees++;
                printf("\nEmployee added successfully!\n");
            }
        }
        else if (userChoice == 2)
        {
            if (totalEmployees == 0)
            {
                printf("\nNo employees to show yet.\n");
            }
            else
            {
                printf("\nID\tName\t\tDepartment\tSalary\n");
                for (int i = 0; i < totalEmployees; i++)
                {
                    printf("%d\t%s\t\t%s\t\t%.2f\n",
                           employees[i].employeeId,
                           employees[i].name,
                           employees[i].department,
                           employees[i].salary);
                }
            }
        }
        else if (userChoice == 3)
        {
            int searchId;
            int found = 0;

            printf("\nEnter employee ID to search: ");
            scanf("%d", &searchId);
            while (getchar() != '\n');

            for (int i = 0; i < totalEmployees; i++)
            {
                if (employees[i].employeeId == searchId)
                {
                    printf("\nEmployee Found!\n");
                    printf("Name: %s\n", employees[i].name);
                    printf("Department: %s\n", employees[i].department);
                    printf("Salary: %.2f\n", employees[i].salary);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nNo employee found with ID %d.\n", searchId);
            }
        }
        else if (userChoice == 4)
        {
            int updateId;
            int found = 0;

            printf("\nEnter employee ID to update salary: ");
            scanf("%d", &updateId);
            while (getchar() != '\n');

            for (int i = 0; i < totalEmployees; i++)
            {
                if (employees[i].employeeId == updateId)
                {
                    printf("Current salary: %.2f\n", employees[i].salary);
                    printf("Enter new salary: ");
                    scanf("%f", &employees[i].salary);
                    while (getchar() != '\n');
                    printf("\nSalary updated successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nNo employee found with ID %d.\n", updateId);
            }
        }
        else if (userChoice == 5)
        {
            int deleteId;
            int foundIndex = -1;

            printf("\nEnter employee ID to delete: ");
            scanf("%d", &deleteId);
            while (getchar() != '\n');

            for (int i = 0; i < totalEmployees; i++)
            {
                if (employees[i].employeeId == deleteId)
                {
                    foundIndex = i;
                    break;
                }
            }

            if (foundIndex == -1)
            {
                printf("\nNo employee found with ID %d.\n", deleteId);
            }
            else
            {
                
                for (int i = foundIndex; i < totalEmployees - 1; i++)
                {
                    employees[i] = employees[i + 1];
                }
                totalEmployees--;
                printf("\nEmployee deleted successfully!\n");
            }
        }
        else if (userChoice == 6)
        {
            printf("\nExiting the program. Goodbye!\n");
        }
        else
        {
            printf("\nInvalid choice. Please try again.\n");
        }

    } while (userChoice != 6);

    return 0;
}