#include <stdio.h>

#define SIZE 8

int main(void)
{
    double array1[SIZE];
    double array2[SIZE];

    printf("Please Enter 8 letters: ");
    for (size_t i = 0; i < SIZE; i++)
    {
        scanf("%lf", &array1[i]);
    }
    
    for (size_t i = 0; i < SIZE; i++)
    {
        if(0 == i)
        {
            array2[0] = array1[0];
        }
        else
        {
            array2[i] = array1[i] + array2[i-1];
        }
    }
    printf("Here are the results for array a:\n");
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%-10g", array1[i]);
    }
    printf("\nHere are the results for array b:\n");
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%-10g", array2[i]);
    }
    printf("\nDone.\n");
    
    return 0;
}