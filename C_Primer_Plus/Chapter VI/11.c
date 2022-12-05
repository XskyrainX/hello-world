#include <stdio.h>

#define SIZE 8

int main(void)
{
    int input_integer[SIZE];

    printf("Please enter %d numbers: \n", SIZE);
    for (size_t i = 0; i < SIZE; i++)
    {
        scanf("%d", &input_integer[i]);
    }
    printf("Reverse order printing %d numbers:\n", SIZE);
    for (size_t j = 1; j <= SIZE; j++)
    {
        printf("%-3d", input_integer[SIZE - j]);
    }

    return 0;
    
}