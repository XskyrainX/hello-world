#include <stdio.h>

void cubed(double a)
{
    printf("%lf\n", a * a * a);
}

int main(void)
{
    double num;

    scanf("%lf", &num);
    cubed(num);

    return 0; 
}