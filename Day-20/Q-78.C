#include <stdio.h>

int main()
{
    int a[10][10];
    int rows, cols;
    int i, j;
    int isSymmetric = 1;   

    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);

    
    if (rows!= cols)
    {
        printf("Matrix is not symmetric (rows and columns are not equal).\n");
        return 0;
    }

    printf("Enter elements of matrix:\n");
    for (i = 0;i < rows;i++)
    {
        for (j = 0;j < cols;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

   
    for (i = 0; i < rows; i++)
    {
        for (j = 0;j < cols;j++)
        {
            if (a[i][j] != a[j][i])
            {
                isSymmetric = 0;
            }
        }
    }

    if (isSymmetric == 1)
    {
        printf("Matrix is symmetric.\n");
    }
    else
    {
        printf("Matrix is not symmetric.\n");
    }

    return 0;
}