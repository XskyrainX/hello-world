#include <stdio.h>

#define STOP '#'

int main(void)
{
    int ch;
    char i = 0;

    while((ch = getchar()) != STOP)
    {
        if (i++ % 8 == 0)
        {
            putchar('\n');
            i = 1;
        }


        if ('\n' == ch)
        {
            printf("\\n-%3d", '\n');
        }
        else if ('\t' == ch)
        {
            printf("\\t-%3d", '\t');
        }
        else
        {
            printf("%c-%3d ", ch, ch);
        }
    }

    return 0;
}