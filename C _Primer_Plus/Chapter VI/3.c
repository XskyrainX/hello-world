#include <stdio.h>

int main(void)
{

    for (int i = 5; i >= 0; i--)
    {
        /* code */
        for (size_t j = 0; j < 6 - i; j++)
        {
            /* code */
            printf("%c", 'F' - j);
        }
        printf("\n");
    }
    return 0;
}