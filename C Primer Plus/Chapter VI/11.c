#include <stdio.h>

#define SIZE 8

int main(void)
{
    int input_integer[SIZE];

    for (size_t i = 0; i < SIZE; i++)
    {
        scanf("%d", &input_integer[i]);
    }

    for (size_t j = 1; j <= SIZE; j++)
    {
        printf("%d ", input_integer[SIZE - j]);
    }

    return 0;
    
}