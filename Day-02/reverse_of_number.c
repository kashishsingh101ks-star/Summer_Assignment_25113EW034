#include <stdio.h>

int main()
{
    int n=0, digit=0, rev = 0;
    printf("enter a number:");
    scanf("%d", &n);
    
    while (n != 0)
    {
        digit = n % 10;
        n=n/10;
        rev = rev * 10 + digit;
        
    }
    printf("reverse of number =%d\n ", rev);
    return 0;
}