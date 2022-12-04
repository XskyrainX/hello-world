#include <stdio.h>

_Bool kkkk;

void Temperatures(double temperature)
{
    const double converter = 273.16;
    double celsius = (5.0/9.0)*(temperature - 32.0);
    printf("celsius: %lf\ndegree Fahrenheit: %lf\nKelvin: %lf", 
    celsius, temperature, celsius + converter);
}

int main(void)
{
    double temperature_input;

    while(scanf("%lf", &temperature_input) == 1)
        Temperatures(temperature_input);

    return 0;
}