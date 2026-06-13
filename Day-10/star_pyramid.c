#include <stdio.h>

int main()
{
    int i, j, n, s;
    printf("enter number of rows:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (s = 1; s <= n - i; s++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("%c",'A'+j-1);
            for(j=i-1; j>=1; j--)
            printf("%c",'A' +j-1);
        printf("\n");
    }
    return 0;
}