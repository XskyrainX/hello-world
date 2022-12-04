#include <stdio.h>

#define STOP '#'

int main(void)
{
    int ch;
    int count = 0;

    while ((ch = getchar()) != STOP)
    {
        if ('.' == ch)
        {
            putchar('!');
            putchar('\n');
            count++;
        }
        else if ('!' == ch)
        {
            printf("!!\n");
            count++;
        }
        else
        {
            putchar(ch);
        }
    }
    printf(".->! !->!! does %d times", count);

    return 0;
}