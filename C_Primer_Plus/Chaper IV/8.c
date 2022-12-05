#include <stdio.h>

#define GALLON_TO_LITER 3.785F
#define MILE_TO_KM 1.609F

int main(void)
{
    float miles;
    float fuel_usage;
    float gallon_per_mile;
    
    printf("Please enter the fuel usage: ");
    scanf("%f", &fuel_usage);
    printf("Please Enter the total miles: ");
    scanf("%f", &miles);
    
    printf("Gallon usage per mile is %.1f\n", miles / fuel_usage);

    printf("Liter per 100kilos is %.1f", (fuel_usage * GALLON_TO_LITER) / (miles * MILE_TO_KM * 100));
    return 0;
}