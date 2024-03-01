/*
Exercise 4-8. 
Write a recursive version of the function reverse(s), 
which reverses the array s.


In this solution:
- no extra arguments are passed into the reverse function
- length of the array is determined in the reverse function
- a helper recursive function is used to perform the actual reversal
- it takes in the array and two index arguments (`start` and `end`)
*/


#include <stdio.h>

int main() {
    void reverse();
     
    char array[] = "three";
    printf("String: %s\n", array);
    reverse(array);
    printf("Reverse array: %s\n", array);

}


void reverse(array) char array[]; {
    int len;
    void reverse_helper();

    // get length of character array
    for (len = 0; array[len] != '\0'; len++)
        ;

    reverse_helper(array, 0, len - 1);
}


void reverse_helper(array, start, end) char array[]; int start, end; {
    int temp;
    // swap characters at start and end indices
    if (start >= end) {
        return;
    }

    // recursive call with updated start and end indices
    else {
        temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        reverse_helper(array, start + 1, end - 1);
    }
}