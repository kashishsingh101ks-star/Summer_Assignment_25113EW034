#include <stdio.h>

int main()
{
    int a[10][10], transpose[10][10];
    int rows, cols;

    printf("enter number of rows: ");
    scanf("%d", &rows);
    printf("enter number of columns: ");
    scanf("%d", &cols);

    printf("enter elements of matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    printf("transposed matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}