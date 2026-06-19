#include <stdio.h>

int main()
{
    int arr[50], n, target;

    printf("how many elements? ");
    scanf("%d", &n);

    printf("enter the elements (must be sorted): \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("enter the number you want to search: ");
    scanf("%d", &target);

    int low = 0, high = n - 1;
    int found = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            printf("Found! %d is at position %d\n", target, mid + 1);
            found = 1;
            break;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found == 0) {
        printf("Sorry, %d is not in the array\n", target);
    }

    return 0;
}