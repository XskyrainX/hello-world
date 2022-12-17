#include <stdio.h>
#include <ctype.h>
int find_alphapos(char);

int main(void)
{
    int ch;

    printf("Please enter the upper or lower alpha.\n");
    while ((ch = getchar()) != EOF)
    {
        if (-1 == find_alphapos(ch))
        {
            printf("Please check your enter.\n");
        }
        else
        {
            printf("The %c is the %dth.\n", ch, find_alphapos(ch));
        }
        
    }
    
}

int find_alphapos(char ch)
{
    if (!isalpha(ch))
    {
        return -1;
    }
    
    if (islower(ch))
    {
        return ch - 'a' + 1;
    }
    
    if (isupper(ch))
    {
        return ch - 'A' + 1;
    }
}