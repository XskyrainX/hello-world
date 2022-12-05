#include <stdio.h>

int main(void)
{
    for (size_t i = 1; i <= 5; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            printf("$");
        }
        printf("\n");
    }
    
    return 0;
}