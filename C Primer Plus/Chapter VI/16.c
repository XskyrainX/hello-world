#include <stdio.h>

#define BASIC 100

int main(void)
{
    int a = BASIC;
    int b = BASIC;
    int years;
    
    do
    {
        a *= 1.05;
        b += BASIC * 0.1;
        years++;
    } while (a < b);
    
    printf("%d years Later, Deirdre: $%d is greater than Darhne: $%d", years, a, b);
    
    return 0;
}