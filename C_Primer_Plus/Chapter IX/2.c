#include <stdio.h>

void chline(char, int, int);

int main(void)
{
    chline('M', 30, 22);
}

void chline(char ch, int i, int j)
{
    for (size_t a = 0; a < j; a++)
    {
        for (size_t b = 0; b < i; b++)
        {
            putchar(ch);
        }
        printf("\n");
    }
    
}