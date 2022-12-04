#include <stdio.h>

int main(void)
{
    int sec_per_year = 31560000;
    int year;

    printf("Please Enter Your Age: __\b\b");
    scanf("%d", &year);
    printf("%d,%d\n", sec_per_year, year);
    unsigned int seconds = sec_per_year * year;
    printf("Total Seconds is %u\n", seconds);

   return 0;

/*     float sec_per_year = 3.156E7;
    int year;
    printf("Please Enter Your Age: __\b\b");
    scanf("%d", &year);
    printf("Total Seconds is %llf", sec_per_year * year);
 */}