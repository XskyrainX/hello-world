#include <stdio.h>

int main(void)
{

    for (size_t i = 1; i <= 6; i++)
    {
        /* code */
        for (size_t j = 0; j < i; j++)
        {
            /* code */
            printf("%c", 'F' - j);
        }
        printf("\n");
    }
    
    return 0;
}