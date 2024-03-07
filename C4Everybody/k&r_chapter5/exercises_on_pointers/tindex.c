/*
Rewrite the function t_index(s, t), 
which returns the position of the rightmost occurrence of t in s, 
or -1 if there is none.
*/

#include <stdio.h>


int t_index(char *s, char t) { /* find position of character t in array s */

    int index = -1; // initialise index of element at -1; this is returned if unchanged i.e. t is not found
    char* p = s;

    while (*p) {
        if (*p == t) {
            index = p - s;
        }
        p++;
    }
    return(index);
}


void main() {
    char s[] = "hello world";
    char t = 'h';
    int index = t_index(s, t);
    if (index != -1) {
        printf("Rightmost occurrence of '%c' in '%s' is at position %d.\n", t, s, index);
    } else {
        printf("'%c' not found in '%s'.\n", t, s);
    }
}