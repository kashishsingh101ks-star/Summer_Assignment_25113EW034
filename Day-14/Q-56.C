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
    printf("Duplicate elements:\n");
    int found = 0;
 for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                found = 1;
                break;
            }
        }
    }
if (found == 0) {
        printf("No duplicates found\n");
    }

    return 0;
}