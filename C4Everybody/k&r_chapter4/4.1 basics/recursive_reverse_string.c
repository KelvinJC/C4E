/*
Exercise 4-8. 
Write a recursive version of the function reverse(s), 
which reverses the array s.


In this attempt:
- the array length was calculated in the main function
- two extra arguments (`start` and `end`) are passed into the reverse function
*/


#include <stdio.h>

int main() {
    int len;
    void reverse();
     
    char array[] = "three";
    printf("String: %s\n", array);

    // get length of character array
    for (len = 0; array[len] != '\0'; len++)
        ;

    reverse(array, 0, len - 1);
    printf("Reverse array: %s\n", array);

}


void reverse(array, start, end) char array[]; int start, end; {
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
        reverse(array, (start + 1), (end - 1));
    }
}