#include <stdio.h>

int main() {
    int n, m;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    printf("Enter size of second array: ");
    scanf("%d", &m);

    int arr1[n], arr2[m], merged[n + m];

    printf("Enter elements of first array in sorted order: ");
    int i = 0;
    while (i < n) {
        scanf("%d", &arr1[i]);
        i++;
    }

    printf("Enter elements of second array in sorted order: ");
    i = 0;
    while (i < m) {
        scanf("%d", &arr2[i]);
        i++;
    }

    i = 0;       
    int j = 0;   
    int k = 0;   

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < n) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < m) {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    printf("Merged sorted array is: ");
    i = 0;
    while (i < n + m) {
        printf("%d ", merged[i]);
        i++;
    }
    printf("\n");

    return 0;
}