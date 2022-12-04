#include <stdio.h>

int main(void)
{
    unsigned long long max, min;
    printf("Please Enter the maxium and minimum: ");
    scanf("%llu%llu", &max, &min);
    if (min > max)
    {
        printf("Error!!!");
    }
    
    for (int i = min ; i < max; i++)
    {
        printf("num = %llu, num_square = %llu, num_cubed = %llu\n", i, i * i, i * i * i);
    }
    
    return 0;
}