#include <stdio.h>

int main()
{
    int n, i, j;
    char ch = 'A ,B,C,D,E';
    printf("enter a number of rows:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", 'A'+j);
        }
        printf("\n");
        ch++;
    }
    return 0;
}