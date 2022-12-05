#include <stdio.h>

void cubed(double a);

int main(void)
{
    double num;

    printf("Please enter the double number.\n");
    scanf("%lf", &num);
    cubed(num);

    return 0; 
}

void cubed(double a)
{
    printf("The cube of %lf is %lf\n", a, a * a * a);

    return;
}
