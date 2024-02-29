/*
To begin, let us design and write a program to print each line of its input
that contains a particular "pattern" or string of characters. 
(This is a special case of the UNIX utility program grep.) 
For example, searching for the pattern "the" in the set of lines
*/

#include <stdio.h>
#define MAXLINE 1000


void main() { /* find all lines matching a pattern */

    char line[MAXLINE];
    int get_line();
    int index_();

    while (get_line(line, MAXLINE) > 0) {
        if (index_(line, "the") >= 0)
            printf("%s", line);
    }
}


int get_line(string, limit) /* get line into string, return length */
char string[]; 
int limit; 
{
    int c, i;

    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        string[i] = c;
    if (c == '\n') {
        string[i] = c;
        ++i;
    }
    string[i] = '\0';
    return(i);
}


int index_(str, substring) char str[], substring[]; { /* return index of substring in str, -1 if none */
    int i, j, k;

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i, k = 0; substring[k] != '\0' && str[j] == substring[k]; j++, k++)
            ;
        if (substring[k] == '\0')
            return(i);
    }
    return(-1);
}