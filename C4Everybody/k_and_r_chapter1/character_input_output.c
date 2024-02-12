#include <stdio.h>

int main() { /* copy input to output; 1st version */

    int c;
    
    printf("Enter character input here: \n");

    while ( (c = getchar()) != EOF )
        putchar(c);
}

