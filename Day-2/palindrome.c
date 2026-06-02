#include <stdio.h>

int main()
{
    int n, digit = 0, rev = 0, orig;
    printf("enter a number:");
    scanf("%d", &n);
    orig = n;

    while (n != 0)
    {
        digit = n % 10;
        n = n / 10;
        rev = rev * 10 + digit;
    }
    if (rev == orig)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not palindrome number");
    }

    return 0;
}