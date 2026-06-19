#include <stdio.h>

int main()
{
    int arr[50], n, target;

    printf("how many elements?");
    scanf("%d", &n);


    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to count:");
    scanf("%d", &target);

    
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }
    printf("%d appears %d time(s) in the array\n", target, count);
    return 0;
}