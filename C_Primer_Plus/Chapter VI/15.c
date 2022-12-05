#include <stdio.h>
#include <string.h>

#define SIZE 255

int main(void)
{
    int i = 0;
    char sss[SIZE];

    printf("Please enter a string:\n");

    do
    {
        scanf("%c", &sss[i]);
    } while (sss[i] != '\n' && ++i < SIZE);
    
    printf("Reversing print of the string is:\n");
    for (i--; i >= 0; i--)
    {
        printf("%c", sss[i]);
    }
    
    return 0;
}