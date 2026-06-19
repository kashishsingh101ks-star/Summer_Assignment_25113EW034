#include <stdio.h>

int main()
{
    int arr[50], n;

    printf("how many elements?");
    scanf("%d", &n);

    printf("enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int second = -1;
    for (int i = 1; i < n; i++){
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    if (second == -1)
    {
        printf("No second largest element (all elements are same or array too small)\n");
    }
    else
    {
        printf("largestelement: %d\n", largest);
        printf("secomd largest element: %d\n", second);
    }
    return 0;
}