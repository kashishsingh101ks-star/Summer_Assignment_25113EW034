#include <stdio.h>

int main()
{
    char str[100];
    int i;
    int vowelCount = 0;
    int consonantCount = 0;
    char ch;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowelCount++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            consonantCount++;
        }
    }

    printf("Vowels = %d\n", vowelCount);
    printf("Consonants = %d\n", consonantCount);

    return 0;
}