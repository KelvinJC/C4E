#include <stdio.h>

int main() {
    void reverse();
     
    char string[] = "four";
    printf("String: %s\n", string);
    reverse(string);
}


void reverse(string) char string[]; {
    int i, j, c, p, len;

    // Calculate string length
    for (len = 0; string[len] != '\0'; len++)
        ;
        
    // Reverse string
    for (i = 0, j = (len - 1); i < j; i++, j--) {
        c = string[i];
        string[i] = string[j];
        string[j] = c;
    }
    printf("Reverse of string: %s\n", string);
}

