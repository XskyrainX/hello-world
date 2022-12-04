#include <stdio.h>

#define STOP '#'

int main(void)
{
    int ch;
    int count = 0;
    int pre = 0;

    while ((ch = getchar()) != STOP)
    {
        if ('e' == pre && 'i' == ch)
        {
            count++;
        }
        pre = ch;
    }
    printf("ei: %d times", count);

    return 0;
}