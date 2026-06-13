#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    printf("enter first number:");
    scanf("%d", &a);
    printf("enter second number:");
    scanf("%d", &b);
    printf("sum = %d\n", sum(a, b));

    return 0;
}