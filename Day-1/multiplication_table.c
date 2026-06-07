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
/*#include <stdio.h>
int main()
{
    int i, n, table = 1;
    printf("enter a number:");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        table = n * i;
        printf("\n %d*%d=%d",n,i,n*i );
    }
    
    return 0;
}*/