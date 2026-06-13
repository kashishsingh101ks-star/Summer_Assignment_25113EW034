#include <stdio.h>
int isarmstrong(int n)
{
    int rem, sum = 0, temp;
    temp = n;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }
    if (sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    if (isarmstrong(n))
        printf("%d is armstrong\n", n);
    else
        printf("%d is not armstrong\n", n);

    return 0;
}