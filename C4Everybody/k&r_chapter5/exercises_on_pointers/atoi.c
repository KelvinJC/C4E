/*
Rewrite the `atoi` function, 
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


int atoi(char* str) { /* convert str to integer */

    int n = 0;

    for (; *str >= '0' && *str <= '9'; ++str) {
        n = 10 * n + *str - '0';
    }
    return(n);
}