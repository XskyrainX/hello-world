#include <stdio.h>

void larger_of(double * x, double * y);

int main(void)
{
    double a, b;
    a = 99.9;
    b = 100.0;
    larger_of(&a, &b);
    printf("1:%lf, 2:%lf", a, b);
}

void larger_of(double * x, double * y)
{
    *x = *y = *x > *y ? *x:*y;
    return;
}