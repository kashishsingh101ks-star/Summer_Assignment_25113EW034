#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count1[256] = {0};
    int count2[256] = {0};

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    int i = 0;
    while (str1[i] != '\0') {
        count1[(int)str1[i]]++;
        i++;
    }

    i = 0;
    while (str2[i] != '\0') {
        count2[(int)str2[i]]++;
        i++;
    }

    printf("Common characters are: ");
    int found = 0;

    for (i = 0; i < 256; i++) {
        if (count1[i] > 0 && count2[i] > 0) {

            int times = 0;
            int minCount = 0;

            if (count1[i] < count2[i]) {
                minCount = count1[i];
            } else {
                minCount = count2[i];
            }

            while (times < minCount) {
                printf("%c ", (char)i);
                times++;
                found = 1;
            }
        }
    }

    if (found == 0) {
        printf("No common characters found.");
    }

    printf("\n");

    return 0;
}