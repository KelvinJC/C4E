/*
Consider the function squeeze(s, c) 
which removes all occurrences of the character c from the string s.
*/

#include <stdio.h>


void main() {
    void squeeze();
    char s1[7] = "Server";
    char s2[10] = "servitude";
    char s3[10] = "services";
    char s4[10] = "Negritude";

    squeeze(s1, 'e');
    printf("%s\n", s1);
    
    squeeze(s2, 'e');
    printf("%s\n", s2);

    squeeze(s3, 's');
    printf("%s\n", s3);

    squeeze(s4, 'e');
    printf("%s\n", s4);
}

void squeeze(string, character) char string[]; char character; {
    int i, j;

    for (i = 0, j = 0; string[i] != '\0'; ++i) {
        if (string[i] != character) {
            string[j++] = string[i];
        }
    }
    string[j] = '\0';
}