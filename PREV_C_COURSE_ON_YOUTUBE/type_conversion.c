#include <stdio.h>

int main() {
    double a = 5.69;
    int b = 9;

    // Implicit type conversion
    int result = a + b;
    printf("%d", result); // 14
    // `result` is an integer
    // `b` is converted impicitly to a double type
    // `a` and `b` are then added
    // with the final sum being stored as an integer in `result`

    // Explicit type conversion
    double result2 = (int)a + b;
    printf("\n%lf", result2); // 14.000000  


    return 0;
}

