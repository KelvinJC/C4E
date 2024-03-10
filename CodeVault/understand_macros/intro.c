#include <stdio.h>


/*
Using a macro means that the pre-processor parses the code and substitutes the value of the macro into the code
This step takes place before compilation
No extra memory is taken to store macros (in this case SIZE)
*/
#define SIZE 5

/* Macros can be parameterised 

NOTE:
for best results parameters should be enclosed in parentheses 
*/
#define PRODUCT(X, Y) (X) * (Y)

/* Macros have been used in C and C++ to define classes, functions, iterate over an array, implement a foreach loop etc..*/

void main() {
    int arr[SIZE];
    int i;
    int a = 2, b = 3;

    for (i = 0; i < SIZE; ++i) {
        arr[i] = i * 2;
    }

    for (i = 0; i < SIZE; ++i) {
        printf("%d ", arr[i]);
    }

    printf("\n\nNext example. Print the output of a macro PRODUCT. \n");
    printf("%d\n", PRODUCT(a, b));

    printf("\nNext example. Print the output of a macro PRODUCT to show the benefit of parentheses. \n");
    printf("%d\n", PRODUCT(a + 1, b));
   

}