#include <stdio.h>

int main(void)
{
    float cup;

    printf("Plase Enter the number of cups: __\b\b");
    scanf("%f", &cup);
    printf("pints: %f\n", cup / 2);
    printf("ounce: %f\n", cup * 8);
    printf("spoon: %f\n", cup * 8 * 2);
    printf("small_spoon: %f\n", cup * 8 * 2 * 3);

    return 0;
}