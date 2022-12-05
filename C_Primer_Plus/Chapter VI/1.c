#include <stdio.h>

#define LEN 26

int main(void)
{
    char alhpa[LEN];

    for (size_t i = 0; i < LEN; i++)
    {
        alhpa[i] = 'a' + i; 
    }
    printf("Here are %d letters.\n", LEN);
    for (size_t i = 0; i < LEN; i++)
    {
        printf("%-3c", alhpa[i]);
    }

    return 0;
}