#include <stdio.h>

int main()
{
    char str[100];
    int freq[256] = {0};   
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        freq[(int)str[i]]++;
    }

    printf("\nCharacter frequencies:\n");
    for (i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c occurs %d time(s)\n", i, freq[i]);
        }
    }

    return 0;
}