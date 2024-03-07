/*
Rewrite the `get_line` of chapter 1 with pointers
*/

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

void main() {
    int len;            /* current line length */
    char line[MAXLINE]; /* current input line so far */
    int get_line();

    while ((len = get_line(&line[0], MAXLINE)) > 0) // pointer to zeroth element of line - a character array; MAXLINE is the length of the array
        printf("Line: %s\n", line);
}


int get_line(char* str, int limit) { /* get input line into str, return length */
    
    int c, n; 

    for (n = 0; n < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++n, ++str) {
        *str = c;
    }
    if (c == '\n') {
        *str = c;
        ++str;
        ++n;
    }
    *str = '\0';
    return(n);
} 
