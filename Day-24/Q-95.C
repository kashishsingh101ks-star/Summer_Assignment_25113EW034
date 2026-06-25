#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char longestWord[100];
    char currentWord[100];
    int longestLen = 0;
    int j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    int i = 0;
    while (i <= len)
    {

        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            currentWord[j] = str[i];
            j++;
        }
        else
        {

            currentWord[j] = '\0';

            int currentLen = strlen(currentWord);
            if (currentLen > longestLen)
            {
                longestLen = currentLen;
                strcpy(longestWord, currentWord);
            }

            j = 0;
        }

        i++;
    }

    if (longestLen > 0)
    {
        printf("Longest word is: %s\n", longestWord);
        printf("Its length is: %d\n", longestLen);
    }
    else
    {
        printf("No words found.\n");
    }

    return 0;
}