#include <stdio.h>

#define SIZE 8

int power(int n, int times);

int main(void)
{
    int arrary[SIZE];
    int j = 0;

    for (size_t i = 0; i < SIZE; i++)
    {
        arrary[i] = power(2, i);
    }
    
    do
    {
        printf("%d\n", arrary[j]);
        j++;
    } while (j < SIZE);
    
    return 0;
}

int power(int n, int times)
{
    int sum = 1;
    
    for (size_t i = 0; i < times; i++)
    {
        sum *= n;
    }
    
    return sum;
}
