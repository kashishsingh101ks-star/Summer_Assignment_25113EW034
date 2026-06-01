#include <stdio.h>
int main()
{
    int n, i, table;
    printf("enter a number:");
    scanf("%d", &n);
    i =1;
    while(i<=10){
        printf("\n %d",n*i);
        i=i+1;
    }
    return 0;
}