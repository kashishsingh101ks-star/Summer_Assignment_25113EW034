#include <stdio.h>

int main()
{
    int n, digit=0, prod = 1;
    printf("enter a number:");
    scanf("%d", &n);
    while (n != 0)
    {
        digit = n % 10;
        n=n/10;
        prod = prod * digit;
    }
    printf("product of number=%d\n", prod);

    return 0;
}