#include <stdio.h>

#define TAX 0.08

int main(void)
{
    double total = 100.0;
    int year = 0;

    do
    {
        year++;
        total += total * TAX;
        total -= 10;
        printf("(%d)account: %g.\n", year, total);
    } while (total > 9);
    printf("cash will be out in: %d years", year);

    return 0;
}