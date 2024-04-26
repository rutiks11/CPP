// Accept temperature in Fahrenheit and print it in Celsius(C) and kelvin(K) 

#include <stdio.h>

int main()
{
    float temperature = 0.0f;
    float Celcius = 0.0f;
    float Kelvin = 0.0f;

    printf("Enter temperature in Fahrenheit :: ");
    scanf("%f",&temperature);

    Celcius = 5 / (9/(temperature-32));
    Kelvin = Celcius + 273.15;

    printf("Temperature in Celcius :: %f",Celcius);
    printf("Temperature in Kelvin :: %f", Kelvin);    
    
    return 0;
}