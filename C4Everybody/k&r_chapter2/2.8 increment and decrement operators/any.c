/*
Exercise 2-4. 
Write the function any(s1, s2) 
which returns the first location in the string s1 where any character from the string s2 occurs, 
or -1 if s1 contains no characters from s2.
*/

#include <stdio.h>


void main() {
    int any();
    
    // tests
    printf("%d\n", any("servitude", "abnormalities"));
    printf("%d\n", any("fluffies", "abnormalities"));
    printf("%d\n", any("jumping", "nomenclature"));
    printf("%d\n", any("operating", "zig"));
    printf("%d\n", any("hot", "pill"));
    printf("%d\n", any("nick", "flask"));

}

int any(string, checker) char string[], checker[]; {
    int i, j, k, found = 0;

    for (i = 0, j = 0; string[i] != '\0'; ++i) {
        for (k = 0; checker[k] != '\0'; ++k) {
            if (checker[k] == string[i]) {
                found = 1;
                break;
            } 
        }
        if (found == 1) {
            return(i);
        }
    }
    return(-1);
}