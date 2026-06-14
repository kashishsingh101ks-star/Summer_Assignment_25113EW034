#include <stdio.h>

int main()
{
    int numbers[50];
    int size;
    int sum = 0;
    float average;
    printf("how many numbers do you want to enter?");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("enter number %d:", i + 1);
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < size; i++)
    {
        sum = sum + numbers[i];
    }
    average = (float)sum / size;
    printf("\nsum = %d\n", sum);
    printf("average = %.2f\n", average);

    return 0;
}