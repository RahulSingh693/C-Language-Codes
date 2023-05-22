#include <stdio.h>

int main()
{
    float t, C;

    printf("Enter the temperature (in fahrenheit) : ");
    scanf("%f", &t);

    C = (t - 32) / 1.8;

    printf("The temperature in celcius = %f degree", C);
}