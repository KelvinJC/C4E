#include <stdio.h>

int main() {
    void reverse();
     
    char string[] = "four";
    printf("String: %s\n", string);
    reverse(string);
}


void reverse(string) char string[]; {
    int left, right, temp, len;

    // Calculate string length
    for (len = 0; string[len] != '\0'; len++)
        ;

    // Reverse string
    for (left = 0, right = (len - 1); left < right; left++, right--) {
        temp = string[left];
        string[left] = string[right];
        string[right] = temp;
    }
    printf("Reverse of string: %s\n", string);
}

