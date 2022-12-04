#include <stdio.h>

int main(void)
{
    float temp;
    scanf("%f", &temp);

    printf("The input is %f or %e.\n", temp, temp);
    printf("The input is %+f or %E.\n", temp, temp);

    return 0;
}