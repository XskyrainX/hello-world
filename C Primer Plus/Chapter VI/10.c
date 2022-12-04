#include <stdio.h>

int main(void)
{
    unsigned long long max, min;
    unsigned long long sum = 0;
    printf("Enter lower and upper integer limits: ");
    scanf("%llu%llu", &min, &max);
    
    while (max > min)
    {
        for (size_t i = min; i <= max; i++)
        {
            sum += i * i;
        }
        printf("The sums of the squares from %llu to %llu is %llu\n", min * min, max* max, sum);
        printf("Enter nex set of limits:");
        scanf("%llu%llu", &min, &max);
    }
    printf("Done");
    
    return 0;
}