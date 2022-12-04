#include <stdio.h>

#define STOP '#'

int main(void)
{
    int ch;
    int count = 0;

    while ((ch = getchar()) != STOP)
    {
        switch (ch)
        {
        case '.':
            putchar('!');
            putchar('\n');
            count++;
            break;
        case '!':
            printf("!!\n");
            count++;
            break;
        default:
            putchar(ch);
            break;
        }
    }
    printf(".->! !->!! does %d times", count);

    return 0;
}