#include <stdio.h>

int main()
{
    int n, x, y, z;
    printf("enter max limit:");
    scanf("%d", &n);
    x = 0, y = 1, z = 0;
    while (z <= n)
    {
        printf("%d", z);
        x = y;
        y = z;
        z = x + y;
    }
    return 0;
}