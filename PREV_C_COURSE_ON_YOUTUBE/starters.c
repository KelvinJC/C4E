#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    int age = 25;
    printf("C-programming is dope! \n");
    printf("%d", age);
    // print
    printf("\nAge: %d", age);
    // print a float
    printf("\n%f", 5.5);
    age = 31;
    printf("\nNew age: %d", age);

    printf("\n------------------------------------------");
    printf("\n----- Assign one variable to another -----");


    int firstNumber = 33;
    printf("\nfirstNumber = %d", firstNumber);
    int secondNumber = firstNumber;
    printf("\nsecondNumber = %d", secondNumber);


    printf("\n-------------------------------------");
    printf("\n----- Assign multiple variables -----");

    int variable1, variable2 = 25;
    printf("\n%d", variable1);
    printf("\n%d var2", variable2);


    return 0;
}

// float tie() {
//     return 5.6 + 5.6;
// }
