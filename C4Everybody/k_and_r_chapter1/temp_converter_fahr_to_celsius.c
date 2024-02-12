# include <stdio.h>

/* 
The next program prints a table of Fahrenheit temperatures 
and their centigrade or Celsius equivalents, 
using the formula C=(5/9)(F-32). 

*/

/* print Fahrenheit-Celsius table
for f = 0, 20, ..., 300 */

int main() {
    int lower, upper, step;
    float fahr, celsius;
    lower = 0;              /* lower limit of temperature table*/
    upper = 300;
    step  = 20;              /* step size */
    fahr  = lower;
    
    printf("-- Fahrenheit to Celsius conversion table -- \n");
    while ( fahr <= upper ) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("[Fahrenheit: %4.0f -- Celsius: %6.1f]\n", fahr, celsius);
        fahr = fahr + step;
    }
    
}