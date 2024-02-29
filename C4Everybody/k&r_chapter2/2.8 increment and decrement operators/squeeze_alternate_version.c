/*
Exercise 2-3. 
Write an alternate version of squeeze(s1, s2) 
which deletes each character in s1 which matches any character in the string s2.
*/

#include <stdio.h>


void main() {
    void squeeze();
    char check[] = "abnormalities";
    char s1[] = "servitude";
    char s2[] = "services";
    char s3[] = "Negritude";
    char s4[] = "Server";

    squeeze(check, s1);
    printf("%s\n", s1);
    
    squeeze(check, s2);
    printf("%s\n", s2);

    squeeze(check, s3);
    printf("%s\n", s3);

    squeeze(check, s4);
    printf("%s\n", s4);
}


void squeeze(check, squeezed_string) char check[], squeezed_string[]; {
    int i, j, k; 
    int found;

    for (i = 0, j = 0; squeezed_string[i] != '\0'; ++i, found = 0) {
        for (k = 0, found = 0; check[k] != '\0'; ++k) { 
            if (check[k] == squeezed_string[i]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            squeezed_string[j++] = squeezed_string[i];
        }
    }
    squeezed_string[j] = '\0';
}
