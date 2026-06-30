#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n = 0;
    int choice;
    int i, j;
    int id, found;

    while (1)
    {
        printf("\n====================================");
        printf("\n EMPLOYEE RECORD MANAGEMENT SYSTEM");
        printf("\n====================================");
        printf("\n1. Add Employee");
        printf("\n2. Display All Employees");
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
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name: ");
            scanf("%s", emp[n].name);

            printf("Enter Department: ");
            scanf("%s", emp[n].department);

            printf("Enter Salary: ");
            scanf("%f", &emp[n].salary);

            n++;
            printf("\nEmployee Record Added Successfully!\n");
            break;

        case 2:

            if (n == 0)
            {
                printf("\nNo Employee Records Found!\n");
            }
            else
            {
                printf("\n----------- Employee Records -----------\n");

                for (i = 0; i < n; i++)
                {
                    printf("\nEmployee %d\n", i + 1);
                    printf("ID         : %d\n", emp[i].id);
                    printf("Name       : %s\n", emp[i].name);
                    printf("Department : %s\n", emp[i].department);
                    printf("Salary     : %.2f\n", emp[i].salary);
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
                    printf("ID         : %d\n", emp[i].id);
                    printf("Name       : %s\n", emp[i].name);
                    printf("Department : %s\n", emp[i].department);
                    printf("Salary     : %.2f\n", emp[i].salary);

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nEmployee Record Not Found!\n");
            }

            break;

        case 4:

            found = 0;

            printf("\nEnter Employee ID to Update: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    printf("Enter New Name: ");
                    scanf("%s", emp[i].name);

                    printf("Enter New Department: ");
                    scanf("%s", emp[i].department);

                    printf("Enter New Salary: ");
                    scanf("%f", &emp[i].salary);

                    printf("\nEmployee Record Updated Successfully!\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nEmployee Record Not Found!\n");
            }

            break;

        case 5:

            found = 0;

            printf("\nEnter Employee ID to Delete: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    for (j = i; j < n - 1; j++)
                    {
                        emp[j] = emp[j + 1];
                    }

                    n--;
                    found = 1;

                    printf("\nEmployee Record Deleted Successfully!\n");
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nEmployee Record Not Found!\n");
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