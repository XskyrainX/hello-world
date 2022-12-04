#include <stdio.h>

int main(void)
{
    int num;
    float sum = 0;

    printf("How many times do you want to multiply: ");
    scanf("%d", &num);
    for (size_t i = 1; i <= num; i++)
    {
        sum += 1.0/i;
    }
    printf("A:%f\n", sum);

    for (size_t i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            sum += 1.0/i;
        }
        else
        {
            sum += -1.0/i;
        }
    }
    printf("B:%f", sum);

    return 0;
}