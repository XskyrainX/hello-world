#include <stdio.h>

double average(double, double);

int main(void)
{
    printf("%g", average(2.1, 99.9));
}

double average(double a, double b)
{
    return 2.0 / ((1.0 / a) + (1.0 / b));
}