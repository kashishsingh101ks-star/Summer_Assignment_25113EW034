#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int length, i;
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for (i = 0;i < length / 2;i++)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Reversed string is: %s\n", str);

    return 0;
}