#include <stdio.h>

int main(void)
{
    unsigned long long max, min;
    unsigned long long sum = 0;
    
    printf("Enter lower and upper integer limits: ");
    
    while (2 == scanf("%llu%llu", &min, &max) && max > min)
    {
        for (size_t i = min; i <= max; i++)
        {
            sum += i * i;
        }
        printf("The sums of the squares from %llu to %llu is %llu\n", min * min, max* max, sum);
        printf("Enter nex set of limits:");
    }
    printf("Done\n");
    
    return 0;
}