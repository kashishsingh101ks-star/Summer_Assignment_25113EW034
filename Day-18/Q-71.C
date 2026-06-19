#include <stdio.h>

int main()
{
    int arr[50], n, target;

    printf("how many elements? ");
    scanf("%d", &n);

    printf("enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("enter the number you want to search: ");
    scanf("%d", &target);

    int low = 0, high = n - 1, found = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            printf("Found! %d is at position %d (in sorted array)\n", target, mid + 1);
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