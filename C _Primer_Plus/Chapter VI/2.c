#include <stdio.h>

int main(void)
{
    for (int i = 4; i >= 0; i--)
    {
        /* code */
        for (size_t j = 0; j < 5 - i; j++)
        {
            /* code */
            printf("$");
        }
        printf("\n");
    }
    return 0;
}