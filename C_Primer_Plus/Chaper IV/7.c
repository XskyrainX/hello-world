#include <stdio.h>
#include <float.h>

int main(void)
{
    double d = 1.0/3.0;
    float f = 1.0/3.0; 

    printf("double = %.6f, float = %.6f\n", d, f);
    printf("double = %.12f, float = %.12f\n", d, f);
    printf("double = %.16f, float = %.16f\n", d, f);
    printf("FLT_DIG: %d, DBL_DIG: %d\n", FLT_DIG, DBL_DIG);//FLT_DIG,DBL_DIG分别表示float和double有效十进制位数

    return 0;
}