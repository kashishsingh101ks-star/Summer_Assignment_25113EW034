#include <stdio.h>

int main(){
    int numbers[50];
    int size;
    printf("how many numbers do you want to enter?");
    scanf("%d",&size);
    for (int i=0;i < size; i++){
        printf("enter number %d:",i+1);
        scanf("%d",&numbers[i]);
    }
    printf("\nYou entered:");
    for (int i=0; i <size; i++){
        printf("%d",numbers[i]);
    }
    printf("\n");
    return 0;
}