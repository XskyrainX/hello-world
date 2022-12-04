#include <stdio.h>

#define MASS_PER_MOLE 3.0E-23
#define MASS_PER_QUART 950

int main(void)
{
    double molecules;
    double quart;

    printf("Please Enter The Kilo: ____\b\b\b\b");
    scanf("%f", &quart);
    molecules = quart * MASS_PER_QUART / MASS_PER_MOLE;
    printf("%g quart water includes %e water molecules.\n", quart, molecules);

    return 0;
}