#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float totalSalary;
};

int main()
{
    struct Employee emp[100];
    int n = 0;
    int choice;
    int i, id, found;

    while (1)
    {
        printf("\n=================================");
        printf("\n     SALARY MANAGEMENT SYSTEM");
        printf("\n=================================");
        printf("\n1. Add Employee");
        printf("\n2. Display Salary Details");
        printf("\n3. Search Employee");
        printf("\n4. Update Salary");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("\nEnter Employee ID: ");
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name: ");
            scanf("%s", emp[n].name);

            printf("Enter Basic Salary: ");
            scanf("%f", &emp[n].basicSalary);

            emp[n].hra = emp[n].basicSalary * 0.20;
            emp[n].da = emp[n].basicSalary * 0.10;
            emp[n].totalSalary = emp[n].basicSalary + emp[n].hra + emp[n].da;

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
                printf("\n----------- Salary Details -----------\n");

                for (i = 0; i < n; i++)
                {
                    printf("\nEmployee %d\n", i + 1);
                    printf("ID            : %d\n", emp[i].id);
                    printf("Name          : %s\n", emp[i].name);
                    printf("Basic Salary  : %.2f\n", emp[i].basicSalary);
                    printf("HRA (20%%)     : %.2f\n", emp[i].hra);
                    printf("DA (10%%)      : %.2f\n", emp[i].da);
                    printf("Total Salary  : %.2f\n", emp[i].totalSalary);
                }
            }
            break;

        case 3:

            found = 0;

            printf("\nEnter Employee ID to Search: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    printf("\nEmployee Found\n");
                    printf("ID            : %d\n", emp[i].id);
                    printf("Name          : %s\n", emp[i].name);
                    printf("Basic Salary  : %.2f\n", emp[i].basicSalary);
                    printf("HRA           : %.2f\n", emp[i].hra);
                    printf("DA            : %.2f\n", emp[i].da);
                    printf("Total Salary  : %.2f\n", emp[i].totalSalary);

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

            printf("\nEnter Employee ID to Update Salary: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    printf("Enter New Basic Salary: ");
                    scanf("%f", &emp[i].basicSalary);

                    emp[i].hra = emp[i].basicSalary * 0.20;
                    emp[i].da = emp[i].basicSalary * 0.10;
                    emp[i].totalSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;

                    printf("\nSalary Updated Successfully!\n");
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

            printf("\nThank You!\n");
            return 0;

        default:

            printf("\nInvalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}