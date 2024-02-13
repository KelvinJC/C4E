# include <stdio.h>

/*
Exercise 1-13. 
Write a program to convert its input to lower case, 
using a function lower(c) which returns c if c is not a letter, 
and the lower case value of c if it is a letter.
*/


/*
Plan of solution:
Since characters are equivalent to their ASCII character set value
e.g. 'A' == 65 , 'a' == 97
Obtain the integer difference between the ASCII equivalent of uppercase and lower case letters

To convert a letter to its lower case equivalent
 - sum the letter with the integer difference (i.e. 'A' + 32)
*/

# define ASCII_DIFFERENCE 32 // recall that 'a' - 'A' is 32

int main() {
    char lower();
    int c, l;

    while ((c = getchar()) != EOF) {
        l = lower(c);
        putchar(l);
    }
}

char lower(c) 
char c;
{
    if (c >= 65 && c <= 90) { // check if c is a letter between A and Z
        return c + ASCII_DIFFERENCE;
    }
    else {
        return c;
    }
}