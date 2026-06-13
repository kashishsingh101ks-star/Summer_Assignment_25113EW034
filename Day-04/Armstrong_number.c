#include <stdio.h>

int main(){
    int n,original,digit,sum=0;
    printf("enter a number:");
    scanf("%d" ,&n);
    original=n;
    for(; n>0;n=n/10){
        digit=n%10;
        sum =sum+(digit*digit*digit);
    }
    if   (sum==original){
        printf("%d is Armstrong",original);
    }
    else{
        printf("%d is not Armstrong",original);
    }
    return 0;
}