#include <stdio.h>

#define STOP '#'

int main(void)
{
    int ch, enter, space, others;
    enter = space = others = 0;

    printf("Feel free to enter some characters: \n");
    while((ch = getchar()) != STOP)
    {
        if (ch == ' ')
        {
            space++;
        }
        else if (ch == '\n')
        {
            enter++;
        }
        else
        {
            others++;
        }
    }
    printf("We receive %d space, %d linefeed, %d other", space, enter, others);

    return 0;
}