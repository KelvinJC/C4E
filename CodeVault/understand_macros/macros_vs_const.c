/*
Macros are better than const to define variable length arrays 
as well as cases where there is to be string concatenation
*/
    
#include <stdio.h>


#define MAX 100                             // define an array's length with a macro
#define INTRODUCE "My name is "             // store a string to be concatenated later

const int MAX_INT = 100;                    // declare an array's length with a constant variable
const char* INTRODUCE2 = "My name is ";     // declare a string to be concatenated later
const int NUM = 10;                         // declare an integer to be used later


void main() {
    void define_array();
    void concatenate_strings();
    void use_defined_integer();

    printf("Example 1: \n");
    define_array();

    printf("\nExample 2: \n");
    concatenate_strings();

    printf("\nExample 3: \n");
    use_defined_integer();
}

void define_array() {
    // With macro
    int arr[MAX];                  
    printf("%p \n", &arr[0]);

    /* 
    With the defined const.
    Commented out because some compilers 
    including the one curently on my machine reject the statement
    */
    // int arr2[MAX_INT];            
    // printf("%p \n", &arr[0]);

}

void concatenate_strings() {
    // With macro.
    printf(INTRODUCE"Kelvin \n");

    /* 
    With the defined const.
    Commented out because some compilers 
    including the one curently on my machine reject the statement
    */
    // printf(INTRODUCE2"Kelvin");  // example uses const;
}

void use_defined_integer() {
    // With const; works just fine. Recommended.
    printf("%d \n", NUM);
}
