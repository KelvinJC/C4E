#include <stdio.h>

int main() {
    int age = 10;
    printf("\nAge = %d", age);

    // Float 
    // Uses 4 bytes to store number
    // 'f' at the end symbolises number is a float
    float float_number = 10.95f ;
    printf("\nFloat number = %f", float_number);
    // Limit the decimal places
    printf("\nThe float number rounded to 2 decimal places is %.2lf", float_number);

    // Double 
    // Uses 8 bytes to store number
    // Recommended to use for float since it can store larger numbers with higher accuracy
    double number = 12.45;
    printf("\nDouble number = %lf", number);

    // Limit the decimal places
    printf("\nThe double number rounded to 2 decimal places is %.2lf", number);

    // Exponential
    double exp_number = 5.5e6;
    printf("\nExponential number is %lf", exp_number);

    // Char
    char character = 'A';
    printf("\n%c", character);
    // Char is internally stored as integer
    // using %d to print will render the integer value of the character
    printf("\nInteger value of character is %d", character);
    
    // Size of operator
    // used to find the size of data types in bytes
    printf("\nint size = %zu bytes", sizeof(age));
    printf("\ndouble size = %zu bytes", sizeof(number));

    return 0;
}