#include <stdio.h>

/*
Exercise 1-17. 
Write a function reverse(s) which reverses the character at string `s`. 
Use it to write a program which reverses its input a line at a time.
*/

/*
Reverse string in place.
*/

# define MAX_LINE_LENGTH 1000

void main() {
    char s[MAX_LINE_LENGTH];
    int len;
    int get_line();
    void reverse();

    while ((len = get_line(s, MAX_LINE_LENGTH)) > 0) {
        if (len > 1) {
            reverse(s); 
        } 
        printf("%s\n", s);
    }
}


int get_line(line, limit) char line[]; int limit; {
    int i = 0, c;

    for (i = 0; i < limit - 1  && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    return (i);
}


void reverse(input) char input[]; {
    int i, j;
    int buffer;      // index of buffer character
    int odd_length;  // number of characters in input character array is even or odd
    int mid;         // middle index of the input character array

    i = 0;
    while (input[i] != '\n' && input[i] != '\0' ) { // find length of input 
        ++i;
    }

    buffer      = i + 1;    
    odd_length  = i % 2;    
    mid         = i / 2;    

    j = 0;
    if (odd_length == 1) { // for character arrays of odd length
        while (j < mid) {
            input[buffer]     = input[mid - 1 - j];   // copy character at the left of middle index to '\0' index
            input[mid - 1 - j] = input[mid + 1 + j];   // copy character at the right of middle index to left of middle index
            input[mid + 1 + j] = input[buffer];       // copy initial left character from '\n' index to right index
            ++j;
        }
    }
    else {                // for character arrays of even length
        while (j < mid) {
            input[buffer]     = input[mid - 1 - j];   // copy character at the left of middle index to '\0'  index
            input[mid - 1 - j] = input[mid + j];       // copy character at middle index (during first loop i.e. j = 0) or right index to the left of middle index 
            input[mid + j]     = input[buffer];       // copying initial right character from '\0' index to left index
            ++j;
        }
    }

    // re-attach the buffer character
    input[buffer] = '\0';
}

