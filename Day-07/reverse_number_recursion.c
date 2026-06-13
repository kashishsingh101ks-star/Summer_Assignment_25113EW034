#include <stdio.h>
int reverse(int n,int result){
    if(n==0)
    return result;
    result = (result*10) + (n%10);
    return reverse(n/10, result);
}

int main(){
    int n;
    printf("enter a number:");
    scanf("%d" ,&n);
    printf("reverse of %d = %d\n",n,reverse(n,0));
    
    return 0;
}