#include <stdio.h>

int main() {
    void reverse();
     
    char string[] = "four";
    printf("String: %s\n", string);
    reverse(string);
}


void reverse(string) char string[]; {
    int left_index, right_index, temp, len;

    // Calculate string length
    for (len = 0; string[len] != '\0'; len++)
        ;

    // Reverse string
    for (left_index = 0, right_index = (len - 1); left_index < right_index; left_index++, right_index--) {
        temp = string[left_index];
        string[left_index] = string[right_index];
        string[right_index] = temp;
    }
    printf("Reverse of string: %s\n", string);
}

