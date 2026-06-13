#include <stdio.h>
int fibonacci(int n){
    int a=0,b=1,c,i;
    printf("%d %d",a,b);
    for(i =2; i<n;i++){
        c=a+b;
        printf("%d", c);
        a=b;
        b=c;
    }
    printf("\n");
}

int main(){
    int n;
    printf("enter number of terms:");
    scanf("%d", &n);
    printf("fibonacci series: ");
    fibonacci(n);
    
    return 0;
}