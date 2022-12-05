#include <stdio.h>

double caculate(double a, double b);

int main(void)
{
    double a, b;
    
    printf("Printf Enter Two float type: ");
    while (2 == scanf("%lf%lf", &a, &b))
    {
        printf("(%g - %g) / (%g * %g)", a, b, a, b);
        printf(" = %g.\n", caculate(a, b));
        printf("You Can Enter again (q to quit).\n");
    }
    printf("Done.\n");

    return 0;
}

double caculate(double a, double b)
{
    return (a-b) / (a*b);
}
