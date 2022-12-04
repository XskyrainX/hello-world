#include <stdio.h>

int toes = 10;
int toes2, toes3;

int main()
{
    toes2 = toes * toes;
    toes3 = toes2 * toes;
    printf("toes = %d, toes squared = %d, toes cubed = %d",toes, toes2, toes3);

    return 0;
}