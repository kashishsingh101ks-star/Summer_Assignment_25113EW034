#include <stdio.h>

int main()
{
    int n;

    printf("enter n (numbers from 1 to n, one is missing): ");
    scanf("%d", &n);

    int arr[50];

    printf("enter %d elements:\n", n - 1);
    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
    }

    int expected_sum = n * (n + 1) / 2;
    int actual_sum = 0;

    for (int i = 0; i < n - 1; i++) {
        actual_sum = actual_sum + arr[i];
    }

    int missing = expected_sum - actual_sum;

    printf("Missing element: %d\n", missing);

    return 0;
}