#include <stdio.h>

// a macro to print a variable and its memory address
#define PRINT_VAR(X)\
    printf(#X " is %d at address %p\n", X, &X);


void main() {
    int a = 3, b = 8;    
    PRINT_VAR(a);
}