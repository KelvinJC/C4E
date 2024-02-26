/*
Char's and int's may be freely intermixed in arithmetic expressions.
Every char in an expression is automatically converted to an int. 
This permits considerable flexibility in certain kinds of character transformations. 

---      ---
One is exemplified by the function atoi, 
which converts a string of digits into its numeric equivalent.
*/

#include <stdio.h>


void main() {
    int atoi();

    printf("The number is %d\n", atoi("4563"));
    printf("The number is %d\n", atoi("14574"));
    printf("The number is %d\n", atoi("4256"));
    printf("The number is %d\n", atoi("45983"));
    printf("The number is %d\n", atoi("941103"));
    printf("The number is %d\n", atoi("03956273"));

}

int atoi(s) char s[]; { /* convert s to integer */
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + s[i] - '0';
    return(n);       
}