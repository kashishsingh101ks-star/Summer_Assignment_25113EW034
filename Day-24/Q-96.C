#include <stdio.h>

int main() {
    char str[100], result[100];
    int seen[256] = {0};
    int j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    int i = 0;
    while (str[i] != '\0') {
        char currentChar = str[i];

        if (seen[(int)currentChar] == 0) {
            result[j] = currentChar;
            j++;
            seen[(int)currentChar] = 1;
        }

        i++;
    }

    result[j] = '\0';

    printf("String after removing duplicates: %s\n", result);

    return 0;
}