#include <stdio.h>

void arrange(double *, double *, double *);

int main(void)
{
    double a = 3.1;
    double b = 2.2;
    double c = 1.3;
    
    arrange(&a, &b, &c);
    printf("a:%lf, b:%lf, c:%lf", a, b, c);
}

void arrange(double * a, double * b, double * c)
{
    double temp;
    
    if (*a > *b)
    {
        temp = *b;
        *b = *a;
        *a = temp;
    }
        
    if (*b > *c)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }

    if (*a > *b)
    {
        temp = *b;
        *b = *a;
        *a = temp;
    }

}