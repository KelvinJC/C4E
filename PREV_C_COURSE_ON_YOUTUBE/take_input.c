#include <stdio.h>
/*
This 
would 
contain
multi lines
*/

int main() {

    int age;
    // take integer input from user
    printf("Enter integer input value: ");
    scanf("%d", &age);
    // print the value of age variable
    printf("\nThe age input is %d", age);
    printf("\n");

    // take double input from user
    double number;
    printf("\nEnter double input value: ");
    scanf("\n%lf", &number);
    // take character input from user
    char alphabet ;
    printf("\nEnter character input value: ");
    scanf("\n%c", &alphabet);
    // print the value of number and alphabet variables
    printf("\nNumber: %lf", number);
    printf("\nCharacter: %c", alphabet);
    printf("\n");

    // take multiple input from user
    printf("\nEnter both double and character values: ");
    scanf("\n%lf %c", &number, &alphabet);
    // print the value of number and alphabet variable
    printf("\nNumber: %lf", number);
    printf("\nCharacter: %c", alphabet);
    printf("\n");

    // take integer and float input from user
    float float_number;
    int integer;
    printf("\nEnter both float and integer values: ");
    scanf("\n%f %d", &float_number, &integer);
    // print the value of float_number and integer variables
    printf("\nFloat: %lf", float_number);
    printf("\nInteger: %d", integer);

    return 0;
}