/*
Exercise 4-9. 
Define a macro swap(x, y) which interchanges its two int arguments.
(Block structure will help.)
*/

#include <stdio.h>

#define SWAP(A, B) \
        int temp = A;  \
        A = B;     \
        B = temp;

void main() {
    int a = 3, b = 8;

    printf("before swap: a = %d, b = %d\n", a, b);
    SWAP(a, b);
    printf("after swap: a = %d, b = %d\n", a, b);
}

