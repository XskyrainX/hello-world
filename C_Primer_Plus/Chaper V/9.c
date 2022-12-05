#include <stdio.h>
#include <stdbool.h>

void Temperatures(double temperature);

int main(void)
{
    double temperature_input;

    printf("Please enter a temperature number (q to quit): \n");
    while(1 == scanf("%lf", &temperature_input))
    {    
        Temperatures(temperature_input);
        printf("You can enter again (q to quit)");
    }

    return 0;
}

void Temperatures(double temperature)
{
    const double converter = 273.16;
    const double basic = 32.0;
    double celsius = (5.0/9.0)*(temperature - basic);
    
    printf("celsius: %lf\ndegree Fahrenheit: %lf\nKelvin: %lf", 
    celsius, temperature, celsius + converter);

    return;
}
