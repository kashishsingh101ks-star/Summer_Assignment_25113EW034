#include <stdio.h>

int main()
{
    int numbers[50];
    int size;
    int evencount = 0, oddcount = 0;

    printf("how many numbers do you want to enter?");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("enter number %d:", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    printf("\nEven numbers count = %d\n", evencount);
    printf("odd numbers count = %d\n", oddcount);

    return 0;
}