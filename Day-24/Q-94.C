#include <stdio.h>
#include <string.h>

int main() {
    char str[100], compressed[200];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    int j = 0;

    int i = 0;
    while (i < len) {
        char currentChar = str[i];
        int count = 1;

        while (i + count < len && str[i + count] == currentChar) {
            count++;
        }

        compressed[j] = currentChar;
        j++;

        if (count > 1) {
            if (count >= 10) {
                compressed[j] = (count / 10) + '0';
                j++;
                compressed[j] = (count % 10) + '0';
                j++;
            } else {
                compressed[j] = count + '0';
                j++;
            }
        }

        i += count;
    }

    compressed[j] = '\0';

    if (strlen(compressed) < strlen(str)) {
        printf("Compressed string is: %s\n", compressed);
    } else {
        printf("Compression not possible, original string is: %s\n", str);
    }

    return 0;
}