#include <stdio.h>

int main()
{
    int arr1[50], arr2[50], merged[100];
    int n1, n2;

    printf("how many elements in first array? ");
    scanf("%d", &n1);

    printf("enter elements of first array:\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("how many elements in second array? ");
    scanf("%d", &n2);

    printf("enter elements of second array:\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int k = 0;

    for (int i = 0; i < n1; i++)
    {
        merged[k] = arr1[i];
        k++;
    }

    for (int i = 0; i < n2; i++)
    {
        merged[k] = arr2[i];
        k++;
    }

    printf("Merged array:\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}