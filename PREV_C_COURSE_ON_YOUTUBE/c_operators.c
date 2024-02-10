#include <stdio.h>


int main() {
    // best to do division with double data type
    double x = 12.0;
    double result = x/8;
    printf("Result of %.2lf divided by 8 is %.2lf", x, result);

    // Pre-increment operator
    int y = 12;
    printf("\nValue y=%d incremented by 1 is %d", y, ++y);
    
    // Pre-decrement operator
    printf("\nValue y=%d decremented by 1 is %d", y, --y);
    return 0;

    /*
    NOTE:
    The major difference between ++x and x++.
    ++x 
    is called pre-increment index.
    In this the value of x is increased and then used in the statement .

    x++
    is called postincrement index.
    In this the value of x is used in the statement and then increased .
    */
}