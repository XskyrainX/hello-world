#include <stdio.h>

int main(void)
{
    long total = 1000000;
    int year;
    do
    {
        total = total * 1.08 - 100000;
    } while (total < 0);

    printf("cash will be out in: %d years", year);

    return 0;
}