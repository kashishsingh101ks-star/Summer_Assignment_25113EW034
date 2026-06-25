#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], combined[200];
    
    printf("Enter first string: ");
    scanf("%s", str1);
    
    printf("Enter second string: ");
    scanf("%s", str2);
    
    if (strlen(str1) != strlen(str2)) {
        printf("No, the two strings are not rotations of each other.\n");
        return 0;
    }
    
    strcpy(combined, str1);
    strcat(combined, str1);
    
    if (strstr(combined, str2) != NULL) {
        printf("Yes, the two strings are rotations of each other!\n");
    } else {
        printf("No, the two strings are not rotations of each other.\n");
    }
    
    return 0;
}