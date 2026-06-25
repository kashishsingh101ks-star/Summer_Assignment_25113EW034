#include <stdio.h>

int main() {
    char str[100];
    int count[256] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    int i = 0;
    while (str[i] != '\0') {
        count[(int)str[i]]++;
        i++;
    }

    int maxCount = 0;
    char maxChar = ' ';

    for (i = 0; i < 256; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxChar = (char)i;
        }
    }

    printf("Maximum occurring character is: %c\n", maxChar);
    printf("It appears %d times.\n", maxCount);

    return 0;
}