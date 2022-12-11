#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch;
    int supper, lower, others;
    supper = lower = others = 0;

    printf("Please enter some characters: \n");
    while ((ch = getchar()) != EOF)
    {
        if (isupper(ch))
        {
            supper++;
        }
        else if (islower(ch))
        {
            lower++;
        }
        else
        {
            others++;
        }
    }
    printf("There are %d supper words, %d lower words and %d others", supper, lower, others);

    return 0;
}