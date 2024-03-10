#include <stdio.h>

// a macro to swap the values of variables A and B
#define SWAP(A, B)\
    A ^= B ^= A ^= B

void main() {
    int a = 3, b = 8;
    
    printf("before swap a = %d, b = %d\n", a, b);
    // a ^= b ^= a ^= b;        // one liner to swap variables with the same type
    SWAP(a, b);                 // use macro for swap
    printf("after swap a = %d, b = %d", a, b);
}