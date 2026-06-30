#include <stdio.h>

struct Product
{
    int productId;
    char productName[50];
    int quantity;
    float price;
};

int main()
{
    struct Product p[100];
    int n = 0;
    int choice;
    int i, id, found, j;

    while (1)
    {
        printf("\n==================================");
        printf("\n   INVENTORY MANAGEMENT SYSTEM");
        printf("\n==================================");
        printf("\n1. Add Product");
        printf("\n2. Display Products");
        printf("\n3. Search Product");
        printf("\n4. Update Product");
        printf("\n5. Delete Product");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("\nEnter Product ID: ");
            scanf("%d", &p[n].productId);

            printf("Enter Product Name: ");
            scanf("%s", p[n].productName);

            printf("Enter Quantity: ");
            scanf("%d", &p[n].quantity);

            printf("Enter Price: ");
            scanf("%f", &p[n].price);

            n++;

            printf("\nProduct Added Successfully!\n");
            break;

        case 2:

            if (n == 0)
            {
                printf("\nNo Products Available!\n");
            }
            else
            {
                printf("\n----------- Product Details -----------\n");

                for (i = 0; i < n; i++)
                {
                    printf("\nProduct %d\n", i + 1);
                    printf("Product ID   : %d\n", p[i].productId);
                    printf("Product Name : %s\n", p[i].productName);
                    printf("Quantity     : %d\n", p[i].quantity);
                    printf("Price        : %.2f\n", p[i].price);
                }
            }

            break;

        case 3:

            found = 0;

            printf("\nEnter Product ID to Search: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (p[i].productId == id)
                {
                    printf("\nProduct Found\n");
                    printf("Product ID   : %d\n", p[i].productId);
                    printf("Product Name : %s\n", p[i].productName);
                    printf("Quantity     : %d\n", p[i].quantity);
                    printf("Price        : %.2f\n", p[i].price);

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nProduct Not Found!\n");
            }

            break;

        case 4:

            found = 0;

            printf("\nEnter Product ID to Update: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (p[i].productId == id)
                {
                    printf("Enter New Product Name: ");
                    scanf("%s", p[i].productName);

                    printf("Enter New Quantity: ");
                    scanf("%d", &p[i].quantity);

                    printf("Enter New Price: ");
                    scanf("%f", &p[i].price);

                    printf("\nProduct Updated Successfully!\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nProduct Not Found!\n");
            }

            break;

        case 5:

            found = 0;

            printf("\nEnter Product ID to Delete: ");
            scanf("%d", &id);

            for (i = 0; i < n; i++)
            {
                if (p[i].productId == id)
                {
                    for (j = i; j < n - 1; j++)
                    {
                        p[j] = p[j + 1];
                    }

                    n--;

                    printf("\nProduct Deleted Successfully!\n");

                    found = 1;
                    break;
                }
            }

            if (found == 0)
            {
                printf("\nProduct Not Found!\n");
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