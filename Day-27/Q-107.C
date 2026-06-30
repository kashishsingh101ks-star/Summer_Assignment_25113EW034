#include <stdio.h>
#include <string.h>

struct Salary
{
    int employeeId;
    char name[50];
    float basicPay;
    float allowances;
    float deductions;
    float netSalary;
};

int main()
{
    struct Salary employees[50];
    int totalEmployees = 0;
    int userChoice;

    do
    {
        printf("\n----- SALARY MANAGEMENT SYSTEM -----\n");
        printf("1. Add Employee Salary Details\n");
        printf("2. Display All Salary Records\n");
        printf("3. Search Salary by Employee ID\n");
        printf("4. Update Salary Details\n");
        printf("5. Delete Salary Record\n");
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

                printf("Enter basic pay: ");
                scanf("%f", &employees[totalEmployees].basicPay);
                while (getchar() != '\n');

                printf("Enter allowances: ");
                scanf("%f", &employees[totalEmployees].allowances);
                while (getchar() != '\n');

                printf("Enter deductions: ");
                scanf("%f", &employees[totalEmployees].deductions);
                while (getchar() != '\n');

                
                employees[totalEmployees].netSalary =
                    employees[totalEmployees].basicPay +
                    employees[totalEmployees].allowances -
                    employees[totalEmployees].deductions;

                totalEmployees++;
                printf("\nSalary record added successfully!\n");
            }
        }
        else if (userChoice == 2)
        {
            if (totalEmployees == 0)
            {
                printf("\nNo salary records to show yet.\n");
            }
            else
            {
                printf("\nID\tName\t\tBasic\tAllowance\tDeduction\tNet Salary\n");
                for (int i = 0; i < totalEmployees; i++)
                {
                    printf("%d\t%s\t\t%.2f\t%.2f\t\t%.2f\t\t%.2f\n",
                           employees[i].employeeId,
                           employees[i].name,
                           employees[i].basicPay,
                           employees[i].allowances,
                           employees[i].deductions,
                           employees[i].netSalary);
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
                    printf("\nRecord Found!\n");
                    printf("Name: %s\n", employees[i].name);
                    printf("Basic Pay: %.2f\n", employees[i].basicPay);
                    printf("Allowances: %.2f\n", employees[i].allowances);
                    printf("Deductions: %.2f\n", employees[i].deductions);
                    printf("Net Salary: %.2f\n", employees[i].netSalary);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nNo record found with employee ID %d.\n", searchId);
            }
        }
        else if (userChoice == 4)
        {
            int updateId;
            int found = 0;

            printf("\nEnter employee ID to update: ");
            scanf("%d", &updateId);
            while (getchar() != '\n');

            for (int i = 0; i < totalEmployees; i++)
            {
                if (employees[i].employeeId == updateId)
                {
                    printf("Enter new basic pay: ");
                    scanf("%f", &employees[i].basicPay);
                    while (getchar() != '\n');

                    printf("Enter new allowances: ");
                    scanf("%f", &employees[i].allowances);
                    while (getchar() != '\n');

                    printf("Enter new deductions: ");
                    scanf("%f", &employees[i].deductions);
                    while (getchar() != '\n');

                    employees[i].netSalary =
                        employees[i].basicPay +
                        employees[i].allowances -
                        employees[i].deductions;

                    printf("\nSalary record updated successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nNo record found with employee ID %d.\n", updateId);
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
                printf("\nNo record found with employee ID %d.\n", deleteId);
            }
            else
            {
                
                for (int i = foundIndex; i < totalEmployees - 1; i++)
                {
                    employees[i] = employees[i + 1];
                }
                totalEmployees--;
                printf("\nSalary record deleted successfully!\n");
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