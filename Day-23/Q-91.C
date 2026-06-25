#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0};

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("No, the two strings are not anagrams.\n");
        return 0;
    }

    int i = 0;
    while (str1[i] != '\0') {
        count[(int)str1[i]]++;
        i++;
    }

    while (str2[i] != '\0') {
        count[(int)str2[i]]--;
        i++;
    }

    int isAnagram = 1;
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram == 1) {
        printf("Yes, the two strings are anagrams!\n");
    } else {
        printf("No, the two strings are not anagrams.\n");
    }

    return 0;
}