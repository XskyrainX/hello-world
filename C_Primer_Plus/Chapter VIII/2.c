#include <stdio.h>

int main(void)
{
    int ch;
    int i = 0;

    printf("Please enter some characters.\n");
    while ((ch = getchar()) != EOF)
    {
        if (i++ == 10)
        {
            putchar('\n');
            i = 1;
        }        
        if (ch > ' ')
        {
            printf("%c - %3d ", ch, ch);
        }
        else if (ch == '\n')
        {
            printf("\\n - %d", 10);
            i = 0;
        }
        else if (ch == '\r')
        {
            printf("\\r - %d", 9);
        }
        else
        {
            printf("%c - %d", ch, ch+64);
        }
    }
    
    return 0;
}