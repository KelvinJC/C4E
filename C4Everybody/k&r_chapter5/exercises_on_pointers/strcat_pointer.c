/*
Exercise 5-2. 
Write a pointer version of the function strcat
which we showed in Chapter 2: 
strcat(s, t) copies the string t to the end of s.
*/


#include <stdio.h>

void main() {
    void strcat_p();
    char str[50] = "string - ";
    char t[10] = "tie";

    strcat_p(&str[0], &t[0]);
    printf("%s\n", str);

}

void strcat_p(char* s, char* t) {/* concatenate t to the end of s */

    while (*s) {
        s++;
    }

    while (*s++ = *t++) 
    ;
}