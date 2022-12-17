#include <stdio.h>

double min(double x, double y) {return x < y? x : y;}

int main(void)
{
    printf("%lf", min(52.23123125, 77.7874563));
}