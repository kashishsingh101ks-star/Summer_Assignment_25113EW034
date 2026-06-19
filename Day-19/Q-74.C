#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], diff[10][10];
    int rows, cols;

    printf("enter number of rows: ");
    scanf("%d", &rows);
    printf("enter number of columns: ");
    scanf("%d", &cols);

    printf("enter elements of first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter elements of second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("difference of matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}
