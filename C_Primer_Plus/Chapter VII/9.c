#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    unsigned long num;
    unsigned long div;
    bool isPrime;

    printf("Please enter an integer for analysis");
    printf("Enter q to quit.\n");
    while (1 == scanf("%lu", &num))
    {
        if (num < 0)
        {
            printf("%d only receive integer larger than 0");
            1 == scanf("%lu", &num);
        }
        for (int count = 2; count <= num; count++)
        {
            for (div = 2, isPrime = true; (div * div) <= count; div++)
            {
                if (count % div == 0)
                {
                    isPrime = false;
                }
            }
            if (isPrime)
            {
                printf("%lu is prime.\n", count);
            }
        }
        printf("Please enter another integer for analysis;\n");
        printf("Enter q to quit.\n");

    }
    printf("Bye.\n");

    return 0;
}