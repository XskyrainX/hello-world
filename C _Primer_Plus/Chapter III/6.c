#include <stdio.h>

int main(void)
{
    int M_water = 3;
    float kilo;
    double nums;
    printf("Please Enter The Kilo: ____\b\b\b\b");
    scanf("%f", &kilo);
    nums = kilo * 950 / M_water * 1.0E23;
    printf("Total Num = %e", nums);

    return 0;
}