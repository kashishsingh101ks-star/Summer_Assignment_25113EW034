#include <stdio.h>
#include <string.h>

int main()
{
    int empId[100];
    char empName[100][50];
    char department[100][50];
    float salary[100];

    int n = 0;
    int choice;
    int id, i, found, j;

    while (1)
    {
        printf("\n==================================");
        printf("\n MINI EMPLOYEE MANAGEMENT SYSTEM");
        printf("\n==================================");
        printf("\n1. Add Employee");
        printf("\n2. Display Employees");
        printf("\n3. Search Employee");
        printf("\n4. Update Employee");
        printf("\n5. Delete Employee");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("\nEnter Employee ID: ");
            scanf("%d", &empId[n]);

            printf("Enter Employee Name: ");
            scanf("%s", empName[n]);

            printf("Enter Department: ");
            scanf("%s", department[n]);

            printf("Enter Salary: ");
            scanf("%f", &salary[n]);

            n++;

            printf("\nEmployee Added Successfully!\n");
            break;

        case 2:

            if (n == 0)
            {
                printf("\nNo Employee Records Found!\n");
            }
            else
            {
                printf("\n----------- Employee Details -----------\n");

                for (i = 0; i < n; i++)
                {
                    printf("\nEmployee %d\n", i + 1);
                    printf("Employee ID : %d\n", empId[i]);
                    printf("Name        : %s\n", empName[i]);
                    printf("Department  : %s\n", department[i]);
                    printf("Salary      : %.2f\n", salary[i]);
                }
            }

            break;

        case 3:

            found = 0;

            printf("\nEnter Employee ID to Search: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (empId[i] == id)
                {
                    printf("\nEmployee Found\n");
                    printf("Employee ID : %d\n", empId[i]);
                    printf("Name        : %s\n", empName[i]);
                    printf("Department  : %s\n", department[i]);
                    printf("Salary      : %.2f\n", salary[i]);

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nEmployee Not Found!\n");
            }

            break;

        case 4:

            found = 0;

            printf("\nEnter Employee ID to Update: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (empId[i] == id)
                {
                    printf("Enter New Name: ");
                    scanf("%s", empName[i]);

                    printf("Enter New Department: ");
                    scanf("%s", department[i]);

                    printf("Enter New Salary: ");
                    scanf("%f", &salary[i]);

                    printf("\nEmployee Record Updated Successfully!\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nEmployee Not Found!\n");
            }

            break;

        case 5:

            found = 0;

            printf("\nEnter Employee ID to Delete: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (empId[i] == id)
                {
                    for (j = i; j < n - 1; j++)
                    {
                        empId[j] = empId[j + 1];
                        strcpy(empName[j], empName[j + 1]);
                        strcpy(department[j], department[j + 1]);
                        salary[j] = salary[j + 1];
                    }

                    n--;

                    printf("\nEmployee Record Deleted Successfully!\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nEmployee Not Found!\n");
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