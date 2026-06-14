#include <stdio.h>

int main()
{
    int numbers[50];
    int size;
    printf("how many numbers do you want to enter?");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("enter number %d:", i + 1);
        scanf("%d", &numbers[i]);
    }
    int largest = numbers[0];
    int smallest = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }
    printf("\nlargest element = %d\n", largest);
    printf("smallest element = %d\n", smallest);
    return 0;
}