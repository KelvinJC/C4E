/*
Rewrite the `reverse` function, 
which converts a string of digits into its numeric equivalent.
*/

#include <stdio.h>

int main() {
    void reverse();
     
    char string[] = "foure";
    printf("String before reverse: %s\n", string);
    reverse(&string[0]);
    printf("String after reverse: %s\n", string);

}


void reverse(char* str) {
    char temp;
    char* start = str; // pointer to start of array

    // pointer to end of array
    char* end = str;    
    while(*end) {
        end++;
    }
    end--; // Move back one character to point to the last valid character

    // swap characters pointed to by start and end pointers until they meet or cross each other
    for (; start < end; start++, end--) {
        printf("diff here %d\n", end - start);
        temp = *start;
        *start = *end;
        *end = temp;
    }
}
