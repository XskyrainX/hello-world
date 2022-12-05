#include <stdio.h>

int main(void)
{
    double a, b;
    
    printf("Printf Enter Two float type: ");
    while (2 == scanf("%lf%lf", &a, &b))
    {
        printf("(%g - %g) / (%g * %g)", a, b, a, b);
        printf(" = %g.\n", (a-b) / (a*b));
        printf("You can enter again (q to quit)\n");
    }
    printf("Done.\n");
    
    return 0;
}