#include <stdio.h>

int main(){
    int n,digit,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(;n!=0 ; n=n/10){
        digit=n%10;
        sum=sum+digit;
    }
    printf("sum of digits=%d",sum);
    return 0;
}