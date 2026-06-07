#include <stdio.h>

int main()
{
    int n, n1, n2, rem, i, sum = 0, count = 0;
    printf("enter two numbers in the given range:/n");
    scanf("%d%d", &n1, &n2);
    for (i = n1; i <= n2; i++)
    {
        n = i;
        sum = 0;
        while (n > 0)
        {
            rem = n % 10;
            sum = sum + rem * rem * rem;
            n = n / 10;
        }
        if (i == sum)
        {
            printf("%d", i);
            count++;
        }
    }
    printf("\n total armstrong number in a given range :%d", count);
    return 0;
}