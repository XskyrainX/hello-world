#include <stdio.h>

#define PINT_PER_CUP 2
#define CUP_PER_OUNCE 8
#define OUNCE_PER_BIGSPOON 2
#define BIGSPOON_PER_TEASPOON 3

int main(void)
{
    float cup;

    printf("Plase Enter the number of cups: __\b\b");
    scanf("%f", &cup);
    printf("pints: %f\n", cup / PINT_PER_CUP);
    printf("ounce: %f\n", cup * CUP_PER_OUNCE);
    printf("spoon: %f\n", cup * CUP_PER_OUNCE * OUNCE_PER_BIGSPOON);
    printf("small_spoon: %f\n", cup * CUP_PER_OUNCE * OUNCE_PER_BIGSPOON * BIGSPOON_PER_TEASPOON);

    return 0;
}