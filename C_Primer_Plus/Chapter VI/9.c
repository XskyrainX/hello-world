#include <stdio.h>

float caculate(float a, float b);

int main(void)
{
    float a, b;
    
    printf("Printf Enter Two float type: ");

    while (scanf("%f%f", &a, &b))
    {
        printf("%f\n", caculate(a, b));
    }
    
    return 0;
}

float caculate(float a, float b)
{
    return (a-b) / (a*b);
}
