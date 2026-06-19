#include <stdio.h>

int main()
{
    int arr1[50], arr2[50], result[50];
    int n1, n2;

    printf("how many elements in first array? ");
    scanf("%d", &n1);

    printf("enter elements of first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("how many elements in second array? ");
    scanf("%d", &n2);

    printf("enter elements of second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int k = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                int already_present = 0;
                for (int x = 0; x < k; x++) {
                    if (result[x] == arr1[i]) {
                        already_present = 1;
                        break;
                    }
                }
                if (already_present == 0) {
                    result[k] = arr1[i];
                    k++;
                }
                break;
            }
        }
    }

    printf("Common elements:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}