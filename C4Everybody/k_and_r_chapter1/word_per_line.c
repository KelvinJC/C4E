# include <stdio.h>


/*
Exercise 1-10.
Write a program which prints the words in its input, one per line.
*/


int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == '\b' || c == ' ') /* Define delimiters of a word*/
            putchar('\n');
        else 
            putchar(c);
    }
}