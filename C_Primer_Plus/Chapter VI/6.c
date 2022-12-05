#include <stdio.h>

int main(void)
{
    unsigned long long max, min;
    
    printf("Please Enter the maxium: ");
    scanf("%llu", &max);
    printf("Please Enter the maxium: ");
    scanf("%llu", &min);
    if (min > max)
    {
        printf("Error!!!");
    }
    
    for (int i = min ; i <= max; i++)
    {
        printf("num = %llu, num_square = %llu, num_cubed = %llu\n", i, i * i, i * i * i);
    }
    printf("Done.\n");

    return 0;
}