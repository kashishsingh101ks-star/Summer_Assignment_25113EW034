#include <stdio.h>

int main(){
    int n,i =0,binary[32];
    printf("enter a decimal number:");
    scanf("%d",&n);
    if(n==0){
        printf("binary:\n");
        return 0;
    }
    while(n>0){
        binary[i]=n%2;
        n=n/2;
        i++;
    }
    printf("binary:");
    for (int j=i-1;j>=0;j--){
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}