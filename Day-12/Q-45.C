#include <stdio.h>
int ispalindrome(int n){
    int rev =0,rem, temp;
    temp = n;
    while (temp !=0){
        rem =temp % 10;
        rev = rev *10 + rem;
        temp =temp /10;
    }
    if (rev == n)
        return 1;
    else
        return 0;
}

int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if (ispalindrome(n))
         printf("%d is palindrome\n",n);
    else
        printf("%d is not plaindrome\n",n);
    
    return 0;
}  