# include <stdio.h>

int main() {
    float fahrenheitVal, celsius, fahrenheitToCelsius();
    
    printf("Enter fahrenheit temperature here:\n");
    scanf("%f", &fahrenheitVal);
    celsius = fahrenheitToCelsius(fahrenheitVal);
    printf("The Celsius equivalent of %4.0f degrees Fahrenheit is: %6.1f degrees Celsius", fahrenheitVal, celsius);

}

float fahrenheitToCelsius(fahr)
    float fahr;
{
    float celsius = (5.0/9.0) * (fahr - 32.0);
    return celsius;

}