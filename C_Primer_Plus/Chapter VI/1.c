#include <stdio.h>

int main(void)
{
    char alhpa[26];
    alhpa[0] = 'a';

    for (size_t i = 1; i < 26; i++)
    {
        alhpa[i] = alhpa[i-1] + 1; 
    }

    for (size_t i = 0; i < 26; i++)
    {
        printf("%c\n", alhpa[i]);
    }

    return 0;
}