#include <stdio.h>

int main(void)
{
    float full_num;
    
    printf("Enter a floating-point value: ");
    scanf("%f", &full_num);

    printf("fixed-point notation: %f\n", full_num);
    printf("exponential notation: %e\n", full_num);
    printf("p notation: %a\n\r", full_num);

    return 0;
}