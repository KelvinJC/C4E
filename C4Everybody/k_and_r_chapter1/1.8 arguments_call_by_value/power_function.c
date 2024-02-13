
# include <stdio.h>
/*
One aspect of C functions may be unfamiliar to programmers who are used to other languages, 
particularly Fortran and PL/I. 

In C, all function arguments are passed "by value." 
This means that the called function is given the values of its arguments in temporary variables
(actually on a stack) rather than their addresses. 
This leads to some different properties than are seen with "call by reference" languages like Fortran and PL/I,
in which the called routine is handed the address of the argument, not its value.

The main distinction is that in C the called function cannot alter a variable in the calling function;
it can only alter its private, temporary copy.


Call by value is an asset, however, not a liability. 
It usually leads to more compact programs with fewer extraneous variables, 
because arguments can be treated as conveniently initialized local variables in the called routine. 
For example, here is a version of power which makes use of this fact.
*/

int main() { /* test power function */
    int i;
    int power();

    printf("   n    2^n    -3^n\n");
    for (i = 0; i < 10; ++i)
        printf("%4d %5d  %6d\n", i, power(2,i), power(-3,i));
}

int power(x, n) /* raise x to n-th power; n > 0 */
int x, n;
{
    int i, p;

    for (p = 1; n > 0; --n)
        p = p * x;
    return (p);
}