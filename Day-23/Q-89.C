#include <stdio.h>

int main()
{
    char str[100];
    int count[256] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    int i = 0;
    while (str[i] != '\0')
    {
        count[(int)str[i]]++;
        i++;
    }

    int found = 0;
    i = 0;
    while (str[i] != '\0')
    {
        if (count[(int)str[i]] == 1)
        {
            printf("First non-repeating character is: %c\n", str[i]);
            found = 1;
            break;
        }
        i++;
    }

    if (found == 0)
    {
        printf("No non-repeating character found.\n");
    }

    return 0;
}