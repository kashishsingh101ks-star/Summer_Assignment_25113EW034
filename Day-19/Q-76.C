#include <stdio.h>

int main()
{
    int a[10][10], n;

    printf("enter size of matrix (n x n): ");
    scanf("%d", &n);

    printf("enter elements of matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int primary_sum = 0, secondary_sum = 0;

    for (int i = 0; i < n; i++) {
        primary_sum = primary_sum + a[i][i];
        secondary_sum = secondary_sum + a[i][n - 1 - i];
    }

    printf("primary diagonal sum: %d\n", primary_sum);
    printf("secondary diagonal sum: %d\n", secondary_sum);

    return 0;
}