#include <stdio.h>

int main()
{
    int arr[50], n, target;

    printf("how many elements? ");
    scanf("%d", &n);

    printf("enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter the target sum: ");
    scanf("%d", &target);

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("Pair found: %d + %d = %d\n", arr[i], arr[j], target);
                found = 1;
            }
        }
    }

    if (found == 0)
    {
        printf("No pair found with sum %d\n", target);
    }

    return 0;
}