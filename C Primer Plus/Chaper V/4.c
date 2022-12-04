#include <stdio.h>

int main(void)
{
    float centimeters;
    
    printf("Enter a height centimeters: ");
    scanf("%f", &centimeters);
    
    while(centimeters > 0)
    {
        printf("cm = %f feet, %f inches\n", centimeters / 30.48, centimeters / 2.54);
        printf("Enter a height centimeters (<= 0 to quit): ");
        scanf("%f", &centimeters);
    }

    return 0;
}