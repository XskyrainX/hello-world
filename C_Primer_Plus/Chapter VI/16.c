#include <stdio.h>

#define RATE_SIMP 0.10
#define RATE_COMP 0.05
#define BASIC 100.0

int main(void)
{
    double a = BASIC;
    double b = BASIC;
    int years = 0;
    
    do
    {
        a += a * RATE_COMP;
        b += BASIC * RATE_SIMP;
        years++;
    } while (a < b);
    
    printf("%d years Later, Deirdre: $%.2f is greater than Darhne: $%.2f", years, a, b);
    
    return 0;
}