#include <stdio.h>

int main()
{
    int a[10][10];
    int rows,cols;
    int i,j;
    int sum;

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0;j < cols;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nRow wise sum:\n");
    for (i = 0;i < rows;i++)
    {
        sum = 0;
        for (j = 0;j < cols;j++)
        {
            sum = sum + a[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}