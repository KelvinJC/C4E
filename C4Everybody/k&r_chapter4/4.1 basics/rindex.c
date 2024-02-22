/*
Exercise 4-1. 
Write the function rindex(s, t), which returns the position of the rightmost occurrence of t in s, 
or -1 if there is none.
*/

#include <stdio.h>

void main() {
    int r_index();
    
    printf(" 'H' is at position %d\n", r_index("Hello the world", 'H'));
    printf(" 'x' is at position %d\n", r_index("Hello the world", 'x'));
    printf(" 'T' is at position %d\n", r_index("The hello world\n", 'T'));
    printf(" 't' is at position %d\n", r_index("Hello the world is there", 't'));
    printf(" 'o' is at position %d\n", r_index("Hello world. Do think on this. Have a nice day tint\n", 'o'));
    printf(" 'e' is at position %d\n", r_index("Hello the world is there", 'e'));
}

int r_index(string, t) char string[]; char t; {

    int i, index;

    for (i=0; string[i] != '\0'; ++i) {
        if (string[i] == t) {
            index = i;
        }
    }

    if (index == 0) // cover case where t is found only at the first index of the string
        return(0);
    else if (index && index <= i && index >= 0 ) { // returned index must be between first and last index of string 
        return (index);
    }
    else 
        return(-1); 
}