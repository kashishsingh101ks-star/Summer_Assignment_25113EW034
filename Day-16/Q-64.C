#include <stdio.h>

int main()
{
    int arr[50], n;

    printf("how many elements? ");
    scanf("%d", &n);

    printf("enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int temp[50];
    int k = 0;

    for (int i = 0; i < n; i++) {
        int already_present = 0;

        for (int j = 0; j < k; j++) {
            if (temp[j] == arr[i]) {
                already_present = 1;
                break;
            }
        }

        if (already_present == 0) {
            temp[k] = arr[i];
            k++;
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}