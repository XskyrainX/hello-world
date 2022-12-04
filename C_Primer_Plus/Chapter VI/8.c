#include <stdio.h>

int main(void)
{
    float a, b;
    
    printf("Printf Enter Two float type: ");

    while (scanf("%f%f", &a, &b))
    {
        printf("%f\n", (a-b) / (a*b));
    }
    
    return 0;
}