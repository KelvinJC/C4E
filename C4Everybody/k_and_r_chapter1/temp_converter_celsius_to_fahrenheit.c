# include <stdio.h>

int main() {
    int lower, upper, step;
    float fahrenheit, celsius;
    lower = 0;
    upper = 100;
    step = 10;
    
    printf("-- Celsius to Fahrenheit conversion table --\n");
    while ( celsius <= upper ) {
        fahrenheit = ((9.0/5.0) * celsius) + 32.0;
        printf("[Celsius %6.1f -- Fahrenheit %4.0f]\n", celsius, fahrenheit);
        celsius += step;
    }

}