#include <stdio.h>

int main(void)
{
    char letter = 'A';

    for (int i = 0; i < 6; i++)
    {
        /* code */
        for (size_t j = 0; j < i + 1 ; j++)
        {
            /* code */
            printf("%c", letter++);
        }
        printf("\n");
    }

    return 0;
}