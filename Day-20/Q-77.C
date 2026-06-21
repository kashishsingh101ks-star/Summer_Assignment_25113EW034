#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], result[10][10];
    int row1, col1, row2, col2;
    int i, j, k;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &row2, &col2);

    if (col1 != row2)
    {
        printf("Multiplication not possible. Columns of first matrix must match rows of second matrix.\n");
        return 0;
    }

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < col2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < col1; k++)
            {
                result[i][j] = result[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("\nResultant matrix after multiplication:\n");
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}