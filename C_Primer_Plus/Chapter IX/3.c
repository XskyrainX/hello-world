#include <stdio.h>

void show(char ch, int i, int j);

int main(void)
{
    show('O', 4, 5);
}

void show(char ch, int i, int j)
{
    for (size_t a = 0; a < i; a++)
    {
        for (size_t b = 0; b < j; b++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
    
}