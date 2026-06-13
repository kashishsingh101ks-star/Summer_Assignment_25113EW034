#include <stdio.h>

int main(){
    

long  binary;
int dec=0,i=0,remainder;
printf("enter a binary number:");
scanf("%ld" ,&binary);
for(;binary>0;binary=binary/10){
    remainder=binary%10;
    dec =dec+remainder*(1<<i);
    i++;
}
printf("decimal:%d\n",dec);
    return 0;
}