#include <stdio.h>
#include <string.h>

#define SIZE 255

int main(void)
{
    char sss[SIZE];
    int i = 0;

    for (size_t i = 0; i < SIZE; i++)
    {
        scanf("%c", &sss[i]);
        if ('\n' == sss[i])
        {
            break;
        }
    }
    
    for (size_t i = 1; i <= strlen(sss); i++)
    {
        printf("%c", sss[strlen(sss) - i]);
    }
    
    return 0;
}