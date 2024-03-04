#include <stdio.h>

void main() {
    void swap();
    int a = 1, b = 2;

    printf("Before swap a = %d, b = %d \n", a, b);
    swap(&a, &b);
    printf("After swap a = %d, b = %d", a, b);

}

void swap(int *px, int *py) { /* interchange *px and *py */

    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}