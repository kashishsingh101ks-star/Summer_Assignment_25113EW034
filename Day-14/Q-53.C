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
    printf("Enter the number you want to search:");
    scanf("%d", &target);
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            found = 1;
            printf("found! %d is at position %d\n", target, i + 1);
            break;
        }
    }
    if (found == 0)
    {
        printf("sorry,%d is not in the array\n", target);
    }

    return 0;
}