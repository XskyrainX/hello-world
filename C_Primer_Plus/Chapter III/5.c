#include <stdio.h>

#define SEC_PER_YEAR 3.156E7

int main(void)
{
/*     int sec_per_year = 31560000;
    int year;

    printf("Please Enter Your Age: __\b\b");
    scanf("%d", &year);
    printf("%d,%d\n", sec_per_year, year);
    unsigned int seconds = sec_per_year * year;
    printf("Total Seconds is %u\n", seconds);

   return 0; */

    int year;
    
    printf("Please Enter Your Age: __\b\b");
    scanf("%d", &year);

    printf("%d years old includes %g seconds", year, SEC_PER_YEAR * (double)year);
}