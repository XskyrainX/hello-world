#include <stdio.h>

#define STOP '#'

int main(void)
{
    int ch;

    while ((ch = getchar()) != STOP)
    {
        putchar(ch);
    }
    
    return 0;
}