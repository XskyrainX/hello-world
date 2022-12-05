#include <stdio.h>

int main(void)
{
    int num;
    double res1, res2;
    res1 = res2 = 0;

    printf("How many times do you want to multiply (<=0 to quit): ");
    while(1 == scanf("%d", &num) && num > 0)
    {
        for (size_t i = 1; i <= num; i++)
        {
            res1 += 1.0/i;
            if (i % 2 == 0)
            {
                res2 += 1.0/i;
            }
            else
            {
                res2 += -1.0/i;
            }

        }
        printf("1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...");
        printf(" = %g.\n", res1);
        printf("1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...");
        printf(" = %g.\n", res2);
        printf("The sum of the first %d times of the two sequences is %g\n", num, res1 + res2);
        printf("You can enter again (<= 0 to quit): ");
    }
    printf("Done.\n");

    return 0;
}